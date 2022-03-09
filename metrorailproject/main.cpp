#include <bits/stdc++.h>
#include<windows.h>
#include"funtionfile.h"
using namespace std;
char f[10] = "f";
char s[10] = "s";
int addr, ad, flag, f1, d, m, i, amt;
float tamt;
int main()
{
	int ch;
	 HANDLE rakib =GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(rakib,10);
	 cout<<"***********************************************************************\n\n";
        cout<<"                       @WElcome to METRORAIL@                               \n";
        cout<<"*********************   -------MENU---------  *************************\n\n";
cout<<"***********************************************************************\n\n";
    SetConsoleTextAttribute(rakib,15);
	do
	{
	    SetConsoleTextAttribute(rakib,11);
	    cout<<" ____________  ";
		std::cout << "\n| MAIN MENU  |"<<endl;
		cout<<" ~~~~~~~~~~~\n";

		std::cout << "1.Admin Section\n2.User Section\n3.Register Section\ \n4.Exit \n";
		std::cout << "Enter your choice : ";
		SetConsoleTextAttribute(rakib,15);
		std::cin >> ch;
		switch(ch)
		{
			case 1:
				database();
				break;
			case 2:
				user();
				break;
            case 3:
                registers();
                break;
            //case 4:
                //forgot();
			default:
			    cout<<"@Thanks for use this Metro-Rail Project\n@create by Md. Rakibul Haque.\n";
				exit(0);
		}
	}while(ch<4);

	return 0;
}
