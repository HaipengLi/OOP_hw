#ifndef _INDEX_OUT_OF_BOUNDS_H_
#define _INDEX_OUT_OF_BOUNDS_H_
#include<iostream>
class IndexOutofBounds{
public:
	IndexOutofBounds(int v):m_badValue(v){}
	void diagnostic() { std::cerr  << "**********index ["<< m_badValue       << "] is out of range!**********\n"; } 
private:
	int m_badValue;
	
};
#endif