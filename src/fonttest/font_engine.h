/* Copyright 2016 Unicode Inc. All rights reserved.
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
 */

#ifndef FONTTEST_FONT_ENGINE_H_
#define FONTTEST_FONT_ENGINE_H_

#include <string>

namespace fonttest {
class Font;

class FontEngine {
 public:
  static FontEngine* Create(const std::string& engineName);
  virtual std::string GetName() const = 0;
  virtual Font* LoadFont(const std::string& path, int faceIndex) = 0;
};

}  // namespace fonttest

#endif  // FONTTEST_FONT_ENGINE_H_
