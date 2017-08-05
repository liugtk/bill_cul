#include "Group_bill_format.h"







Group_bill_format:: Group_bill_format(unsigned int amount, std::string * namelist, unsigned int noOfPeople,  bool isOwenerInside )
{
	if (noOfPeople > GROUP_BILL_FORMAT_MAX_PEOPLE)
		std::cerr << "excced the max stacks in the calss group_bill_format!!\n" <<std::endl;
	for (int i = 0; i < noOfPeople; i++) {
		myNamelist[i] = *(namelist+i);
	}
	set_bill_format(amount, namelist, noOfPeople);
}

Group_bill_format::~Group_bill_format()
{
}

void Group_bill_format::printBill()
{
	std::cout << "type: OWN_bill\tAmount:\t" << getAmount() << "(/" << (isOwenerInside?getNoOfPeople():(getNoOfPeople() - 1))<<")";
	std::cout << "\tOwner:" << *myNamelist ;
	std::cout << "\t" << getNoOfPeople()-1 << "Debters:";
	for(int i = 1 ; i < getNoOfPeople(); i++) {
		std::cout << *(myNamelist + i) << ", ";
	}
	std::cout << std::endl;
}
