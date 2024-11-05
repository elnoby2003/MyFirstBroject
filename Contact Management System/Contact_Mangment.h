#pragma once
#include "Contact.h"
#include <iostream>
//using namespace std;

class Contact_Mangment //Program
{
public:
	void addContact(std::string firstName , std::string lastName, std::string phone, std::string email ,Contact Mcontact[]);
	void viewAllContacts(Contact Mcontacts[]);
	void searchContact(std::string firstname,std::string lastname, Contact Mcontact[]);
	void editContact(std::string firstname, std::string lastname, Contact Mcontact[]);
};

