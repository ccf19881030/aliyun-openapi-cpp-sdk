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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeSrcTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainRealTimeSrcTrafficDataResult::DescribeDomainRealTimeSrcTrafficDataResult() :
	ServiceResult()
{}

DescribeDomainRealTimeSrcTrafficDataResult::DescribeDomainRealTimeSrcTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainRealTimeSrcTrafficDataResult::~DescribeDomainRealTimeSrcTrafficDataResult()
{}

void DescribeDomainRealTimeSrcTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRealTimeSrcTrafficDataPerInterval = value["RealTimeSrcTrafficDataPerInterval"]["DataModule"];
	for (auto value : allRealTimeSrcTrafficDataPerInterval)
	{
		DataModule realTimeSrcTrafficDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			realTimeSrcTrafficDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			realTimeSrcTrafficDataPerIntervalObject.value = value["Value"].asString();
		realTimeSrcTrafficDataPerInterval_.push_back(realTimeSrcTrafficDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDomainRealTimeSrcTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainRealTimeSrcTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainRealTimeSrcTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainRealTimeSrcTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainRealTimeSrcTrafficDataResult::DataModule> DescribeDomainRealTimeSrcTrafficDataResult::getRealTimeSrcTrafficDataPerInterval()const
{
	return realTimeSrcTrafficDataPerInterval_;
}

