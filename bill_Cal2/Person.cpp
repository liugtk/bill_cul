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



void Person::addValidBill(Own_bill_format)
{
}

void Person::addValidBill(Group_bill_format group_bill)
{
	if (group_bill.getNoOfPeople() <= PERSON_MAX_NUMBER_OF_PEOPLE) {
		// add to the bill list
		mybill_list[myBill_count] = group_bill; 
		//increment the bill count
		myBill_count++;
		
		float moneyToBeCollect;
		if (group_bill.getisOwenerInside() ) {
			moneyToBeCollect = group_bill.getAmount() / group_bill.getMaxNoOfPeople();
		}
		else {
			moneyToBeCollect = group_bill.getAmount() / (group_bill.getMaxNoOfPeople() - 1);
		}



		// calculate the person bill state
		//check if he is the owner 
			
			// record the list one by one
				// if the debtor exist, update
				// if not initialize
		//if he is the debtor
			
			//record the owner.

	}
	else {
		std::cerr << "The bill contain too many people!!" << std::endl;
	}
}
