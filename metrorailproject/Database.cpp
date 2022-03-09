#include<bits/stdc++.h>
#include"funtionfile.h"
#include"Detail.h"
#include"login.h"
using namespace std;


void database()
{
	char password[10];
	char pass[10] = "rakib";
	std::cout << "\nEnter the Admin Password: ";
	std::cin >> password;
	Detail a;
	fstream f;
	int ch;
	char c;
	admin mn;
	if(strcmp(pass,password)!=0)
	{
		std::cout << "Enter the password correctly \n";
		std::cout << "You are not permitted to login this mode\n";
	}
	if(strcmp(pass,password)==0)
	{
	    cout<<"Now log into ";
	    mn.uname;

		char c;
		do
		{
			std::cout << "\n --- ADMINISTRATOR MENU --- \n";
			std::cout << "1. Create detail Database \n";
			std::cout << "2. Add details \n";
			std::cout << "3. Display details \n";
			std::cout << "4. User Management \n";
			std::cout << "5. Diplay Passenger details \n";
			std::cout << "6. Return to Main Menu \n";
			std::cout << "Enter your choice : ";
			std::cin >> ch;

			switch(ch)
			{
				case 1:
					f.open("t.txt",ios::out|ios::binary);
					do
					{
					a.getDetail();
					f.write((char *) & a,sizeof(a));
					cout << "\nDo you want to add one more record?\n";
					cout << "y-for Yes\nn-for No\n";
					cin >> c;
					}while(c=='y');
					f.close();
					break;
				case 2:
					f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
					a.getDetail();
					f.write((char *) & a,sizeof(a));
					f.close();
					break;
				case 3:
					f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
					f.seekg(0);
					while(f.read((char *) & a,sizeof(a)))
					{
					a.displaydetail();
					}
					f.close();
					break;
				case 4:
					manage();
					break;
				case 5:
					displaypassdetail();
					break;
			}
		}while(ch<=5);
	}
}
