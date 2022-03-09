#include<bits/stdc++.h>
#include"funtionfile.h"
#include"login.h"
using namespace std;
void registers()
{
    int ch;
	fstream f;
	char c;
	login a;
	f.open("id.txt",ios::out|ios::binary);
	a.getid();
    f.write((char *) & a,sizeof(a));
    system("cls");
    cout<<"\nRegistration Sucessfully\n";
    f.close();
        main();

}
