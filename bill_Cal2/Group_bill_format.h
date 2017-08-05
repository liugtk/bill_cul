/* Group_bill
 * used to log 1 person pay , several person shared the bill
 *
 *add two function, 1 get max people
 * 2. print the bill info
 *
*/

#pragma once
#include "bill_format.h"


const unsigned int  GROUP_BILL_FORMAT_MAX_PEOPLE = 20 ;


class Group_bill_format : public bill_format{
public:
	
	Group_bill_format(unsigned int amount, std::string * namelist, unsigned int noOfPeople, size_t size, bool isOwenerInside = true);
	~Group_bill_format();

	unsigned int getMaxNoOfPeople() { return GROUP_BILL_FORMAT_MAX_PEOPLE; }
	void printBill();
private:
	std::string myNamelist[GROUP_BILL_FORMAT_MAX_PEOPLE];
	bool isOwenerInside = true;
	
	
};

