//
// LEDRemoteObject.h
//
// Library: IoT/Devices
// Package: Generated
// Module:  LEDRemoteObject
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2014-2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef IoT_Devices_LEDRemoteObject_INCLUDED
#define IoT_Devices_LEDRemoteObject_INCLUDED


#include "IoT/Devices/ILED.h"
#include "Poco/RemotingNG/RemoteObject.h"
#include "Poco/SharedPtr.h"


namespace IoT {
namespace Devices {


class LEDRemoteObject: public virtual Poco::RemotingNG::RemoteObject, public IoT::Devices::ILED
	/// The base class for LEDs.
	///
	/// Each instance of the LED class represents a single physical
	/// LED. Some LED devices support different brightness levels,
	/// this is accounted for by allowing to specify a brightness
	/// level in range 0.0 to 1.0, where 0.0 turns the LED off and
	/// 1.0 is the maximum brightness. 
	///
	/// Some implementations may also support blinking LEDs.
	/// This is exposed via the "blinkOn" and "blinkOff" properties,
	/// which take as values the time in milliseconds the LED should
	/// be on, or off, respectively. There is also a shortcut
	/// method, blink(), which allows setting both properties at once.
	///
	/// To turn on blinking, both "blinkOn" and "blinkOff" must be 
	/// set to a non-zero value. Furthermore, the brightness must
	/// be non-zero.
{
public:
	typedef Poco::AutoPtr<LEDRemoteObject> Ptr;

	LEDRemoteObject();
		/// Creates a LEDRemoteObject.

	virtual ~LEDRemoteObject();
		/// Destroys the LEDRemoteObject.

	virtual const Poco::RemotingNG::Identifiable::TypeId& remoting__typeId() const;

};


inline const Poco::RemotingNG::Identifiable::TypeId& LEDRemoteObject::remoting__typeId() const
{
	return ILED::remoting__typeId();
}


} // namespace Devices
} // namespace IoT


#endif // IoT_Devices_LEDRemoteObject_INCLUDED

