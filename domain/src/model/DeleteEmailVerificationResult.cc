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

#include <alibabacloud/domain/model/DeleteEmailVerificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

DeleteEmailVerificationResult::DeleteEmailVerificationResult() :
	ServiceResult()
{}

DeleteEmailVerificationResult::DeleteEmailVerificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteEmailVerificationResult::~DeleteEmailVerificationResult()
{}

void DeleteEmailVerificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSuccessList = value["SuccessList"]["SendResult"];
	for (auto value : allSuccessList)
	{
		SendResult successListObject;
		if(!value["Email"].isNull())
			successListObject.email = value["Email"].asString();
		if(!value["Code"].isNull())
			successListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			successListObject.message = value["Message"].asString();
		successList_.push_back(successListObject);
	}
	auto allFailList = value["FailList"]["SendResult"];
	for (auto value : allFailList)
	{
		SendResult failListObject;
		if(!value["Email"].isNull())
			failListObject.email = value["Email"].asString();
		if(!value["Code"].isNull())
			failListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			failListObject.message = value["Message"].asString();
		failList_.push_back(failListObject);
	}

}

std::vector<DeleteEmailVerificationResult::SendResult> DeleteEmailVerificationResult::getSuccessList()const
{
	return successList_;
}

std::vector<DeleteEmailVerificationResult::SendResult> DeleteEmailVerificationResult::getFailList()const
{
	return failList_;
}

