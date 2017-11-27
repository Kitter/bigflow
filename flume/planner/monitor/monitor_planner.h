/***************************************************************************
 *
 * Copyright (c) 2014 Baidu, Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 **************************************************************************/
// Author: Pan Yuchang(BDG)<bigflow-opensource@baidu.com>
// Description:

#ifndef FLUME_PLANNER_MONITOR_MONITOR_PLANNER_H_
#define FLUME_PLANNER_MONITOR_MONITOr_PLANNER_H_

#include "flume/proto/logical_plan.pb.h"
#include "flume/proto/physical_plan.pb.h"
#include "flume/runtime/resource.h"

namespace baidu {
namespace flume {
namespace planner {
namespace monitor {

class MonitorPlanner {
public:
    MonitorPlanner();

    void SetDebugDirectory(runtime::Resource::Entry* entry);

    PbPhysicalPlan Plan(const PbLogicalPlan& message);

private:
    runtime::Resource::Entry* m_entry;
};

}  // namespace monitor
}  // namespace planner
}  // namespace flume
}  // namespace baidu

#endif  // FLUME_PLANNER_MONITOR_MONITOR_PLANNER_H_
