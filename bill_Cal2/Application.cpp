#include <iostream>
#include "Bill_interface.h"

#include "Own_bill_format.h";
#include "Group_bill_format.h"



Bill_interface Bill_Manager;
using namespace std;
int main() {
	Bill_Manager.addPerson("Carter");
	Bill_Manager.addPerson("Nick");
	Bill_Manager.addPerson("Domi");

	Bill_Manager.printPeople();

	// Own bill test
	Own_bill_format bill1(100.2, "nick" ,"carter");
	bill1.printBill();
	
	//group bill test
	string namelist[4] = { "Carter","Nick","GuoWei","Wang" };
	Group_bill_format bill2(100.1,namelist,4);
	bill2.printBill();




	/*
	bill_format *billptr = &bill2;
	billptr->printBill();
	*/

	//personal bill test.
	cout << "\n\nfor person\n";
	Person *person;
	
	Bill_Manager.getPerson(&person, 0);
	person->addValidBill(&bill2);
	person->printBills();
	person->printledger();



	return 1;
}