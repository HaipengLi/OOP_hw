#include "Entity.h"
#include <iostream>
// class Entity
// {
// public:
// 	Entity(){}
// 	~Entity(){}
// 	void NewEntity();
// 	std::string Title;
// 	std::string Content;
// 	int Date;
// };
using namespace std;
void Entity::NewEntity(){
	cout<<"Title:"<<endl;
	cin>>Title;
	cout<<"Date:"<<endl;
	cin>>Date;
	cout<<"Content:"<<endl;
	string Temp;
	while(cin>>Temp&&Temp!="."){
     		 Content.push_back(Temp);
  	}
  	Content.push_back(".");
    	cin.clear();   //清除错误状态***IMPORTANT*** 
}