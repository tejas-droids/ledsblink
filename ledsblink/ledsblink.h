/*
  ledsblink.h - ledsblink library for Wiring - For turning led's on and off
  Copyright (c) 2020 tejas.  All right reserved.
*/

// ensure this library description is only included once
#ifndef segment_h
#define segment_h

// include types & constants of Wiring core API
#include "Arduino.h"

// library interface description
class segment
{
  // user-accessible "public" interface
  public:
   fourdigital(int PinFirst, int PinSecond, int PinThird, int PinFourth);
   eightsegmental(int segA, int segB, int segC, int segD, int segE, int segF,int segG);
    
	void  lightnumber(int number to display);

	void on(int pin_number);
	void off();

  // library-accessible "private" interface
  private:
    int _PinFirst, _PinSecond, _PinThird, _PinFourth;
    int segA, int segB, int segC, int segD, int segE, int segF,int segG;
	
	void  lightnumber(int number_to_display);
};

#endif
