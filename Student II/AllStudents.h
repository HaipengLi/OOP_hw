#ifndef _ALLSTUDENT_H_
#define _ALLSTUDENT_H_

#include "Student.h"
#include <vector>
using std::vector;
class AllStudents
{
public:
	AllStudents();
	~AllStudents();
	void Out();
private:
	vector<Student> OOPClass;
	vector<Student>::iterator p;
};
#endif