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

#include <alibabacloud/kms/model/ListAliasesRequest.h>

using AlibabaCloud::Kms::Model::ListAliasesRequest;

ListAliasesRequest::ListAliasesRequest() :
	RpcServiceRequest("kms", "2016-01-20", "ListAliases")
{}

ListAliasesRequest::~ListAliasesRequest()
{}

int ListAliasesRequest::getPageSize()const
{
	return pageSize_;
}

void ListAliasesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListAliasesRequest::getSTSToken()const
{
	return sTSToken_;
}

void ListAliasesRequest::setSTSToken(const std::string& sTSToken)
{
	sTSToken_ = sTSToken;
	setParameter("STSToken", sTSToken);
}

int ListAliasesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAliasesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

