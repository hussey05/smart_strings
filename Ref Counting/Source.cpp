#include <iostream>
#include <cstdlib>
#include <cstring>

#include "StringBuffer.h"

using namespace std;

int main(int argc, char** argv) {
	char* hello = "hello";
	StringBuffer* object = new StringBuffer(hello, 5);
	StringBuffer* object2 = new StringBuffer();

	*object2 = *object;
	
	object2->append('s'); 
	object2->append('a'); 
	cout << "Ref counting write implementation "<< sendl;
	cout << "object 1 length =" << object->length() << endl;
	cout << "object 2 length =" << object2->length() <<endl;
	std::cout << "new ss charAt 0 = " << object->charAt(0) << endl;
	
	getchar();
	return 0;
}

