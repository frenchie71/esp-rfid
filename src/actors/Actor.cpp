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

#include "Actor.h"


void ICACHE_FLASH_ATTR Actor::Init(const char * UID, const char * friendlyName, int actor_type)
{

}


ICACHE_FLASH_ATTR Actor::~Actor()
{

}

//static int8_t Actor::actorState;
//actorDescriptionStruct Actor::actorDescription; 

void ICACHE_FLASH_ATTR Actor::trigger(long duration)
{

}

void ICACHE_FLASH_ATTR Actor::reset()
{

}

