/*
 * voltcraft300klibrary.cpp - An introduction to library setup
 * Created by Christian @ Core Electronics on 1/06/18
 * Revision #5 - See readMe
 */

//	The #include of Arduino.h gives this library access to the standard
//	Arduino types and constants (HIGH, digitalWrite, etc.). It's 
//	unneccesary for sketches but required for libraries as they're not
//	.ino (Arduino) files. 
#include "Arduino.h"

//	This will include the Header File so that the Source File has access
//	to the function definitions in the voltcraft300klibrary library.
#include "voltcraft300klibrary.h" 

//	This is where the constructor Source Code appears. The '::' indicates that
//	it is part of the voltcraft300klibrary class and should be used for all constructors
//	and functions that are part of a class.
voltcraft300klibrary::voltcraft300klibrary(int pinOne, int pinTwo, int pinThree){

	//	This is where the pinModes are defined for circuit operation.
	pinMode(pinOne, OUTPUT);
	pinMode(pinTwo, OUTPUT);
	pinMode(pinThree, OUTPUT);

	//	The arguments of the constructor are then saved into the private variables.
	_pinOne = pinOne;
	_pinTwo = pinTwo;
	_pinThree = pinThree;
}

//	For the 'on', 'off' and 'flash' functions, their function return type (void) is
//	specified before the class-function link. They also use the private variables
//	saved in the constructor code.

void voltcraft300klibrary::on(){
  digitalWrite(_pinOne, HIGH);
  digitalWrite(_pinTwo, HIGH);
  digitalWrite(_pinThree, HIGH);
}

void voltcraft300klibrary::off(){
  digitalWrite(_pinOne, LOW);
  digitalWrite(_pinTwo, LOW);
  digitalWrite(_pinThree, LOW);
}

void voltcraft300klibrary::flash(int delayTime){
  for(int i = 0; i < 4; i++){
  digitalWrite(_pinOne, HIGH);
  digitalWrite(_pinTwo, HIGH);
  digitalWrite(_pinThree, HIGH);
  delay(delayTime);
  digitalWrite(_pinOne, LOW);
  digitalWrite(_pinTwo, LOW);
  digitalWrite(_pinThree, LOW);
  delay(delayTime);
  }
}