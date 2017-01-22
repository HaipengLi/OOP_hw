#include "content.h"
#include <iostream>
using namespace std;
/*
Student *P[MAX_SIZE];
void InStudent(int);
void OutStudent();
float average[3];
int min[3];
int max[3];
*/
void Content::InStudent(int NUM)
{
	cout<<"******Please enter "<<MAX_SIZE<<" Student(s)******"<<" (NAME SCORE1 SCORE2 SCORE3)"<<endl;
	string Name;
	int Score1,Score2,Score3;
	for (int i = 0; i<NUM; i++)
	{
		cin>>Name>>Score1>>Score2>>Score3;
		P[i] = new Student;
		P[i]->NewStudent(i+1,Name,Score1,Score2,Score3);
	}

}
void Content::OutStudent()
{
	int i = 0;
	min[0]=min[1]=min[2]=5;
	max[0]=max[1]=max[2]=0;
	cout << "no      name    score1  score2  score3  average" << endl;
	for (i = 0; i<MAX_SIZE; i++)
	{
		cout << P[i]->num << "  " << P[i]->name << "  " << P[i]->score1 << "  " << P[i]->score2 << "  " << P[i]->score3 << "  " << P[i]->average << endl;
		//calc max and min score
		max[0] = max[0]>P[i]->score1 ? max[0] : P[i]->score1;
		min[0] = min[0]<P[i]->score1 ? min[0] : P[i]->score1;
		max[1] = max[1]>P[i]->score2 ? max[1] : P[i]->score2;
		min[1] = min[1]<P[i]->score2 ? min[1] : P[i]->score2;
		max[2] = max[2]>P[i]->score3 ? max[2] : P[i]->score3;
		min[2] = min[2]<P[i]->score3 ? min[2] : P[i]->score3;
		//calc average
		average[0] = (average[0] * (i)+P[i]->score1) / (i + 1);
		average[1] = (average[1] * (i)+P[i]->score2) / (i + 1);
		average[2] = (average[2] * (i)+P[i]->score3) / (i + 1);
	}

	cout << "average  " << average[0] << "  " << average[1] << "  " << average[2] << endl << "min  " << min[0] << "  " << min[1] << "  " << min[2] << endl << "max  " << max[0] << "  " << max[1] << "  " << max[2] << endl;

}