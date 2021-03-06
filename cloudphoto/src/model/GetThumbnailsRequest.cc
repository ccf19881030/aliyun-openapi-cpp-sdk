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

#include <alibabacloud/cloudphoto/model/GetThumbnailsRequest.h>

using AlibabaCloud::CloudPhoto::Model::GetThumbnailsRequest;

GetThumbnailsRequest::GetThumbnailsRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "GetThumbnails")
{}

GetThumbnailsRequest::~GetThumbnailsRequest()
{}

std::string GetThumbnailsRequest::getLibraryId()const
{
	return libraryId_;
}

void GetThumbnailsRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setParameter("LibraryId", libraryId);
}

std::vector<long> GetThumbnailsRequest::getPhotoId()const
{
	return photoId_;
}

void GetThumbnailsRequest::setPhotoId(const std::vector<long>& photoId)
{
	photoId_ = photoId;
	for(int i = 0; i!= photoId.size(); i++)
		setParameter("PhotoId."+ std::to_string(i), std::to_string(photoId.at(i)));
}

std::string GetThumbnailsRequest::getStoreName()const
{
	return storeName_;
}

void GetThumbnailsRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setParameter("StoreName", storeName);
}

std::string GetThumbnailsRequest::getZoomType()const
{
	return zoomType_;
}

void GetThumbnailsRequest::setZoomType(const std::string& zoomType)
{
	zoomType_ = zoomType;
	setParameter("ZoomType", zoomType);
}

