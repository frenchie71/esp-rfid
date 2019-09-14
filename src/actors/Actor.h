// ////////////////////////////////////////////
// Actor object definition file
// ////////////////////////////////////////////
// an actor generically speaking is a device
// that can be triggered
// such as a relay or an LED or a buzzer etc.
// it can be local (gpio)
// or remote (mqtt/http etc.)
// ////////////////////////////////////////////
// ////////////////////////////////////////////

#ifndef ACTOR_H_
#define ACTOR_H_

#include <ESP8266WiFi.h>
#include <ESPAsyncUDP.h>

#include <TimeLib.h>



#define ACTORTYPE_GPIO 0
#define ACTORTYPE_MQTT 1
#define ACTORTYPE_HTTP 2

#define ACTORSTATE_IDLE 0
#define ACTORSTATE_TRIGGERED 1

struct actorDescriptionStruct {
	int type;
	char *UID;
	char *friendlyName;
};

class Actor {
public:

	void ICACHE_FLASH_ATTR Init(const char * UID, const char * friendlyName, int actor_type);
	ICACHE_FLASH_ATTR virtual ~Actor();

	static int8_t actorState;
	actorDescriptionStruct actorDescription; 

	void ICACHE_FLASH_ATTR trigger(long duration);
	void ICACHE_FLASH_ATTR reset(void);

};

class GpioActor : public Actor{
public:

	void ICACHE_FLASH_ATTR Init(const char * UID, const char * friendlyName, int8_t gpioPin);
	ICACHE_FLASH_ATTR virtual ~GpioActor();

	void ICACHE_FLASH_ATTR trigger(long duration);
	void ICACHE_FLASH_ATTR reset();


private:

protected:

};

class MqttActor : public Actor{
public:

	void ICACHE_FLASH_ATTR Init(const char * UID, const char * friendlyName, const char * mqttTopic);
	ICACHE_FLASH_ATTR virtual ~MqttActor();

	void ICACHE_FLASH_ATTR trigger(long duration);
	void ICACHE_FLASH_ATTR reset();


private:

protected:

};

#endif