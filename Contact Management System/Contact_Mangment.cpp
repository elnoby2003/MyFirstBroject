#include "Contact_Mangment.h"
#include "string"
#include "iostream"
#include "Contact.h"
//using namespace std;
void Contact_Mangment::addContact(std::string firstName, std::string lastName, std::string phone, std::string email,Contact Mcontact[])
{
	for (int i = 0; i < 100; i++)
	{
		if (Mcontact[i].getFirstName()==""&& Mcontact[i].getLastName() == ""&&
			Mcontact[i].getNumber() == ""&& Mcontact[i].getEmail() == "")
		{
			Contact myContact;
			myContact.setFirstName(firstName);
			myContact.setLastName(lastName);
			myContact.setNumber(phone);
			myContact.setEmail(email);
			Mcontact[i] = myContact;
			return;
		}
	}

}

void Contact_Mangment::viewAllContacts(Contact Mcontact[])
{
	for (int  i = 0; i < 100; i++)
	{
		if (Mcontact[i].getFirstName() == "" && Mcontact[i].getLastName() == "" &&
			Mcontact[i].getNumber() == "" && Mcontact[i].getEmail() == "") {
			return;
		}
		std::cout << "==============================================" << std::endl;
		std::cout << "Contact number #" << i+1 << std::endl;
		std::cout << "Name :" << Mcontact[i].getFirstName() << ", " << Mcontact[i].getLastName() << std::endl;
		std::cout << "Number :" << Mcontact[i].getNumber() << std::endl;
		std::cout << "Gmail :" << Mcontact[i].getEmail() << std::endl;
		std::cout << "==============================================" << std::endl;
		
	}
}

void Contact_Mangment::searchContact(std::string firstname, std::string lastname, Contact Mcontact[])
{
	bool flag = true;
	for (int i = 0; i < 100; i++)
	{
		if (Mcontact[i].getFirstName() ==firstname && Mcontact[i].getLastName() == lastname) {
			std::cout << "==============================================" << std::endl;
			std::cout << "Contact number #" << i + 1 << std::endl;
			std::cout << "Name :" << Mcontact[i].getFirstName() << ", " << Mcontact[i].getLastName() << std::endl;
			std::cout << "Number :" << Mcontact[i].getNumber() << std::endl;
			std::cout << "Gmail :" << Mcontact[i].getEmail() << std::endl;
			std::cout << "==============================================" << std::endl;
			return;
		}
		else
		{
			flag = false;
		}
		if (!flag && i==99)
		{
		std::cout << "Invalid Contact" << std::endl;
		}
	}
}

void Contact_Mangment::editContact(std::string firstname, std::string lastname, Contact Mcontact[])
{
	int choice;
	for (size_t i = 0; i < 100; i++)
	{
		if (Mcontact[i].getFirstName() == firstname && Mcontact[i].getLastName() == lastname) {
			std::cout << "1.Edit First Name\n2.Edit last Name\n3.Edit Number\n4.Edit Email\n";
			std::cin >> choice;
			std::string temp;
			if (choice>0 && choice<=4)
			{
			switch (choice)
			{
			case 1: std::cout << "Enter new first name"<<std::endl;
				std::cin >> temp;
				Mcontact[i].setFirstName(temp);
				break;
			case 2:std::cout << "Enter new last name" << std::endl;
				std::cin >> temp;
				Mcontact[i].setLastName(temp);
				break;
			case 3:std::cout << "Enter new Number" << std::endl;
				std::cin >> temp;
				Mcontact[i].setNumber(temp);
				break;
			case 4:std::cout << "Enter new Email" << std::endl;
				std::cin >> temp;
				Mcontact[i].setEmail(temp);
				break;
			}
			std::cout << "Contact After Edit : " << std::endl;
			std::cout << "----------------------------------------------" << std::endl;
			Mcontact[i].displayContact();
			std::cout << "----------------------------------------------" << std::endl;
			}
			else
			{
				std::cout << "Not a choice" << std::endl;
			}
			return;
		}
		
	}
}

