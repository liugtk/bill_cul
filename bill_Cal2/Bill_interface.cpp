
#include "Bill_interface.h"
#include <iostream>


Bill_interface::Bill_interface()
{
	
}


Bill_interface::~Bill_interface()
{
}

bool Bill_interface::addPerson(std::string name)
{
	
	if (myCurrentNoOfPeople <= BIll_INTERFACE_MAX_PEOPLE) {
		myPeopleList[myCurrentNoOfPeople] = Person(name, myCurrentNoOfPeople); //initial at the myCount position
		myNameMap.insert(std::pair<std::string, int>(name, myCurrentNoOfPeople)); // map the string name with the number.
		//increment the myCount in the end.
		myCurrentNoOfPeople++;
		return true;
	}
	else {
		std::cerr << "exceed the limit of Persons that can be recorded!!\n";
	}
	
	return false;
}





void Bill_interface::printPeople()
{
	std::cout << "you have following people in your list\n";
	std::map <std::string, int> ::iterator itr;
	std::cout << "\tName\tNo\n";
	for (int itr = 0; itr < myCurrentNoOfPeople; itr++)
	{
		std::cout << '\t' << myPeopleList[itr].getName()
			<< '\t' << myPeopleList[itr].getNo() << '\n';
	}
	std::cout << std::endl;
}

