```
Help on module WasmEdge:

NAME
    WasmEdge

CLASSES
    pybind11_builtins.pybind11_object(builtins.object)
        Configure
        Host
        Logging
        Proposal
        Result
        Store
        Type
        VM
        Value
    
    class Configure(pybind11_builtins.pybind11_object)
     |  Method resolution order:
     |      Configure
     |      pybind11_builtins.pybind11_object
     |      builtins.object
     |  
     |  Methods defined here:
     |  
     |  __init__(...)
     |      __init__(self: WasmEdge.Configure) -> None
     |  
     |  add(...)
     |      add(*args, **kwargs)
     |      Overloaded function.
     |      
     |      1. add(self: WasmEdge.Configure, arg0: WasmEdge_Proposal) -> None
     |      
     |      2. add(self: WasmEdge.Configure, arg0: WasmEdge_HostRegistration) -> None
     |  
     |  remove(...)
     |      remove(*args, **kwargs)
     |      Overloaded function.
     |      
     |      1. remove(self: WasmEdge.Configure, arg0: WasmEdge_Proposal) -> None
     |      
     |      2. remove(self: WasmEdge.Configure, arg0: WasmEdge_HostRegistration) -> None
     |  
     |  ----------------------------------------------------------------------
     |  Static methods inherited from pybind11_builtins.pybind11_object:
     |  
     |  __new__(*args, **kwargs) from pybind11_builtins.pybind11_type
     |      Create and return a new object.  See help(type) for accurate signature.
    
    class Host(pybind11_builtins.pybind11_object)
     |  Members:
     |  
     |  Wasi
     |  
     |  WasmEdge
     |  
     |  Method resolution order:
     |      Host
     |      pybind11_builtins.pybind11_object
     |      builtins.object
     |  
     |  Methods defined here:
     |  
     |  __eq__(...)
     |      __eq__(self: object, other: object) -> bool
     |  
     |  __getstate__(...)
     |      __getstate__(self: object) -> int
     |  
     |  __hash__(...)
     |      __hash__(self: object) -> int
     |  
     |  __index__(...)
     |      __index__(self: WasmEdge.Host) -> int
     |  
     |  __init__(...)
     |      __init__(self: WasmEdge.Host, value: int) -> None
     |  
     |  __int__(...)
     |      __int__(self: WasmEdge.Host) -> int
     |  
     |  __ne__(...)
     |      __ne__(self: object, other: object) -> bool
     |  
     |  __repr__(...)
     |      __repr__(self: object) -> str
     |  
     |  __setstate__(...)
     |      __setstate__(self: WasmEdge.Host, state: int) -> None
     |  
     |  __str__ = name(...)
     |      name(self: handle) -> str
     |  
     |  ----------------------------------------------------------------------
     |  Readonly properties defined here:
     |  
     |  __members__
     |  
     |  name
     |      name(self: handle) -> str
     |  
     |  value
     |  
     |  ----------------------------------------------------------------------
     |  Data and other attributes defined here:
     |  
     |  Wasi = <Host.Wasi: 0>
     |  
     |  WasmEdge = <Host.WasmEdge: 1>
     |  
     |  ----------------------------------------------------------------------
     |  Static methods inherited from pybind11_builtins.pybind11_object:
     |  
     |  __new__(*args, **kwargs) from pybind11_builtins.pybind11_type
     |      Create and return a new object.  See help(type) for accurate signature.
    
    class Logging(pybind11_builtins.pybind11_object)
     |  Method resolution order:
     |      Logging
     |      pybind11_builtins.pybind11_object
     |      builtins.object
     |  
     |  Methods defined here:
     |  
     |  __init__(...)
     |      __init__(self: WasmEdge.Logging) -> None
     |  
     |  __str__(...)
     |      __str__(self: WasmEdge.Logging) -> str
     |  
     |  ----------------------------------------------------------------------
     |  Static methods defined here:
     |  
     |  debug(...) from builtins.PyCapsule
     |      debug() -> None
     |  
     |  error(...) from builtins.PyCapsule
     |      error() -> None
     |  
     |  ----------------------------------------------------------------------
     |  Static methods inherited from pybind11_builtins.pybind11_object:
     |  
     |  __new__(*args, **kwargs) from pybind11_builtins.pybind11_type
     |      Create and return a new object.  See help(type) for accurate signature.
    
    class Proposal(pybind11_builtins.pybind11_object)
     |  Members:
     |  
     |  ImportExportMutGlobals
     |  
     |  NonTrapFloatToIntConversions
     |  
     |  BulkMemoryOperations
     |  
     |  ReferenceTypes
     |  
     |  SIMD
     |  
     |  TailCall
     |  
     |  Annotations
     |  
     |  Memory64
     |  
     |  Threads
     |  
     |  ExceptionHandling
     |  
     |  FunctionReferences
     |  
     |  Method resolution order:
     |      Proposal
     |      pybind11_builtins.pybind11_object
     |      builtins.object
     |  
     |  Methods defined here:
     |  
     |  __eq__(...)
     |      __eq__(self: object, other: object) -> bool
     |  
     |  __getstate__(...)
     |      __getstate__(self: object) -> int
     |  
     |  __hash__(...)
     |      __hash__(self: object) -> int
     |  
     |  __index__(...)
     |      __index__(self: WasmEdge.Proposal) -> int
     |  
     |  __init__(...)
     |      __init__(self: WasmEdge.Proposal, value: int) -> None
     |  
     |  __int__(...)
     |      __int__(self: WasmEdge.Proposal) -> int
     |  
     |  __ne__(...)
     |      __ne__(self: object, other: object) -> bool
     |  
     |  __repr__(...)
     |      __repr__(self: object) -> str
     |  
     |  __setstate__(...)
     |      __setstate__(self: WasmEdge.Proposal, state: int) -> None
     |  
     |  __str__ = name(...)
     |      name(self: handle) -> str
     |  
     |  ----------------------------------------------------------------------
     |  Readonly properties defined here:
     |  
     |  __members__
     |  
     |  name
     |      name(self: handle) -> str
     |  
     |  value
     |  
     |  ----------------------------------------------------------------------
     |  Data and other attributes defined here:
     |  
     |  Annotations = <Proposal.Annotations: 8>
     |  
     |  BulkMemoryOperations = <Proposal.BulkMemoryOperations: 4>
     |  
     |  ExceptionHandling = <Proposal.ExceptionHandling: 11>
     |  
     |  FunctionReferences = <Proposal.FunctionReferences: 12>
     |  
     |  ImportExportMutGlobals = <Proposal.ImportExportMutGlobals: 0>
     |  
     |  Memory64 = <Proposal.Memory64: 9>
     |  
     |  NonTrapFloatToIntConversions = <Proposal.NonTrapFloatToIntConversions:...
     |  
     |  ReferenceTypes = <Proposal.ReferenceTypes: 5>
     |  
     |  SIMD = <Proposal.SIMD: 6>
     |  
     |  TailCall = <Proposal.TailCall: 7>
     |  
     |  Threads = <Proposal.Threads: 10>
     |  
     |  ----------------------------------------------------------------------
     |  Static methods inherited from pybind11_builtins.pybind11_object:
     |  
     |  __new__(*args, **kwargs) from pybind11_builtins.pybind11_type
     |      Create and return a new object.  See help(type) for accurate signature.
    
    class Result(pybind11_builtins.pybind11_object)
     |  Method resolution order:
     |      Result
     |      pybind11_builtins.pybind11_object
     |      builtins.object
     |  
     |  Methods defined here:
     |  
     |  __bool__(...)
     |      __bool__(self: WasmEdge.Result) -> bool
     |  
     |  __init__(...)
     |      __init__(self: WasmEdge.Result) -> None
     |  
     |  __str__(...)
     |      __str__(self: WasmEdge.Result) -> str
     |  
     |  code(...)
     |      code(self: WasmEdge.Result) -> int
     |  
     |  message(...)
     |      message(self: WasmEdge.Result) -> str
     |  
     |  ----------------------------------------------------------------------
     |  Static methods inherited from pybind11_builtins.pybind11_object:
     |  
     |  __new__(*args, **kwargs) from pybind11_builtins.pybind11_type
     |      Create and return a new object.  See help(type) for accurate signature.
    
    class Store(pybind11_builtins.pybind11_object)
     |  Method resolution order:
     |      Store
     |      pybind11_builtins.pybind11_object
     |      builtins.object
     |  
     |  Methods defined here:
     |  
     |  __init__(...)
     |      __init__(self: WasmEdge.Store) -> None
     |  
     |  listFunctions(...)
     |      listFunctions(self: WasmEdge.Store, arg0: int) -> list
     |  
     |  listModules(...)
     |      listModules(self: WasmEdge.Store, arg0: int) -> list
     |  
     |  ----------------------------------------------------------------------
     |  Static methods inherited from pybind11_builtins.pybind11_object:
     |  
     |  __new__(*args, **kwargs) from pybind11_builtins.pybind11_type
     |      Create and return a new object.  See help(type) for accurate signature.
    
    class Type(pybind11_builtins.pybind11_object)
     |  Members:
     |  
     |  I32
     |  
     |  I64
     |  
     |  F32
     |  
     |  F64
     |  
     |  V128
     |  
     |  FuncRef
     |  
     |  ExternRef
     |  
     |  Method resolution order:
     |      Type
     |      pybind11_builtins.pybind11_object
     |      builtins.object
     |  
     |  Methods defined here:
     |  
     |  __eq__(...)
     |      __eq__(self: object, other: object) -> bool
     |  
     |  __getstate__(...)
     |      __getstate__(self: object) -> int
     |  
     |  __hash__(...)
     |      __hash__(self: object) -> int
     |  
     |  __index__(...)
     |      __index__(self: WasmEdge.Type) -> int
     |  
     |  __init__(...)
     |      __init__(self: WasmEdge.Type, value: int) -> None
     |  
     |  __int__(...)
     |      __int__(self: WasmEdge.Type) -> int
     |  
     |  __ne__(...)
     |      __ne__(self: object, other: object) -> bool
     |  
     |  __repr__(...)
     |      __repr__(self: object) -> str
     |  
     |  __setstate__(...)
     |      __setstate__(self: WasmEdge.Type, state: int) -> None
     |  
     |  __str__ = name(...)
     |      name(self: handle) -> str
     |  
     |  ----------------------------------------------------------------------
     |  Readonly properties defined here:
     |  
     |  __members__
     |  
     |  name
     |      name(self: handle) -> str
     |  
     |  value
     |  
     |  ----------------------------------------------------------------------
     |  Data and other attributes defined here:
     |  
     |  ExternRef = <Type.ExternRef: 111>
     |  
     |  F32 = <Type.F32: 125>
     |  
     |  F64 = <Type.F64: 124>
     |  
     |  FuncRef = <Type.FuncRef: 112>
     |  
     |  I32 = <Type.I32: 127>
     |  
     |  I64 = <Type.I64: 126>
     |  
     |  V128 = <Type.V128: 123>
     |  
     |  ----------------------------------------------------------------------
     |  Static methods inherited from pybind11_builtins.pybind11_object:
     |  
     |  __new__(*args, **kwargs) from pybind11_builtins.pybind11_type
     |      Create and return a new object.  See help(type) for accurate signature.
    
    class VM(pybind11_builtins.pybind11_object)
     |  Method resolution order:
     |      VM
     |      pybind11_builtins.pybind11_object
     |      builtins.object
     |  
     |  Methods defined here:
     |  
     |  __init__(...)
     |      __init__(*args, **kwargs)
     |      Overloaded function.
     |      
     |      1. __init__(self: WasmEdge.VM) -> None
     |      
     |      2. __init__(self: WasmEdge.VM, arg0: WasmEdge.Configure) -> None
     |      
     |      3. __init__(self: WasmEdge.VM, arg0: WasmEdge.Store) -> None
     |      
     |      4. __init__(self: WasmEdge.VM, arg0: WasmEdge.Configure, arg1: WasmEdge.Store) -> None
     |  
     |  run(...)
     |      run(*args, **kwargs)
     |      Overloaded function.
     |      
     |      1. run(self: WasmEdge.VM, arg0: object, arg1: object, arg2: object, arg3: object, arg4: object) -> tuple
     |      
     |      2. run(self: WasmEdge.VM, arg0: object, arg1: object, arg2: object) -> tuple
     |  
     |  ----------------------------------------------------------------------
     |  Static methods inherited from pybind11_builtins.pybind11_object:
     |  
     |  __new__(*args, **kwargs) from pybind11_builtins.pybind11_type
     |      Create and return a new object.  See help(type) for accurate signature.
    
    class Value(pybind11_builtins.pybind11_object)
     |  Method resolution order:
     |      Value
     |      pybind11_builtins.pybind11_object
     |      builtins.object
     |  
     |  Methods defined here:
     |  
     |  __init__(...)
     |      __init__(self: WasmEdge.Value) -> None
     |  
     |  ----------------------------------------------------------------------
     |  Data descriptors defined here:
     |  
     |  Type
     |  
     |  Value
     |  
     |  ----------------------------------------------------------------------
     |  Static methods inherited from pybind11_builtins.pybind11_object:
     |  
     |  __new__(*args, **kwargs) from pybind11_builtins.pybind11_type
     |      Create and return a new object.  See help(type) for accurate signature.

FUNCTIONS
    version(...) method of builtins.PyCapsule instance
        version() -> str

DATA
    Annotations = <Proposal.Annotations: 8>
    BulkMemoryOperations = <Proposal.BulkMemoryOperations: 4>
    ExceptionHandling = <Proposal.ExceptionHandling: 11>
    ExternRef = <Type.ExternRef: 111>
    F32 = <Type.F32: 125>
    F64 = <Type.F64: 124>
    FuncRef = <Type.FuncRef: 112>
    FunctionReferences = <Proposal.FunctionReferences: 12>
    I32 = <Type.I32: 127>
    I64 = <Type.I64: 126>
    ImportExportMutGlobals = <Proposal.ImportExportMutGlobals: 0>
    Memory64 = <Proposal.Memory64: 9>
    NonTrapFloatToIntConversions = <Proposal.NonTrapFloatToIntConversions:...
    ReferenceTypes = <Proposal.ReferenceTypes: 5>
    SIMD = <Proposal.SIMD: 6>
    TailCall = <Proposal.TailCall: 7>
    Threads = <Proposal.Threads: 10>
    V128 = <Type.V128: 123>
    Wasi = <Host.Wasi: 0>
    WasmEdge = <Host.WasmEdge: 1>

FILE
    /home/satacker/wasm_work/WasmEdge/bindings/python/WasmEdge.cpython-38-x86_64-linux-gnu.so


```