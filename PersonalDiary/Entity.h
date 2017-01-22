#ifndef _ENTITY_H_
#define _ENTITY_H_ 
#include <string>
#include <vector>
class Entity
{
public:
	Entity(){}
	void NewEntity();
	std::string Title;
	std::vector<std::string> Content;
	int Date;
};

#endif