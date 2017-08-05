#pragma once

#include <string>
#include <iostream>

class bill_format
{
public:
	bill_format();
	bill_format(float amount, std::string * namelist , unsigned int noOfPeople) {
		myAmount = amount;
		myNameList = namelist;
		myNoOfPeople = noOfPeople;
	}
	void set_bill_format(float amount, std::string * namelist, unsigned int noOfPeople) {
		myAmount = amount;
		myNameList = namelist;
		myNoOfPeople = noOfPeople;
	}
	float getAmount() { return myAmount; }
	void getNamelist(std::string * namelist) { namelist = myNameList; }
	unsigned int getNoOfPeople() { return myNoOfPeople; }
	~bill_format();
	virtual void printBill() { std::cerr << "Error. Balance not available for base type." << std::endl; };

private:
	float myAmount;
	std::string* myNameList ;
	unsigned int myNoOfPeople;
	

};

