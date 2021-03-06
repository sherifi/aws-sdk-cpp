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

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class AttackPropertyIdentifier
  {
    NOT_SET,
    DESTINATION_URL,
    REFERRER,
    SOURCE_ASN,
    SOURCE_COUNTRY,
    SOURCE_IP_ADDRESS,
    SOURCE_USER_AGENT,
    WORDPRESS_PINGBACK_REFLECTOR,
    WORDPRESS_PINGBACK_SOURCE
  };

namespace AttackPropertyIdentifierMapper
{
AWS_SHIELD_API AttackPropertyIdentifier GetAttackPropertyIdentifierForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForAttackPropertyIdentifier(AttackPropertyIdentifier value);
} // namespace AttackPropertyIdentifierMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
