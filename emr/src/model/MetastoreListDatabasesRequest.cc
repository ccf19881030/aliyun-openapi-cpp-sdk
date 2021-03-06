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

#include <alibabacloud/emr/model/MetastoreListDatabasesRequest.h>

using AlibabaCloud::Emr::Model::MetastoreListDatabasesRequest;

MetastoreListDatabasesRequest::MetastoreListDatabasesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreListDatabases")
{}

MetastoreListDatabasesRequest::~MetastoreListDatabasesRequest()
{}

long MetastoreListDatabasesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreListDatabasesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreListDatabasesRequest::getDbName()const
{
	return dbName_;
}

void MetastoreListDatabasesRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string MetastoreListDatabasesRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreListDatabasesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int MetastoreListDatabasesRequest::getPageSize()const
{
	return pageSize_;
}

void MetastoreListDatabasesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string MetastoreListDatabasesRequest::getFuzzyDatabaseName()const
{
	return fuzzyDatabaseName_;
}

void MetastoreListDatabasesRequest::setFuzzyDatabaseName(const std::string& fuzzyDatabaseName)
{
	fuzzyDatabaseName_ = fuzzyDatabaseName;
	setParameter("FuzzyDatabaseName", fuzzyDatabaseName);
}

int MetastoreListDatabasesRequest::getPageNumber()const
{
	return pageNumber_;
}

void MetastoreListDatabasesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string MetastoreListDatabasesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreListDatabasesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

