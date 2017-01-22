#ifndef _COURSE_H_
#define _COURSE_H_ 

#include <iostream>
class Course
{

public:
	Course(int Homework,int InclassPerformance,int FinalExam)
	:Homework(Homework), InclassPerformance(InclassPerformance),FinalExam(FinalExam){}/*cannot use this->Homework(Homework)*/
	
	GetCourses(){std::cout<<"Homework: "<<Homework<<std::endl<<"InclassPerformance: "
	<<InclassPerformance<<std::endl<<"FinalExam: "<<FinalExam<<std::endl;}
	~Course(){}
private:
	int Homework;
	int InclassPerformance;
	int FinalExam;
};


#endif
