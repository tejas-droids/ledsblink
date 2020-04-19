/*
 ledsblink.h - ledsblink library for Wiring - For turning led's on and off
  Copyright (c) 2020 tejas.  All right reserved.
*/

// include core Wiring API
#include "Arduino.h"

// include this library's description file
#include "ledsblink.h"


// Constructor /////////////////////////////////////////////////////////////////
// Function that handles the creation and setup of instances

ledsblink::ledsblink(int PinFirst, int PinSecond, int PinThird, int PinFourth, int PinFifth)
{
  // initialize this instance's variables
  

  // do whatever is required to initialize the library
  pinMode(PinFirst, OUTPUT);
  pinMode(PinSecond, OUTPUT);
  pinMode(PinThird, OUTPUT);
  pinMode(PinFourth, OUTPUT);
  pinMode(PinFifth, OUTPUT);
  
  
  _PinFirst = PinFirst;
  _PinSecond = PinSecond;
  _PinThird = PinThird;
  _PinFourth = PinFourth;
  _PinFifth = PinFifth;
  
}

// Public Methods //////////////////////////////////////////////////////////////
// Functions available in Wiring sketches, this library, and other libraries

void ledsblink::on(void)
{
  // eventhough this function is public, it can access
  // and modify this library's private variables
  digitalWrite(_PinFirst,HIGH);
  digitalWrite(_PinSecond,HIGH);
  digitalWrite(_PinThird,HIGH);
  digitalWrite(_PinFourth,HIGH);
  digitalWrite(_PinFifth,HIGH);

  // it can also call private functions of this library
  
}

void ledsblink::off(void)
{
  // eventhough this function is public, it can access
  // and modify this library's private variables
  digitalWrite(_PinFirst,LOW);
  digitalWrite(_PinSecond,LOW);
  digitalWrite(_PinThird,LOW);
  digitalWrite(_PinFourth,LOW);
  digitalWrite(_PinFifth,LOW);

  // it can also call private functions of this library
  
}

void ledsblink::flash(int delayTimeForFlash)
{
  // eventhough this function is public, it can access
  // and modify this library's private variables
  for(int j=0;j<9;j++){
  digitalWrite(_PinFirst,HIGH);
  digitalWrite(_PinSecond,HIGH);
  digitalWrite(_PinThird,HIGH);
  digitalWrite(_PinFourth,HIGH);
  digitalWrite(_PinFifth,HIGH);
  delay(delayTimeForFlash);
  digitalWrite(_PinFirst,LOW);
  digitalWrite(_PinSecond,LOW);
  digitalWrite(_PinThird,LOW);
  digitalWrite(_PinFourth,LOW);
  digitalWrite(_PinFifth,LOW);
  delay(delayTimeForFlash);
  }
  // it can also call private functions of this library
  
}


// Private Methods /////////////////////////////////////////////////////////////
// Functions only available to other functions in this library

