#include "Person.h"



unsigned int Person::myNoOfPeople ;


Person::Person()
{
}

Person::Person(std::string name, unsigned int no)
{
	myNoOfPeople++;
	myName = name;
	myNo = no;
}

Person::~Person()
{
}

void Person::addBill(Group_bill_format group_bill)
{
	if (group_bill.getNoOfPeople() <= PERSON_MAX_NUMBER_OF_PEOPLE) {
		// add to the bill list 
		// calculate the person bill state 
		// 

	}
	else {
		std::cerr << "The bill contain too many people!!" << std::endl;
	}
}
