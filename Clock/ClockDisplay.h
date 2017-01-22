#ifndef _CLOCKDISPLAY_H_
#define _CLOCKDISPLAY_H_


#include "NumberDisplay.h"
class ClockDisplay
{
public:
	ClockDisplay(int,int);
	void Tick();
	NumberDisplay hour;
	NumberDisplay minute;
	
};

#endif