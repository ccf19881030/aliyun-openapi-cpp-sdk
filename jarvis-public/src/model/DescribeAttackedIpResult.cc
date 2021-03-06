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

#include <alibabacloud/jarvis-public/model/DescribeAttackedIpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis-public;
using namespace AlibabaCloud::Jarvis-public::Model;

DescribeAttackedIpResult::DescribeAttackedIpResult() :
	ServiceResult()
{}

DescribeAttackedIpResult::DescribeAttackedIpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAttackedIpResult::~DescribeAttackedIpResult()
{}

void DescribeAttackedIpResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allIpList = value["IpList"]["IpList"];
	for (const auto &item : allIpList)
		ipList_.push_back(item.asString());
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();

}

std::vector<std::string> DescribeAttackedIpResult::getIpList()const
{
	return ipList_;
}

std::string DescribeAttackedIpResult::getModule()const
{
	return module_;
}

