#pragma once

#include <string>

class Person
{
public:
	Person();
	Person(std::string name, unsigned int no);
	~Person();
	std::string getName() { return myName; }
	unsigned int getNo() { return myNo; }
	
private:
	
	std::string myName;
	unsigned int myNo = 0;
	//TODO make a list of bill

};

