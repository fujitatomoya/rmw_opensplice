// Copyright 2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "rmw/error_handling.h"
#include "rmw/get_topic_endpoint_info.h"
#include "rmw/topic_endpoint_info_array.h"

#include "identifier.hpp"
#include "types.hpp"

extern "C"
{
rmw_ret_t
rmw_get_publishers_info_by_topic(
  const rmw_node_t * /* unused_param */,
  rcutils_allocator_t * /* unused_param */,
  const char * /* unused_param */,
  bool /* unused_param */,
  rmw_topic_endpoint_info_array_t * /* unused_param */)
{
  return RMW_RET_UNSUPPORTED;
}

rmw_ret_t
rmw_get_subscriptions_info_by_topic(
  const rmw_node_t * /* unused_param */,
  rcutils_allocator_t * /* unused_param */,
  const char * /* unused_param */,
  bool /* unused_param */,
  rmw_topic_endpoint_info_array_t * /* unused_param */)
{
  return RMW_RET_UNSUPPORTED;
}
}  // extern "C"
