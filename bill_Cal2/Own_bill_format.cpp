#include "Own_bill_format.h"






Own_bill_format::Own_bill_format(unsigned int amount, std::string owner, std::string debtor)
{
	*myNamelist = owner;
	*(myNamelist + 1) = debtor;
	set_bill_format(amount, myNamelist, 2);
}

Own_bill_format::~Own_bill_format()
{

}

void Own_bill_format::printBill()
{
	std::cout << "type: OWN_bill\tAmount:\t" << getAmount() << "\tOwner:" << *myNamelist << "\tDebter:" << *(myNamelist + 1) << std::endl;
}
