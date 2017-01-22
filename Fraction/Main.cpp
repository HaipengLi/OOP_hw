#include "Fraction.h"
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	Fraction A(3,4),C(5,6);
	Fraction D=A+C;
	double D1=A+C;
	string D2=D.toString();
	cout<<"(Fraction)A+C="<<D<<endl
	<<"(double)A+C="<<D1<<endl
	<<"(string)A+C="<<D2<<endl;

	cout<<"inserter and extractor for streams:"<<endl;
	Fraction B;
	cin>>B;
	cout<<"B="<<B<<endl;
	cout<<"end test"<<endl;


	return 0;
}