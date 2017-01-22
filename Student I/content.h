/*content.h*/
#ifndef _CONTENT_H_
#define _CONTENT_H_


#include"student.h"
#define MAX_SIZE 10
class Content
{
public:
	Student *P[MAX_SIZE];
	void InStudent(int);
	void OutStudent();
	float average[3];
	int min[3]  ;
	int max[3]  ;
};
#endif
