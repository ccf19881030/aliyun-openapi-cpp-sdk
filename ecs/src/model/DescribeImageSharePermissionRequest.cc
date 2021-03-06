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

#include <alibabacloud/ecs/model/DescribeImageSharePermissionRequest.h>

using AlibabaCloud::Ecs::Model::DescribeImageSharePermissionRequest;

DescribeImageSharePermissionRequest::DescribeImageSharePermissionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeImageSharePermission")
{}

DescribeImageSharePermissionRequest::~DescribeImageSharePermissionRequest()
{}

std::string DescribeImageSharePermissionRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeImageSharePermissionRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

long DescribeImageSharePermissionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeImageSharePermissionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeImageSharePermissionRequest::getImageId()const
{
	return imageId_;
}

void DescribeImageSharePermissionRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string DescribeImageSharePermissionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeImageSharePermissionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeImageSharePermissionRequest::getRegionId()const
{
	return regionId_;
}

void DescribeImageSharePermissionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeImageSharePermissionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeImageSharePermissionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeImageSharePermissionRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeImageSharePermissionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeImageSharePermissionRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeImageSharePermissionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeImageSharePermissionRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeImageSharePermissionRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

