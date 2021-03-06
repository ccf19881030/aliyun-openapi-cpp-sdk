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

#include <alibabacloud/emr/model/MetastoreRetryTaskRequest.h>

using AlibabaCloud::Emr::Model::MetastoreRetryTaskRequest;

MetastoreRetryTaskRequest::MetastoreRetryTaskRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreRetryTask")
{}

MetastoreRetryTaskRequest::~MetastoreRetryTaskRequest()
{}

long MetastoreRetryTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreRetryTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreRetryTaskRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreRetryTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string MetastoreRetryTaskRequest::getTaskId()const
{
	return taskId_;
}

void MetastoreRetryTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

std::string MetastoreRetryTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreRetryTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

