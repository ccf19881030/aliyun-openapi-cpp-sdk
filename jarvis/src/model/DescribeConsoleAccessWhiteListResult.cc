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

#include <alibabacloud/jarvis/model/DescribeConsoleAccessWhiteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeConsoleAccessWhiteListResult::DescribeConsoleAccessWhiteListResult() :
	ServiceResult()
{}

DescribeConsoleAccessWhiteListResult::DescribeConsoleAccessWhiteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConsoleAccessWhiteListResult::~DescribeConsoleAccessWhiteListResult()
{}

void DescribeConsoleAccessWhiteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDataList = value["DataList"]["Data"];
	for (auto value : allDataList)
	{
		Data dataListObject;
		if(!value["Id"].isNull())
			dataListObject.id = std::stoi(value["Id"].asString());
		if(!value["SrcIp"].isNull())
			dataListObject.srcIp = value["SrcIp"].asString();
		if(!value["DstIp"].isNull())
			dataListObject.dstIp = value["DstIp"].asString();
		if(!value["InsProduct"].isNull())
			dataListObject.insProduct = value["InsProduct"].asString();
		if(!value["RegionId"].isNull())
			dataListObject.regionId = value["RegionId"].asString();
		if(!value["Status"].isNull())
			dataListObject.status = value["Status"].asString();
		if(!value["GmtCreate"].isNull())
			dataListObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtRealExpire"].isNull())
			dataListObject.gmtRealExpire = value["GmtRealExpire"].asString();
		dataList_.push_back(dataListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["total"].isNull())
		pageInfo_.total = std::stoi(pageInfoNode["total"].asString());
	if(!pageInfoNode["pageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["pageSize"].asString());
	if(!pageInfoNode["currentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["currentPage"].asString());
	if(!value["module"].isNull())
		module_ = value["module"].asString();

}

std::vector<DescribeConsoleAccessWhiteListResult::Data> DescribeConsoleAccessWhiteListResult::getDataList()const
{
	return dataList_;
}

DescribeConsoleAccessWhiteListResult::PageInfo DescribeConsoleAccessWhiteListResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeConsoleAccessWhiteListResult::getModule()const
{
	return module_;
}

