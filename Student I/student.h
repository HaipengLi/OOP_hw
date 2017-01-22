/*student.h*/
#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
using std::string;
class Student
{
public:
	void NewStudent(int, string, int, int, int);

	int num;
	string name;
	int score1, score2, score3;
	float average;
};
#endif