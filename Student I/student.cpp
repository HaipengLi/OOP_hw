#include <string>
using namespace std;
#include "student.h"

/*
NewStudent(int num,string name,int score1,int score2,int score3);
int num;
string name;
int score1,score2,score3;
float average;
*/
void Student::NewStudent(int num1, string name1, int score11, int score21, int score31)
{
	num = num1;
	name = name1;
	score1 = score11;
	score2 = score21;
	score3 = score31;
	average = (float)(score1 + score2 + score3) / 3;
}

