#include <iostream>
#include "Vector.h"
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	Vector<string> Name(2);
	cout<<"Name.size="<<Name.size()<<endl;//test size
	Name[0]="Leo";//test operator []
	Name[1]="Bob";
	Name.inflate(2);//test inflate()
	cout<<"Name.size="<<Name.size()<<endl;
	Vector<int> Score;
	Score.inflate(2);
	Score[0]=100;
	Score[1]=1;
	cout<<"Score.size="<<Score.size()<<endl;

	try{//test exceptions 
		for (int i = 0; i < 3; ++i)
		{
			cout<<Name[i]<<":"<<Score[i]<<endl;
		}
	}catch(IndexOutofBounds&e){
		e.diagnostic();
	}
	
	Vector<string>Name_backup=Name;//test Copy constructor
	cout<<"Name.size="<<Name_backup.size()<<endl;
	Name[1]="David";
	cout<<"Name[1]:"<<Name[1]<<endl;
	cout<<"Name_backup[1]:"<<Name_backup[1]<<endl;

	return 0;
}