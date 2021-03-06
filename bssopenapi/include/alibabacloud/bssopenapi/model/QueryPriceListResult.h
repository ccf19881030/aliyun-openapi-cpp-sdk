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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYPRICELISTRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYPRICELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryPriceListResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Module
					{
						struct TierPrice
						{
							std::string endSymbol;
							std::string tierType;
							std::string tierStart;
							std::string tierEnd;
							std::string price;
							std::string startSymbol;
							std::string priceType;
						};
						std::string priceUnit;
						std::string moduleCode;
						std::string config;
						std::string region;
						std::string priceUnitQuantity;
						std::vector<Module::TierPrice> tierPrices;
					};
					std::vector<Module> modules;
					std::string currency;
				};


				QueryPriceListResult();
				explicit QueryPriceListResult(const std::string &payload);
				~QueryPriceListResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYPRICELISTRESULT_H_