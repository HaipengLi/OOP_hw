#include <iostream>
#include "Dairy.h"
using namespace std;
int main(int argc, char const *argv[]){
	Dairy MyDairy;
	MyDairy.Read();
	string Title;
	cout<<"Enter the Title that you want to remove: ";
	cin>>Title;
	cout<<MyDairy.Remove(Title)<<endl;
	MyDairy.Write();
}