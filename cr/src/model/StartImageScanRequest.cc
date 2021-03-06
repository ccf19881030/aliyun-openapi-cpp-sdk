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

#include <alibabacloud/cr/model/StartImageScanRequest.h>

using AlibabaCloud::Cr::Model::StartImageScanRequest;

StartImageScanRequest::StartImageScanRequest() :
	RoaServiceRequest("cr", "2016-06-07")
{}

StartImageScanRequest::~StartImageScanRequest()
{}

std::string StartImageScanRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void StartImageScanRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setParameter("RepoNamespace", repoNamespace);
}

std::string StartImageScanRequest::getRepoName()const
{
	return repoName_;
}

void StartImageScanRequest::setRepoName(const std::string& repoName)
{
	repoName_ = repoName;
	setParameter("RepoName", repoName);
}

std::string StartImageScanRequest::getRegionId()const
{
	return regionId_;
}

void StartImageScanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string StartImageScanRequest::getTag()const
{
	return tag_;
}

void StartImageScanRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setParameter("Tag", tag);
}

