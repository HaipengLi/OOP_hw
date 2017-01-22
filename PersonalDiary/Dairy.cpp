
// class Dairy
// {
// public:
// Dairy(){}
// virtual ~Dairy(){}
// int Read();//Read from file to memory
// int Write();//Write from memery to file
// int Insert(Entity Item);
// int Remove(Entity Item);
// int List(int Start=0,int End=0);
// int Show(std::string Title);
// std::vector<Entity> Catalogue;
// };
#include "Dairy.h"
#include <iostream>
#include <fstream>
using namespace std;
int Dairy::Read(){
	string buffer;
	int date;
	ifstream Database("data.dry");
	if(!Database.is_open()){//Bug:::if data.dry does not exit : wrong
		ofstream TempFile("data.dry");//creat a file
		TempFile.close();
		return 0;
	}
	//if the file is empty
	string TempString;
	Database>>TempString;
	if(TempString.length()==0){
		return -1;
	}
	else{
		Database.clear();
		Database.seekg(0,ios::beg);
	}
	while(!Database.eof()){//BUG:::::::if data.dry exits but is empty, infinite loop
		Entity *New=new Entity;
		Database>>buffer;
		if(buffer==".")break;
		New->Title=buffer;
		Database>>date;
		New->Date=date;
		Database>>buffer;
		while(buffer!="."&&!Database.eof()){
			New->Content.push_back(buffer);
			Database>>buffer;
		}
		New->Content.push_back(buffer);
		Insert(New);
	}
	Database.close();
}
int Dairy::Write(){
	ofstream Database("data.dry",ios::trunc);
	if(!Database.is_open()){
		cout << "Error opening file"; exit (1);
	}
	for(vector<Entity>::iterator p=Catalogue.begin();p<Catalogue.end();p++){
		Database<<p->Title<<endl<<p->Date<<endl;
		for (vector<string>::iterator i = p->Content.begin(); i != p->Content.end(); ++i){
			Database<<*i<<endl;
		}
	}
	Database.close();
}
int Dairy::Remove(std::string Title){
	if(Catalogue.empty()){
		return -1;//empty
	}
	for(vector<Entity>::iterator p=Catalogue.begin();p<Catalogue.end();p++){
		if(p->Title==Title){
			Catalogue.erase(p);
			return 0;
		}
	}
	return -1;//not found
}
int Dairy::Insert(Entity *Item){
	Remove(Item->Title);
	if(!Catalogue.empty()){
		vector<Entity>::iterator p=Catalogue.begin();
		if(p->Date>Item->Date){
			Catalogue.insert(p,*Item);
			return 1;
		}
		for(;p<Catalogue.end()-1;p++){
			if(p->Date<=Item->Date&&(p+1)->Date>Item->Date){
				Catalogue.insert(p+1,*Item);
				return 1;
			}
		}
	}
	Catalogue.push_back(*Item);
	return 1;
}

int Dairy::List(int Start,int End){//****************** default arguments: **********************
	if(Start==0&&End==0){
		End=Catalogue.back().Date;
	}
	if(!Catalogue.empty()){
		vector<Entity>::iterator p=Catalogue.begin();
		for(;p<Catalogue.end();p++){
			if(p->Date>=Start&&p->Date<=End){
				cout<<p->Title<<endl;
			}
			else if(p->Date>End){
				break;
			}
		}
	}	
}
int Dairy::Show(std::string Title){
	if(!Catalogue.empty()){
		vector<Entity>::iterator p=Catalogue.begin();
		for(;p<Catalogue.end();p++){
			if(p->Title==Title){
				cout<<"Date:"<<p->Date<<"Content: "<<endl;
				for (vector<string>::iterator i = p->Content.begin(); i != p->Content.end(); ++i){
					cout<<*i<<endl;
				}
				return 0;
			}

		}
	}
	return -1;
}