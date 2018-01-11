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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEEIPADDRESSESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEEIPADDRESSESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeEipAddressesResult : public ServiceResult
			{
			public:
				struct EipAddress
				{
					struct LockReason
					{
						std::string lockReason;
					};
					std::string status;
					std::vector<std::string> availableRegions;
					std::string instanceId;
					std::string allocationId;
					std::string bandwidthPackageType;
					std::vector<EipAddress::LockReason> operationLocks;
					std::string internetChargeType;
					std::string name;
					std::string allocationTime;
					std::string descritpion;
					std::string eipBandwidth;
					std::string instanceRegionId;
					std::string chargeType;
					std::string bandwidth;
					std::string expiredTime;
					std::string bandwidthPackageId;
					std::string ipAddress;
					std::string regionId;
					std::string instanceType;
				};


				DescribeEipAddressesResult();
				explicit DescribeEipAddressesResult(const std::string &payload);
				~DescribeEipAddressesResult();
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				std::vector<EipAddress> getEipAddresses()const;
				void setEipAddresses(const std::vector<EipAddress>& eipAddresses);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<EipAddress> eipAddresses_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEEIPADDRESSESRESULT_H_