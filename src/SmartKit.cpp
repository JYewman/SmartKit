/*
 * File: SmartKit.cpp
 * Project: SmartKit
 * Created Date: Monday, October 17th 2022, 2:20:56 pm
 * Author: Joshua Yewman
 * Author Email: joshua@gosystem.co.uk
 * -----
 * Last Modified:
 * Modified By:
 * -----
 * Copyright (c) 2022 goSysten Solutions Limited
 */

// TODO: Figure out how to init based on the board defined in headder
#define SMARTKIT_INTERNAL
#include "SmartKit.h"
#include <Arduino.h>

boolean SmartKit::init()
{
    if (boardID == 99)
    {
        return false;
    }
    else if (boardID <= 2) // If the board is an Arudino AVR
    {
        return true;
    }
    else if (boardID == 3) // If the board is an ESP32
    {
        return true;
    }
    else if (boardID <= 20) // If the board is an ESP8266
    {
        return true;
    }

    return false;
}