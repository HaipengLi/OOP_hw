#include "NumberDisplay.h"

	NumberDisplay::NumberDisplay(int limit)
	{
		this->limit=limit;
	}
	void NumberDisplay::increase()
	{
		if(value==limit-1)
		{
			value=0;
		}
		else value++;
	}
	int NumberDisplay::GetValue()
	{
		return value;
	}
	void NumberDisplay::SetValue(int value)
	{
		this->value=value;
	}