﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediaconvert/model/DvbSubtitlingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DvbSubtitlingTypeMapper
      {

        static const int HEARING_IMPAIRED_HASH = HashingUtils::HashString("HEARING_IMPAIRED");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        DvbSubtitlingType GetDvbSubtitlingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEARING_IMPAIRED_HASH)
          {
            return DvbSubtitlingType::HEARING_IMPAIRED;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return DvbSubtitlingType::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitlingType>(hashCode);
          }

          return DvbSubtitlingType::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitlingType(DvbSubtitlingType enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitlingType::HEARING_IMPAIRED:
            return "HEARING_IMPAIRED";
          case DvbSubtitlingType::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSubtitlingTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
