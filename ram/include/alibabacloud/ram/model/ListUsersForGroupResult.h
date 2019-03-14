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

#ifndef ALIBABACLOUD_RAM_MODEL_LISTUSERSFORGROUPRESULT_H_
#define ALIBABACLOUD_RAM_MODEL_LISTUSERSFORGROUPRESULT_H_

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
			class ALIBABACLOUD_RAM_EXPORT ListUsersForGroupResult : public ServiceResult
			{
			public:
				struct User
				{
					std::string userName;
					std::string displayName;
					std::string joinDate;
				};


				ListUsersForGroupResult();
				explicit ListUsersForGroupResult(const std::string &payload);
				~ListUsersForGroupResult();
				bool getIsTruncated()const;
				std::vector<User> getUsers()const;
				std::string getMarker()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool isTruncated_;
				std::vector<User> users_;
				std::string marker_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RAM_MODEL_LISTUSERSFORGROUPRESULT_H_