#pragma once

#include <string>
#include "bill_format.h"
#include "Group_bill_format.h";
#include "Own_bill_format.h";

const int PERSON_MAX_BILL_STACK = 1000;
const int PERSON_MAX_NUMBER_OF_PEOPLE = 20;

class Person
{
public:
	Person();
	Person(std::string name, unsigned int no);
	~Person();
	std::string getName() { return myName; }
	unsigned int getNo() { return myNo; }
	static unsigned int getNoOfPeople() { return myNoOfPeople; }
	void addBill(Group_bill_format);
	void addBill(Own_bill_format);
	
	
private:
	static unsigned int myNoOfPeople;
	std::string myName;
	unsigned int myNo = 0;
	//TODO make a list of bill
	bill_format mybill_list[PERSON_MAX_BILL_STACK];
	int myBill_count;
	float myBill_Table[PERSON_MAX_NUMBER_OF_PEOPLE][PERSON_MAX_BILL_STACK];
};

