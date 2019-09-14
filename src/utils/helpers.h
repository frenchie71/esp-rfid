// ///////////////////////////////////////////////
// helpers.cpp
// ///////////////////////////////////////////////
// generic helper functions such as
// printing an IP address, parsing bytes,
// generating a UID etc.
// ///////////////////////////////////////////////

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <TimeLib.h>
#include <Ticker.h>

String ICACHE_FLASH_ATTR printIP(IPAddress adress);
void ICACHE_FLASH_ATTR parseBytes(const char *str, char sep, byte *bytes, int maxBytes, int base);
String ICACHE_FLASH_ATTR generateUid(int type=0, int length=12);
