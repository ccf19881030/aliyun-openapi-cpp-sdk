/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
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

#include <alibabacloud/snsuapi/model/MobileStatusQueryRequest.h>

using AlibabaCloud::Snsuapi::Model::MobileStatusQueryRequest;

MobileStatusQueryRequest::MobileStatusQueryRequest() :
	RpcServiceRequest("snsuapi", "2018-07-09", "MobileStatusQuery")
{}

MobileStatusQueryRequest::~MobileStatusQueryRequest()
{}

long MobileStatusQueryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MobileStatusQueryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MobileStatusQueryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void MobileStatusQueryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string MobileStatusQueryRequest::getCorrelationId()const
{
	return correlationId_;
}

void MobileStatusQueryRequest::setCorrelationId(const std::string& correlationId)
{
	correlationId_ = correlationId;
	setParameter("CorrelationId", correlationId);
}

long MobileStatusQueryRequest::getOwnerId()const
{
	return ownerId_;
}

void MobileStatusQueryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string MobileStatusQueryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MobileStatusQueryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

