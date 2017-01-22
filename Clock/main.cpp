#include <iostream>
using namespace std;
#define DEBUG 1
#include "NumberDisplay.h"
#include "ClockDisplay.h"
#ifdef DEBUG
int main(int argc, char const *argv[])
{
	ClockDisplay A(24,60);
	A.hour.SetValue(11);
	A.minute.SetValue(24);
	for (int i = 0; i < 100; ++i)
	{
						/* code */A.Tick();
	}
}
#else/*Nomal Function*/

#endif