#include<bits/stdc++.h>
#include"funtionfile.h"
#include"login.h"
using namespace std;
void user()
{
	login a;
	int d,pa;
	int ch;
	cout<<"\n-----Login User-----\n";
	char password[10];
	fstream f;
	f.open("id.txt",ios::in|ios::out|ios::binary);
	char id[100];
	std::cout << "Enter your ID : ";
	std::cin >> id;
	std::cout << "Enter your Password : ";
	std::cin >> password;
	while(f.read((char *) & a,sizeof(a)))
	{
		if((strcmp(a.id,id)==0)&&(strcmp(a.pass,password)==0))
		{
			do
			{
				std::cout<<"\n1.Reserve\n2.Cancel\n3.Enquiry\n4.Return to the main menu\n";
				cout<<"Enter your choice:";
				cin>>ch;
				switch(ch)
				{
					case 1:
						reserve();
						break;
					case 2:
						cancell();
						break;
					case 3:
						enquiry();
						break;
				}
			}while(ch<=3);
		}
		else
		{
			d=1;
		}
	}
	if(d==1)
	{
		cout<<"If  You Not Register  yet Then registration first\n Or Enter your user id and password correctly\n";
		cout<<"1.Enter Your password/user id correctly\n2.Registration\n";
		cin>>pa;
		if(pa==1)user();
		else registers();
	}
}
