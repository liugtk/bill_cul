
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
	int temp = Person::getNoOfPeople(); 
	if (temp <= BIll_INTERFACE_MAX_PEOPLE) {
		myNameMap.insert(std::pair<std::string, int>(name, temp)); 
		 
		myPeopleList[temp] = new Person(name,temp); // after initialting, the no is already incremented, that is why we need the temp.
		std::cout << myPeopleList[temp]->getName() << "\n";
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
	
	std::cout << "\tName\tNo\n";
	for (int itr = 0; itr < Person::getNoOfPeople(); itr++)
	{
		std::cout << '\t' << myPeopleList[itr]->getName()
			<< '\t' << myPeopleList[itr]->getNo() << '\n';
	}
	std::cout << std::endl;
}

void Bill_interface::getPerson(Person ** x, int index)
{

	if (index < Person::getNoOfPeople())
		*x = myPeopleList[index];
	
}

