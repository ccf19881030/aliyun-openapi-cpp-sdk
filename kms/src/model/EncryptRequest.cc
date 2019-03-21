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

#include <alibabacloud/kms/model/EncryptRequest.h>

using AlibabaCloud::Kms::Model::EncryptRequest;

EncryptRequest::EncryptRequest() :
	RpcServiceRequest("kms", "2016-01-20", "Encrypt")
{}

EncryptRequest::~EncryptRequest()
{}

std::string EncryptRequest::getEncryptionContext()const
{
	return encryptionContext_;
}

void EncryptRequest::setEncryptionContext(const std::string& encryptionContext)
{
	encryptionContext_ = encryptionContext;
	setParameter("EncryptionContext", encryptionContext);
}

std::string EncryptRequest::getKeyId()const
{
	return keyId_;
}

void EncryptRequest::setKeyId(const std::string& keyId)
{
	keyId_ = keyId;
	setParameter("KeyId", keyId);
}

std::string EncryptRequest::getSTSToken()const
{
	return sTSToken_;
}

void EncryptRequest::setSTSToken(const std::string& sTSToken)
{
	sTSToken_ = sTSToken;
	setParameter("STSToken", sTSToken);
}

std::string EncryptRequest::getPlaintext()const
{
	return plaintext_;
}

void EncryptRequest::setPlaintext(const std::string& plaintext)
{
	plaintext_ = plaintext;
	setParameter("Plaintext", plaintext);
}

