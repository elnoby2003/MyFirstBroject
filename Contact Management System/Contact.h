#pragma once
#include <iostream>
#include <string>
//using namespace std;

class Contact
{
private:
	std::string Number;
	std::string FirstName;
	std::string LastName;
	std::string Email;
public:
	//Contact();
	void setNumber(std::string number);
	std::string getNumber();
	void setFirstName(std::string firstName);
	std::string getFirstName();
	void setLastName(std::string lastName);
	std::string getLastName();
	void setEmail(std::string email);
	std::string getEmail();
	void displayContact();
};

