#include<bits/stdc++.h>
#include"funtionfile.h"
#include"login.h"
using namespace std;

void manage()
{
	int ch;
	fstream f;
	char c;
	login a;
	std::cout<<"\n---WELCOME TO THE USER MANAGEMENT MENU---\n";
	do
	{
		std::cout << "1. Create id database\n";
		std::cout << "2. Add details\n";
		std::cout << "3. Display details\n";
		std::cout << "4. Return to the main menu\n";
		std::cout << "Enter your choice: ";
		std::cin>>ch;
		switch(ch)
		{
			case 1:
				f.open("id.txt",ios::out|ios::binary);
				do
				{
					a.getid();
					f.write((char *) & a,sizeof(a));
					std::cout << "Do you want to add one more record\n";
					std::cout << "y-Yes\nn-No\n";
					std::cin>>c;
				}while(c == 'y');
				f.close();
				break;
			case 2:
				f.open("id.txt",ios::in|ios::out|ios::binary|ios::app);
				a.getid();
				f.write((char *) & a,sizeof(a));
				f.close();
				break;
			case 3:
				f.open("id.txt",ios::in|ios::out|ios::binary);
				f.seekg(0);
				while(f.read((char *) & a,sizeof(a)))
				{
					a.displayid();
				}
				f.close();
				break;
			}
		}while(ch<=3);
}
