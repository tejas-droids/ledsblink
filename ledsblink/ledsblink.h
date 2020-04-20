/*
  ledsblink.h - ledsblink library for Wiring - For turning led's on and off
  Copyright (c) 2020 tejas.  All right reserved.
*/

// ensure this library description is only included once
#ifndef ledsblink_h
#define ledsblink_h

// include types & constants of Wiring core API
#include "Arduino.h"

// library interface description
class ledsblink
{
  // user-accessible "public" interface
  public:
   ledsblink(int PinFirst, int PinSecond, int PinThird, int PinFourth, int PinFifth);
    
	void flash(int delayTimeForFlash);
	void on();
	void off();

  // library-accessible "private" interface
  private:
    int _PinFirst, _PinSecond, _PinThird, _PinFourth, _PinFifth;
    
};

#endif
