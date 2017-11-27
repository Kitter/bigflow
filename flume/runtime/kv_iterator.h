/***************************************************************************
 *
 * Copyright (c) 2015 Baidu, Inc. All Rights Reserved.
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
// Author: Zhang Yuncong (bigflow-opensource@baidu.com)

#ifndef FLUME_RUNTIME_KV_ITERATOR_H_
#define FLUME_RUNTIME_KV_ITERATOR_H_

#include <map>
#include <string>
#include <vector>

#include "toft/base/string/string_piece.h"

namespace baidu {
namespace flume {
namespace runtime {

class KVIterator {
public:
    virtual ~KVIterator() {}

    virtual bool Next() = 0;

    virtual void Reset() = 0;

    virtual void Done() = 0;

    virtual const std::vector<toft::StringPiece>& Keys() const = 0;

    virtual void* Value() const = 0;

    virtual toft::StringPiece ValueStr() const = 0;
};

}  // namespace runtime
}  // namespace flume
}  // namespace baidu

#endif  // FLUME_RUNTIME_KV_ITERATOR_H_
