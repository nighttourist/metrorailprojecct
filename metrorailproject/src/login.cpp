#include "login.h"
using namespace std;
	void login:: getid()
	{
	    cout << "\nEnter your First-Name:";
		std::cin >> fname;
		cout << "\nEnter your Last-Name:";
		std::cin >> lname;
		cout << "\nEnter your User-Name:";
		std::cin >> uname;
		cout << "\nEnter your id:";
		std::cin >> id;
		std::cout << "Enter the Password: ";
		std::cin >> password;
		std::cout << "\n";
		strcpy(pass,password);
	}
	void login::displayid()
	{
	    std::cout << "\n|" <<"User-Name:" << "\t"<<"| First-Name:" << "\t" <<"| Last-Name:" << "\t" << "| User ID:" << "\t" << "| " << "Password\n";
		std::cout <<"|" << uname << "\t\t" << "|" << fname << "\t\t" <<"|"<< lname << "\t\t" <<"|"<< id << "\t\t" << "|" << pass << "\n\n";
	}
