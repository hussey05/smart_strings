#pragma once
#include <iostream>

class strinB
{
public:
	char* string_buf;  
	int len;    
	int refcount;	
	strinB();
};
class StringBuffer {

public:
	StringBuffer(); 
	~StringBuffer();				 
	StringBuffer(const StringBuffer&); 
	StringBuffer(char*, int);   
	strinB* getstring_();
	char charAt(int) const;   
	int length() const;       
	void reserve(int);        
	void append(char);        
	
	StringBuffer& operator = (const StringBuffer&);

private:
	strinB*  str;
};

