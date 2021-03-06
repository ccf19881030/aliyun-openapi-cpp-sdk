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

#include <alibabacloud/ecs/model/ImportImageRequest.h>

using AlibabaCloud::Ecs::Model::ImportImageRequest;

ImportImageRequest::ImportImageRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ImportImage")
{}

ImportImageRequest::~ImportImageRequest()
{}

std::vector<ImportImageRequest::DiskDeviceMapping> ImportImageRequest::getDiskDeviceMapping()const
{
	return diskDeviceMapping_;
}

void ImportImageRequest::setDiskDeviceMapping(const std::vector<DiskDeviceMapping>& diskDeviceMapping)
{
	diskDeviceMapping_ = diskDeviceMapping;
	int i = 0;
	for(int i = 0; i!= diskDeviceMapping.size(); i++)	{
		auto obj = diskDeviceMapping.at(i);
		std::string str ="DiskDeviceMapping."+ std::to_string(i);
		setParameter(str + ".OSSBucket", obj.oSSBucket);
		setParameter(str + ".DiskImSize", std::to_string(obj.diskImSize));
		setParameter(str + ".Format", obj.format);
		setParameter(str + ".Device", obj.device);
		setParameter(str + ".OSSObject", obj.oSSObject);
		setParameter(str + ".DiskImageSize", std::to_string(obj.diskImageSize));
	}
}

long ImportImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ImportImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ImportImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ImportImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ImportImageRequest::getRoleName()const
{
	return roleName_;
}

void ImportImageRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setParameter("RoleName", roleName);
}

std::string ImportImageRequest::getDescription()const
{
	return description_;
}

void ImportImageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ImportImageRequest::getOSType()const
{
	return oSType_;
}

void ImportImageRequest::setOSType(const std::string& oSType)
{
	oSType_ = oSType;
	setParameter("OSType", oSType);
}

long ImportImageRequest::getOwnerId()const
{
	return ownerId_;
}

void ImportImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ImportImageRequest::getPlatform()const
{
	return platform_;
}

void ImportImageRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

std::string ImportImageRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ImportImageRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string ImportImageRequest::getRegionId()const
{
	return regionId_;
}

void ImportImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ImportImageRequest::getImageName()const
{
	return imageName_;
}

void ImportImageRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

std::string ImportImageRequest::getArchitecture()const
{
	return architecture_;
}

void ImportImageRequest::setArchitecture(const std::string& architecture)
{
	architecture_ = architecture;
	setParameter("Architecture", architecture);
}

