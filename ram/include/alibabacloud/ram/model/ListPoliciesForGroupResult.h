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

#ifndef ALIBABACLOUD_RAM_MODEL_LISTPOLICIESFORGROUPRESULT_H_
#define ALIBABACLOUD_RAM_MODEL_LISTPOLICIESFORGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ram/RamExport.h>

namespace AlibabaCloud
{
	namespace Ram
	{
		namespace Model
		{
			class ALIBABACLOUD_RAM_EXPORT ListPoliciesForGroupResult : public ServiceResult
			{
			public:
				struct Policy
				{
					std::string policyType;
					std::string description;
					std::string attachDate;
					std::string policyName;
					std::string defaultVersion;
				};


				ListPoliciesForGroupResult();
				explicit ListPoliciesForGroupResult(const std::string &payload);
				~ListPoliciesForGroupResult();
				std::vector<Policy> getPolicies()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Policy> policies_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RAM_MODEL_LISTPOLICIESFORGROUPRESULT_H_