#include <iostream>
#include "Dairy.h"

int main(int argc, char const *argv[])
{
	Dairy MyDairy;
	MyDairy.Read();
	Entity MyEntity;
	MyEntity.NewEntity();
	MyDairy.Insert(&MyEntity);
	MyDairy.Write();
	return 0;
}