//
// IOSampleSerializer.h
//
// Package: Generated
// Module:  TypeSerializer
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2015-2020, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: GPL-3.0-only
//


#ifndef TypeSerializer_IoT_XBee_IOSample_INCLUDED
#define TypeSerializer_IoT_XBee_IOSample_INCLUDED


#include "IoT/XBee/XBeeNode.h"
#include "Poco/RemotingNG/TypeSerializer.h"


namespace Poco {
namespace RemotingNG {


template <>
class TypeSerializer<IoT::XBee::IOSample>
{
public:
	static void serialize(const std::string& name, const IoT::XBee::IOSample& value, Serializer& ser)
	{
		using namespace std::string_literals;
		
		ser.serializeStructBegin(name);
		serializeImpl(value, ser);
		ser.serializeStructEnd(name);
	}

	static void serializeImpl(const IoT::XBee::IOSample& value, Serializer& ser)
	{
		using namespace std::string_literals;
		
		static const std::string REMOTING__NAMES[] = {"analogChannelMask"s,"analogSamples"s,"deviceAddress"s,"digitalChannelMask"s,"digitalSamples"s,"nSampleSets"s,"networkAddress"s,"options"s,""s};
		TypeSerializer<Poco::UInt8 >::serialize(REMOTING__NAMES[0], value.analogChannelMask, ser);
		TypeSerializer<std::vector < Poco::Int16 > >::serialize(REMOTING__NAMES[1], value.analogSamples, ser);
		TypeSerializer<std::string >::serialize(REMOTING__NAMES[2], value.deviceAddress, ser);
		TypeSerializer<Poco::UInt16 >::serialize(REMOTING__NAMES[3], value.digitalChannelMask, ser);
		TypeSerializer<Poco::UInt16 >::serialize(REMOTING__NAMES[4], value.digitalSamples, ser);
		TypeSerializer<Poco::UInt8 >::serialize(REMOTING__NAMES[5], value.nSampleSets, ser);
		TypeSerializer<std::string >::serialize(REMOTING__NAMES[6], value.networkAddress, ser);
		TypeSerializer<Poco::UInt8 >::serialize(REMOTING__NAMES[7], value.options, ser);
	}

};


} // namespace RemotingNG
} // namespace Poco


#endif // TypeSerializer_IoT_XBee_IOSample_INCLUDED

