#include "WasmEdge.hpp"

/* --------------- FunctionTypeContext -------------------------------*/
pysdk::FunctionTypeContext::FunctionTypeContext(pybind11::list param_list,
                                                pybind11::list return_list) {
  auto const param_len = pybind11::len(param_list);
  auto const ret_len = pybind11::len(return_list);
  WasmEdge_ValType param_types[param_len];
  for (size_t i = 0; i < param_len; i++) {
    param_types[i] = param_list[i].cast<WasmEdge_ValType>();
  }
  WasmEdge_ValType ret_types[ret_len];
  for (size_t i = 0; i < ret_len; i++) {
    ret_types[i] = return_list[i].cast<WasmEdge_ValType>();
  }

  HostFType = WasmEdge_FunctionTypeCreate(
      const_cast<const WasmEdge_ValType *>(param_types), param_len,
      const_cast<const WasmEdge_ValType *>(ret_types), ret_len);

  if (HostFType == NULL) {
    throw std::runtime_error("Cannor Create Function Type");
  }
}

pysdk::FunctionTypeContext::FunctionTypeContext(
    WasmEdge_FunctionTypeContext *Hfcxt) {
  external = true;
  HostFType = Hfcxt;
}

pysdk::FunctionTypeContext::~FunctionTypeContext() {
  if (!external)
    WasmEdge_FunctionTypeDelete(HostFType);
}

WasmEdge_FunctionTypeContext *pysdk::FunctionTypeContext::get() {
  return HostFType;
}

uint32_t pysdk::FunctionTypeContext::get_param_len() {
  return WasmEdge_FunctionTypeGetParametersLength(
      const_cast<const WasmEdge_FunctionTypeContext *>(HostFType));
}

pybind11::list
pysdk::FunctionTypeContext::get_param_types(const uint32_t &len) {
  pybind11::list ret;
  WasmEdge_ValType rets[len];
  auto const len_api = WasmEdge_FunctionTypeGetParameters(
      const_cast<const WasmEdge_FunctionTypeContext *>(HostFType), rets, len);
  for (size_t i = 0; i < len_api; i++) {
    ret.append(rets[i]);
  }
  return ret;
}

uint32_t pysdk::FunctionTypeContext::get_ret_len() {

  return WasmEdge_FunctionTypeGetReturnsLength(
      const_cast<const WasmEdge_FunctionTypeContext *>(HostFType));
}

pybind11::list pysdk::FunctionTypeContext::get_ret_types(const uint32_t &len) {
  pybind11::list ret;
  WasmEdge_ValType rets[len];
  auto const len_api = WasmEdge_FunctionTypeGetReturns(
      const_cast<const WasmEdge_FunctionTypeContext *>(HostFType), rets, len);
  for (size_t i = 0; i < len_api; i++) {
    ret.append(rets[i]);
  }
  return ret;
}
/* --------------- FunctionTypeContext End  ---------------------------------*/

/* --------------- Function ----------------------------------------*/
/**
 * @brief Construct a new pysdk::Function object
 *
 * @param cxt FunctionTypeContext
 * @param func Function that takes `Value(s)` and returns
 * `tuple(Result,list(Value(s)))`
 * @param cost The function cost in statistics. Pass 0 if the calculation is not
 * needed.
 */
pysdk::Function::Function(FunctionTypeContext &cxt, pybind11::function func,
                          uint64_t &cost)
    : func_util(new pysdk::function_utility) {
  func_util->func = func;
  func_util->param_len = cxt.get_param_len();
  HostFuncCxt = WasmEdge_FunctionInstanceCreate(
      const_cast<const WasmEdge_FunctionTypeContext *>(cxt.get()),
      host_function, (void *)func_util, cost);
}

pysdk::Function::~Function() {
  WasmEdge_FunctionInstanceDelete(HostFuncCxt);
  delete func_util;
}

WasmEdge_FunctionInstanceContext *pysdk::Function::get() { return HostFuncCxt; }

pysdk::FunctionTypeContext pysdk::Function::get_func_type() {
  return pysdk::FunctionTypeContext(const_cast<WasmEdge_FunctionTypeContext *>(
      WasmEdge_FunctionInstanceGetFunctionType(HostFuncCxt)));
}
/* --------------- Function End ----------------------------------------*/

/* --------------- Host_Function ----------------------------------------*/
WasmEdge_Result pysdk::host_function(void *Data,
                                     WasmEdge_MemoryInstanceContext *MemCxt,
                                     const WasmEdge_Value *In,
                                     WasmEdge_Value *Out) {
  pybind11::list params;

  auto casted_data = (struct function_utility *)Data;

  auto const &func = casted_data->func;

  size_t param_len = casted_data->param_len;

  for (size_t i = 0; i < param_len; i++) {
    params.append(pysdk::Value(In[i]));
  }

  auto params_tup = params.cast<pybind11::tuple>();

  auto const ret = func(*params_tup).cast<pybind11::tuple>();
  auto const vals = ret[1].cast<pybind11::list>();

  for (size_t i = 0; i < pybind11::len(vals); i++) {
    Out[i] = vals[i].cast<pysdk::Value>().get();
  }

  return ret[0].cast<pysdk::result>().get();
};
/* --------------- Host_Function End -------------------------------------*/
