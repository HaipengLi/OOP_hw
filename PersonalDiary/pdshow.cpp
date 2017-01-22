#include <iostream>
#include "Dairy.h"
using namespace std;
int main(int argc, char const *argv[])
{
	Dairy MyDairy;
	MyDairy.Read();
	string Title;
	cout<<"Enter the Title you want to show: "<<endl;
	cin>>Title;
	int i=MyDairy.Show(Title);
	if(i==-1){
		cout<<"Not Found"<<endl;
	}
	return 0;
}