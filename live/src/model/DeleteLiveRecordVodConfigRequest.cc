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

#include <alibabacloud/live/model/DeleteLiveRecordVodConfigRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveRecordVodConfigRequest;

DeleteLiveRecordVodConfigRequest::DeleteLiveRecordVodConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DeleteLiveRecordVodConfig")
{}

DeleteLiveRecordVodConfigRequest::~DeleteLiveRecordVodConfigRequest()
{}

std::string DeleteLiveRecordVodConfigRequest::getAppName()const
{
	return appName_;
}

void DeleteLiveRecordVodConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DeleteLiveRecordVodConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLiveRecordVodConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteLiveRecordVodConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteLiveRecordVodConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DeleteLiveRecordVodConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLiveRecordVodConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteLiveRecordVodConfigRequest::getStreamName()const
{
	return streamName_;
}

void DeleteLiveRecordVodConfigRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string DeleteLiveRecordVodConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLiveRecordVodConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

