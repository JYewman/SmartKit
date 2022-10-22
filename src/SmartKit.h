/*
 * File: SmartKit.h
 * Project: SmartKit
 * Created Date: Monday, October 17th 2022, 2:15:25 pm
 * Author: Joshua Yewman
 * Author Email: joshua@gosystem.co.uk
 * -----
 * Last Modified:
 * Modified By:
 * -----
 * Copyright (c) 2022 goSysten Solutions Limited
 *
 * SmartKit is a IoT platform that enables devices to connect, identify and communicate via LAN
 * This library is designed for use with any arduino compatible device.
 * When used with the ESP8266 or ESP32 this library includes the WiFiManager library for initializing WiFi communication
 */
#pragma once
#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4)
#define SMARTKIT_HAS_PRAGMA_MESSAGE
#endif

#define SMARTKIT_VERSION 100001
#ifndef SMARTKIT_INTERNAL
#ifdef SMARTKIT_SHOW_VERSION
#ifdef SMARTKIT_HAS_PRAGMA_MESSAGE
#pragma message "SmartKit version 1.00.001"
#else
#warning SmartKit version 1.00.001
#endif
#endif
#endif

#ifndef __PROG_TYPES_COMPAT__
#define __PROG_TYPES_COMPAT__
#endif

#include <Arduino.h>

// Identify the microcontroller that the code has been compiled for.
// Arduino AVR
#if defined(ARDUINO_AVR_UNO)
#include <Ethernet.h>
#const int board 0
#elif defined(ARDUINO_AVR_MEGA2560)
#include <Ethernet.h>
#const int board 1
#elif defined(ARDUINO_AVR_UNO_WIFI_DEV_ED)
#include <WiFi.h>
#const int board 2
// ESP32
#elif defined(ARDUINO_ESP32_DEV)
#include <WiFi.h>
#include <WiFiManager.h>
#include <AsyncUDP.h>
#include "esp32ssdp.h"
#const int board 3
// ESP8266
#elif defined(ARDUINO_ESP8266_ESP01)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_ESP13)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_ESP12)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_ESPRESSO_LITE_V1)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_ESPRESSO_LITE_V2)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_PHOENIX_V1)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_PHOENIX_V2)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_NODEMCU)
#include <WiFi.h>
#elif defined(ARDUINO_MOD_WIFI_ESP8266)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_THING)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_THING_DEV)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_ESP210)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_WIFIO)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_WEMOS_D1MINI)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_WEMOS_D1MINIPRO)
#include <WiFi.h>
#elif defined(ARDUINO_ESP8266_WEMOS_D1MINILITE)
#include <WiFi.h>
#elif defined(ARDUINO_WIFINFO)
#include <WiFi.h>
#endif

class SmartKit
{
public:
    SmartKit();
    boolean init();
    boolean start();
    boolean getError();

private:
};
