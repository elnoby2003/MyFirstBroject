#include "Contact.h"
#include <iostream>
#include <string>

void Contact::setNumber(std::string number) {
	Number = number;
}
std::string Contact::getNumber() {
	return Number;
}
void Contact::setFirstName(std::string firstName) {
	FirstName = firstName;
}
std::string Contact::getFirstName() {
	return FirstName;
}
void Contact::setLastName(std::string lastName) {
	LastName = lastName;
}
std::string Contact::getLastName() {
	return LastName;
}
void Contact::setEmail(std::string email) {
	Email = email;
}
std::string Contact::getEmail() {
	return Email;
}

void Contact::displayContact()
{
	std::cout << "Name :" << getFirstName() << ", " << getLastName() << std::endl;
	std::cout << "Number :" << getNumber() << std::endl;
	std::cout << "Gmail :" << getEmail() << std::endl;
}


