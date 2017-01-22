/*
class AllStudents
{
public:
	AllStudents();
	~AllStudents();
	void Out();
private:
	vector<Student> AllStudents;
};
*/
#include <iostream>
#include <string>
#include "AllStudents.h"
using namespace std;
AllStudents::AllStudents()
{
	string Name;//Name of the Student
	while(cin>>Name)//Add Students until "Ctrl+Z"(Windows) or "Ctrl+D"(Unix,MacOS) is pressed
	{
		OOPClass.push_back(Student(Name));
	}

}
AllStudents::~AllStudents()
{
}
void AllStudents::Out()
{
	cout<<"***Summary Sheet: ***"<<endl;
	for(p=OOPClass.begin();p<OOPClass.end();p++)
	{
		p->Out();
	}
}