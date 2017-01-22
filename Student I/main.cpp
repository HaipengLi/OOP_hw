#include <iostream>
#include "student.h"
#include "content.h"

using namespace std;
int main(int argc, char const *argv[])
{
	Content *C = new Content;
	C->InStudent(MAX_SIZE);
	C->OutStudent();
	return 0;
}