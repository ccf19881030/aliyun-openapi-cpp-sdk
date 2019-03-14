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

#ifndef ALIBABACLOUD_RAM_MODEL_GETPASSWORDPOLICYRESULT_H_
#define ALIBABACLOUD_RAM_MODEL_GETPASSWORDPOLICYRESULT_H_

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
			class ALIBABACLOUD_RAM_EXPORT GetPasswordPolicyResult : public ServiceResult
			{
			public:
				struct PasswordPolicy
				{
					int minimumPasswordLength;
					bool requireLowercaseCharacters;
					bool requireNumbers;
					int maxPasswordAge;
					int passwordReusePrevention;
					int maxLoginAttemps;
					bool hardExpiry;
					bool requireUppercaseCharacters;
					bool requireSymbols;
				};


				GetPasswordPolicyResult();
				explicit GetPasswordPolicyResult(const std::string &payload);
				~GetPasswordPolicyResult();
				PasswordPolicy getPasswordPolicy()const;

			protected:
				void parse(const std::string &payload);
			private:
				PasswordPolicy passwordPolicy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RAM_MODEL_GETPASSWORDPOLICYRESULT_H_