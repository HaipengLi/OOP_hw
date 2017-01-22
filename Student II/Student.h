#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
#include <map>
using std::string;
using std::map;
class Student
{
public:
	Student(string);
	~Student();
	void Out();
private:
	string Name;
	map<string,int> Course;
	map<string,int>::iterator p;
};

#endif