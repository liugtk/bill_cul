#pragma once

#include <list>
#include "Person.h"
#include <string>
#include <map>

static const unsigned int  BIll_INTERFACE_MAX_PEOPLE = 20; 


class Bill_interface
{
	
public:
	Bill_interface();
	~Bill_interface();
	
	// people related
	bool addPerson(std::string name);
	//bool removePerson(); //TODO late may try this function, delete the target and move all others to the correct position.
	void printPeople();
	unsigned int getMaxNoOfPeople() { return BIll_INTERFACE_MAX_PEOPLE; }
	unsigned int getMyCurrentNoOfPeople() { return Person::getNoOfPeople(); }

	void getPerson(Person * *x, int index);
	//bill related
	//bool recordOwnBill();
private:
	Person *myPeopleList[BIll_INTERFACE_MAX_PEOPLE] ;
	std::map <std::string, int> myNameMap;

	

};

