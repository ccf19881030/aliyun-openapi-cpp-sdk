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

#include <alibabacloud/ram/model/ListPoliciesForGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

ListPoliciesForGroupResult::ListPoliciesForGroupResult() :
	ServiceResult()
{}

ListPoliciesForGroupResult::ListPoliciesForGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPoliciesForGroupResult::~ListPoliciesForGroupResult()
{}

void ListPoliciesForGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPolicies = value["Policies"]["Policy"];
	for (auto value : allPolicies)
	{
		Policy policiesObject;
		if(!value["PolicyName"].isNull())
			policiesObject.policyName = value["PolicyName"].asString();
		if(!value["PolicyType"].isNull())
			policiesObject.policyType = value["PolicyType"].asString();
		if(!value["Description"].isNull())
			policiesObject.description = value["Description"].asString();
		if(!value["DefaultVersion"].isNull())
			policiesObject.defaultVersion = value["DefaultVersion"].asString();
		if(!value["AttachDate"].isNull())
			policiesObject.attachDate = value["AttachDate"].asString();
		policies_.push_back(policiesObject);
	}

}

std::vector<ListPoliciesForGroupResult::Policy> ListPoliciesForGroupResult::getPolicies()const
{
	return policies_;
}

