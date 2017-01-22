#include <iostream>
#include <stdlib.h>
#include "Dairy.h"
using namespace std;
int main(int argc, char const *argv[])
{
	Dairy MyDairy;
	if(MyDairy.Read()==-1){
		cout<<"Empty"<<endl;
		return 0;
	}
	cout<<"Found as below:"<<endl;
	if(argc==3){
		MyDairy.List(atoi(argv[1]),atoi(argv[2]));
	}
	else if(argc==1){
		MyDairy.List();
	}
	return 0;
}