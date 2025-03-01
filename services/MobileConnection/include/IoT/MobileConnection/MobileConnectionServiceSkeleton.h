//
// MobileConnectionServiceSkeleton.h
//
// Library: IoT/MobileConnection
// Package: Generated
// Module:  MobileConnectionServiceSkeleton
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2017-2020, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: GPL-3.0-only
//


#ifndef IoT_MobileConnection_MobileConnectionServiceSkeleton_INCLUDED
#define IoT_MobileConnection_MobileConnectionServiceSkeleton_INCLUDED


#include "IoT/MobileConnection/MobileConnectionServiceRemoteObject.h"
#include "Poco/RemotingNG/Skeleton.h"


namespace IoT {
namespace MobileConnection {


class MobileConnectionServiceSkeleton: public Poco::RemotingNG::Skeleton
	/// The MobileConnectionService interface is used to configure
	/// and establish a mobile data connection.
{
public:
	MobileConnectionServiceSkeleton();
		/// Creates a MobileConnectionServiceSkeleton.

	virtual ~MobileConnectionServiceSkeleton();
		/// Destroys a MobileConnectionServiceSkeleton.

	virtual const Poco::RemotingNG::Identifiable::TypeId& remoting__typeId() const;

	static const std::string DEFAULT_NS;
};


inline const Poco::RemotingNG::Identifiable::TypeId& MobileConnectionServiceSkeleton::remoting__typeId() const
{
	return IMobileConnectionService::remoting__typeId();
}


} // namespace MobileConnection
} // namespace IoT


#endif // IoT_MobileConnection_MobileConnectionServiceSkeleton_INCLUDED

