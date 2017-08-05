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


	Own_bill_format bill1(100.2, "nick" ,"carter");
	bill1.printBill();

	string namelist[4] = { "Carter","Nick","GuoWei","Wang" };
	
	Group_bill_format bill2(100.1,namelist,4);
	bill2.printBill();
	return 1;
}