#include "ClockDisplay.h"
#include <iostream>
using namespace std;
ClockDisplay::ClockDisplay(int h,int m):hour(h),minute(m)/*！！！！*/
{
}
void ClockDisplay::Tick()
{
	minute.increase();
	if(minute.GetValue()==0)
	{
		hour.increase();
	}
	cout<<hour.GetValue()<<"  "<<minute.GetValue()<<endl;
}