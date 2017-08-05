#pragma once
#include "bill_format.h"


const unsigned int  OWN_BILL_FORMAT_MAX_PEOPLE = 2;

class Own_bill_format :
	protected bill_format
{
public:
	Own_bill_format(float amount, std::string owner, std::string debtor);
	~Own_bill_format();


	unsigned int getMaxNoOfPeople() { return OWN_BILL_FORMAT_MAX_PEOPLE; }
	void printBill();
private:
	std::string myNamelist[OWN_BILL_FORMAT_MAX_PEOPLE];
	
};

