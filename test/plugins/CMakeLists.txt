# SPDX-License-Identifier: Apache-2.0
# SPDX-FileCopyrightText: 2019-2022 Second State INC

if (CMAKE_SYSTEM_NAME MATCHES "Linux")
  add_subdirectory(wasmedge_process)
endif()
if(WASMEDGE_PLUGIN_WASI_NN_BACKEND)
  add_subdirectory(wasi_nn)
endif()