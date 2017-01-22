/*

class Student
{
public:
	Student(string);
	~Student();
	void Out();
private:
	string Name;
	map<string,int> Course;
};

*/
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
Student::Student(string name)
:Name(name)//Name input
{
    string CourseName;
    int CourseScore;
    while(cin>>CourseName)//Enter CourseName+CourseScore one by one until "Ctrl+Z"(Windows) or "Ctrl+D"(Unix,MacOS) is pressed.
    {
        cin>>CourseScore;
        Course[CourseName]=CourseScore;
    }
    cin.clear();   //清除错误状态***IMPORTANT*** 
}

void Student::Out()
{
cout<<Name<<": "<<endl;//Name Out
for(p=Course.begin();p!=Course.end();p++)//Course Out
{
     cout <<p->first<<": "<<p->second<<"  ";
}
cout<<endl;
}
Student::~Student()
{

}