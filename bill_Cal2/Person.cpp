#include "Person.h"

#include <iterator>

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

void Person::printBills()
{
	for (int i = 0; i < myBill_count; i++) {
		mybill_list[i].printBill();
	}
}

void Person::printledger()
{
	// print map
	std::map <std::string, float> ::iterator itr;
	std::cout << "Person";
	for (itr = myPersonal_ledger_map.begin(); itr != myPersonal_ledger_map.end(); itr++ ) {
		std::cout << "\t" <<itr->first;
	}
	std::cout << "\n";
	std::cout  << myName;
	for (itr = myPersonal_ledger_map.begin(); itr != myPersonal_ledger_map.end(); itr++) {
		std::cout << "\t" << itr->second;
	}
	std::cout << "\n";



}

void Person::addValidBill(Group_bill_format group_bill)
{
	if (group_bill.getNoOfPeople() <= PERSON_MAX_NUMBER_OF_PEOPLE) {
		// add to the bill list
		mybill_list[myBill_count] = group_bill; 
		//increment the bill count
		myBill_count++;
		//create a namelist pointer
		std::string name;
		name = group_bill.getName(0);

		float moneyToBeCollect;
		if (group_bill.getisOwenerInside() ) {
			moneyToBeCollect = group_bill.getAmount() / group_bill.getMaxNoOfPeople();
		}
		else {
			moneyToBeCollect = group_bill.getAmount() / (group_bill.getMaxNoOfPeople() - 1);
		}

		// calculate the person bill state
		//check if he is the owner 
		if (myName == group_bill.getName()) { // Owner situation
			//momney to be colloct is positive
			//loop for every debtors
			for (int i = 1; i < group_bill.getNoOfPeople(); i++) {
				if (myPersonal_ledger_map[group_bill.getName(i)]) { //when this debter exist
					myPersonal_ledger_map[group_bill.getName(i)]  += moneyToBeCollect;
				}
				else {// when he is not exist 
					myPersonal_ledger_map[group_bill.getName(i)] = moneyToBeCollect;
					//myPersonal_bill_map[*(namelist + i)] = moneyToBeCollect; // may have a test if this work
				}
			}
		}
		else { // Debtor situation
			moneyToBeCollect = -moneyToBeCollect; //change to negative, since the person is debtor

			if (myPersonal_ledger_map[group_bill.getName(0)]) { //when this debter exist
				myPersonal_ledger_map[group_bill.getName(0)] += moneyToBeCollect;
			}
			else {// when he is not exist 
				myPersonal_ledger_map[group_bill.getName(0)] = moneyToBeCollect;

			}
		}
			

	}
	else{
		std::cerr << "The bill contain too many people!!" << std::endl;
	}
}
