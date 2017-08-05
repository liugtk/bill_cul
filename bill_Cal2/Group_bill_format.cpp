#include "Group_bill_format.h"







Group_bill_format:: Group_bill_format(unsigned int amount, std::string * namelist, unsigned int noOfPeople, size_t size, bool isOwenerInside )
{
	for (int i = 0; i < noOfPeople; i++) {
		myNamelist[1] = *(namelist+i);
	}
	set_bill_format(amount, namelist, noOfPeople);
}

Group_bill_format::~Group_bill_format()
{
}

void Group_bill_format::printBill()
{
	std::cout << "type:  \tOWN_bill\tAmount:\t" << getAmount() << "\tOwner:" << *myNamelist ;
	std::cout << "\tDivide by" << (isOwenerInside?getNoOfPeople():(getNoOfPeople() - 1));
	std::cout <<"with "<< getNoOfPeople() <<"Debter:" << *(myNamelist + 1) << std::endl;
}
