#ifndef _DIARY_H_
#define _DIARY_H_
#include <vector>
#include <string>
#include "Entity.h"
class Dairy
{
public:
	Dairy(){Pointer=Catalogue.begin();}
	int Read();//Read from file to memory
	int Write();//Write from memery to file
	int Insert(Entity *Item);
	int Remove(std::string Title);
	int List(int Start=0,int End=0);//****************** default arguments: **********************
	int Show(std::string Title);
	std::vector<Entity> Catalogue;	
	std::vector<Entity>::iterator Pointer;
};

#endif