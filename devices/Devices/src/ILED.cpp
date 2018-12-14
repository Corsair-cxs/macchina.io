//
// ILED.cpp
//
// Library: IoT/Devices
// Package: Generated
// Module:  ILED
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2014-2018, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#include "IoT/Devices/ILED.h"


namespace IoT {
namespace Devices {


ILED::ILED():
	IoT::Devices::IDevice()

{
}


ILED::~ILED()
{
}


bool ILED::isA(const std::type_info& otherType) const
{
	std::string name(type().name());
	return name == otherType.name();
}


const Poco::RemotingNG::Identifiable::TypeId& ILED::remoting__typeId()
{
	remoting__staticInitBegin(REMOTING__TYPE_ID);
	static const std::string REMOTING__TYPE_ID("IoT.Devices.LED");
	remoting__staticInitEnd(REMOTING__TYPE_ID);
	return REMOTING__TYPE_ID;
}


const std::type_info& ILED::type() const
{
	return typeid(ILED);
}


} // namespace Devices
} // namespace IoT

