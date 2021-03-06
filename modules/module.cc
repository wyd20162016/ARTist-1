/**
 * The ARTist Project (https://artist.cispa.saarland)
 *
 * Copyright (C) 2017 CISPA (https://cispa.saarland), Saarland University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @author "Oliver Schranz <oliver.schranz@cispa.saarland>"
 *
 */


#include "module.h"

namespace art {

void Module::setEnabled(bool enabled) {
  _enabled = enabled;
}

bool Module::isEnabled() const {
  return _enabled;
}

/**
 * The default implementation does not provide a filter and hence artist passes will be created and executed for all
 * methods visible to the compiler.
 */
unique_ptr<Filter> Module::getMethodFilter() const {
  return nullptr;
}

}  // namespace art
