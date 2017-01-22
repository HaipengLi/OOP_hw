#ifndef _OOP_H_
#define _OOP_H_
#include "Course.h"
class OOP:public Course
{
public:
	OOP(int Homework,int InclassPerformance,int Quiz,int FinalExam):Course(Homework,InclassPerformance,FinalExam)
	{
	//Course(Homework,InclassPerformance,FinalExam);/*cannot use Course::Course()*/
	this->Quiz=Quiz;/*cannot miss this-> */
	}

void GetOOP(){
		GetCourses();
		std::cout<<"Quiz: "<<Quiz<<std::endl;
	}
private:
		int Quiz;
};

#endif