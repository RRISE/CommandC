#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/*** motors ***/
static const int TALON_RIGHT_SHOOTER = 5;
static const int TALON_LEFT_SHOOTER = 6;
static const int TALON_COLLECTOR = 7;

/*** joystick ***/
static const int JOYSTICKPORT = 0;

/*** camera ***/
static const double FOVMIDDLE = 50; //where is the middle of the field of vision

/*** sensors ***/
static const int ULTRASONIC_FRONT_ANIPORT = 5;

/*****************************
* Formula [Voltage / 1024 = Volts per cm]
* [measured voltage / volts per cm = distance in cm]
*
*****************************/
static const float VCC = 5.0f;
static const float ULTRASONIC_SCALEFACTOR = VCC/1024.0f;
static const float ULTRASONIC_READING_TO_INCH = 1.6f;

// conversion
static const double METER_TO_INCH = 0.0254;
static const double INCH_TO_METER = 1/METER_TO_INCH;
static const double METER_TO_CM = 0.01;
static const double CM_TO_METER = 1/METER_TO_CM;


#endif
