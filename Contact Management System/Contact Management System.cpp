#include <iostream>
#include "Contact_Mangment.h"
#include "Contact.h"
#include <string>
using namespace std;
int main()
{
	Contact mycontact[100];
	Contact_Mangment manger;
	int UserChoice = 0;
	while (UserChoice < 4) {
		cout << "1.add contact\n2.Edit Contatct\n3.view All Contacts\n4.exite program\n";
		cin >> UserChoice;		
		string firstName;  string lastName;
		string Number;     string gmail;
		switch (UserChoice)
		{		
		case 1:
			cout << "Enter First Name" << endl;
			cin.ignore();
			getline(cin, firstName);
			cout << "Enter last Name" << endl;
			getline(cin, lastName); 
			cout << "Enter Number" << endl;			
			getline(cin, Number); 
			cout << "Enter gmail" << endl;						
			getline(cin, gmail);
			manger.addContact(firstName, lastName, Number, gmail, mycontact);
			break;
		case 2:
			cout << "Enter First Name" << endl;
			cin.ignore();
			getline(cin, firstName);
			cout << "Enter last Name" << endl;
			
			getline(cin, lastName);
			manger.editContact(firstName, lastName, mycontact);
			break;
		case 3:
			manger.viewAllContacts(mycontact);
			break;
		}
	}
}
