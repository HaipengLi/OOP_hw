#ifndef _NUMBERDISPLAY_H_
#define _NUMBERDISPLAY_H_

class NumberDisplay
{
public:
	NumberDisplay(int limit);
	void increase();/*让increase()返回1，if turnover。 是不好的设计：一举多得（不好）*/
	int GetValue();
	void SetValue(int);
private:
	int limit;
	int value;

	
};


#endif