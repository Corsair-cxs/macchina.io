//
// MQTTClientStub.h
//
// Library: IoT/MQTT
// Package: Generated
// Module:  MQTTClientStub
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef IoT_MQTT_MQTTClientStub_INCLUDED
#define IoT_MQTT_MQTTClientStub_INCLUDED


#include "IoT/MQTT/MQTTClientRemoteObject.h"
#include "Poco/SharedPtr.h"


namespace IoT {
namespace MQTT {


class MQTTClientStub: public IoT::MQTT::MQTTClientRemoteObject
	/// The interface for MQTT clients.
	///
	/// Implementations are expected to receive their client ID and
	/// server URI via an implementation defined configuration mechanism.
	/// Once configured, a MQTTClient always uses the same client ID and
	/// connects to the same server. A MQTT client should automatically
	/// attempt to reconnect if the connection to the server is lost.
{
public:
	typedef Poco::AutoPtr<MQTTClientStub> Ptr;

	MQTTClientStub(const Poco::RemotingNG::Identifiable::ObjectId& oid, Poco::SharedPtr<IoT::MQTT::MQTTClient> pServiceObject);
		/// Creates a MQTTClientStub.

	virtual ~MQTTClientStub();
		/// Destroys the MQTTClientStub.

	IoT::MQTT::ConnectionInfo connect();
		/// Connects to the server if not already connected.
		///
		/// Normally, the client connects automatically when a message is
		/// published or a topic is subscribed to.
		///
		/// Returns a ConnectionInfo object containing information about the
		/// connection.
		///
		/// Fires the connected event if successful.
		///
		/// Throws a Poco::IOException if the connection cannot be established.

	virtual void connectAsync();
		/// Connects to the server if not already connected.
		///
		/// Connecting will be done asynchronously in a background thread.
		///
		/// A successful connection will be reported by firing the connected event.

	virtual bool connected() const;
		/// Returns true if the client is currently connected to the server.

	IoT::MQTT::ConnectionInfo connectionInfo() const;
		/// Returns a ConnectionInfo structure describing the currently active
		/// connection. If not connected, the ConnectionInfo's serverURI will be empty.

	virtual void disconnect(int timeout);
		/// Disconnects from the server.
		///
		/// In order to allow the client time to complete handling of messages that are 
		/// in-flight when this function is called, a timeout period is specified (in milliseconds). 
		/// When the timeout period has expired, the client disconnects even if there 
		/// are still outstanding message acknowledgements. The next time the client 
		/// connects to the same server, any QoS 1 or 2 messages which have not completed 
		/// will be retried depending on the clean session settings for both the previous 
		/// and the new connection.

	const std::string& id() const;
		/// Returns the configured client ID.

	virtual int publish(const std::string& topic, const std::string& payload, int qos);
		/// Publishes the given message on the given topic, using the given QoS.
		///
		/// Returns a delivery token which can be used with the messageDelivered
		/// event to verify that the message has been delivered.
		///
		/// Throws a Poco::IOException if the message cannot be published.

	virtual int publishMessage(const std::string& topic, const IoT::MQTT::Message& message);
		/// Publishes the given message on the given topic.
		///
		/// Returns a delivery token which can be used with the messageDelivered
		/// event to verify that the message has been delivered.
		///
		/// Throws a Poco::IOException if the message cannot be published.

	virtual std::string remoting__enableEvents(Poco::RemotingNG::Listener::Ptr pListener, bool enable = bool(true));

	virtual void remoting__enableRemoteEvents(const std::string& protocol);

	virtual bool remoting__hasEvents() const;

	virtual const Poco::RemotingNG::Identifiable::TypeId& remoting__typeId() const;

	const std::string& serverURI() const;
		/// Returns the configured server URI.

	IoT::MQTT::Statistics statistics() const;
		/// Returns statistics about published and received topics and message counts.

	virtual void subscribe(const std::string& topic, int qos);
		/// This function attempts to subscribe the client to a single topic, 
		/// which may contain wildcards. This call also specifies the Quality of service 
		/// requested for the subscription.
		///
		/// Throws a Poco::IOException if there was a problem registering the
		/// subscription.

	virtual void subscribeMany(const std::vector < IoT::MQTT::TopicQoS >& topicsAndQoS);
		/// This function attempts to subscribe the client to a list of topics (with
		/// associated QoS levels), which may contain wildcards.
		///
		/// Throws a Poco::IOException if there was a problem registering the
		/// subscriptions.

	std::vector < IoT::MQTT::TopicQoS > subscribedTopics() const;
		/// Returns a vector containing all currently subscribed
		/// topics with their QoS level.

	virtual void unsubscribe(const std::string& topic);
		/// This function attempts to remove an existing subscription made by the client.
		///
		/// Throws a Poco::IOException if there was a problem removing the
		/// subscription.

	virtual void unsubscribeMany(const std::vector < std::string >& topics);
		/// This function attempts to remove existing subscriptions to a list of 
		/// topics made by the specified client.
		///
		/// Throws a Poco::IOException if there was a problem removing the
		/// subscriptions.

protected:
	void event__connectionClosed();

	void event__connectionEstablished(const IoT::MQTT::ConnectionEstablishedEvent& data);

	void event__connectionLost(const IoT::MQTT::ConnectionLostEvent& data);

	void event__messageArrived(const IoT::MQTT::MessageArrivedEvent& data);

	void event__messageDelivered(const IoT::MQTT::MessageDeliveredEvent& data);

private:
	Poco::SharedPtr<IoT::MQTT::MQTTClient> _pServiceObject;
};


inline IoT::MQTT::ConnectionInfo MQTTClientStub::connect()
{
	return _pServiceObject->connect();
}


inline void MQTTClientStub::connectAsync()
{
	_pServiceObject->connectAsync();
}


inline bool MQTTClientStub::connected() const
{
	return _pServiceObject->connected();
}


inline IoT::MQTT::ConnectionInfo MQTTClientStub::connectionInfo() const
{
	return _pServiceObject->connectionInfo();
}


inline void MQTTClientStub::disconnect(int timeout)
{
	_pServiceObject->disconnect(timeout);
}


inline const std::string& MQTTClientStub::id() const
{
	return _pServiceObject->id();
}


inline int MQTTClientStub::publish(const std::string& topic, const std::string& payload, int qos)
{
	return _pServiceObject->publish(topic, payload, qos);
}


inline int MQTTClientStub::publishMessage(const std::string& topic, const IoT::MQTT::Message& message)
{
	return _pServiceObject->publishMessage(topic, message);
}


inline const Poco::RemotingNG::Identifiable::TypeId& MQTTClientStub::remoting__typeId() const
{
	return IMQTTClient::remoting__typeId();
}


inline const std::string& MQTTClientStub::serverURI() const
{
	return _pServiceObject->serverURI();
}


inline IoT::MQTT::Statistics MQTTClientStub::statistics() const
{
	return _pServiceObject->statistics();
}


inline void MQTTClientStub::subscribe(const std::string& topic, int qos)
{
	_pServiceObject->subscribe(topic, qos);
}


inline void MQTTClientStub::subscribeMany(const std::vector < IoT::MQTT::TopicQoS >& topicsAndQoS)
{
	_pServiceObject->subscribeMany(topicsAndQoS);
}


inline std::vector < IoT::MQTT::TopicQoS > MQTTClientStub::subscribedTopics() const
{
	return _pServiceObject->subscribedTopics();
}


inline void MQTTClientStub::unsubscribe(const std::string& topic)
{
	_pServiceObject->unsubscribe(topic);
}


inline void MQTTClientStub::unsubscribeMany(const std::vector < std::string >& topics)
{
	_pServiceObject->unsubscribeMany(topics);
}


} // namespace MQTT
} // namespace IoT


#endif // IoT_MQTT_MQTTClientStub_INCLUDED

