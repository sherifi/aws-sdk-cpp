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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class AWS_IOT_API CreateProvisioningTemplateVersionResult
  {
  public:
    CreateProvisioningTemplateVersionResult();
    CreateProvisioningTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateProvisioningTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateName = std::move(value); }

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The version of the fleet provisioning template.</p>
     */
    inline int GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version of the fleet provisioning template.</p>
     */
    inline void SetVersionId(int value) { m_versionId = value; }

    /**
     * <p>The version of the fleet provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithVersionId(int value) { SetVersionId(value); return *this;}


    /**
     * <p>True if the fleet provisioning template version is the default version,
     * otherwise false.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>True if the fleet provisioning template version is the default version,
     * otherwise false.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersion = value; }

    /**
     * <p>True if the fleet provisioning template version is the default version,
     * otherwise false.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}

  private:

    Aws::String m_templateArn;

    Aws::String m_templateName;

    int m_versionId;

    bool m_isDefaultVersion;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
