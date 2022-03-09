#ifndef LOGIN_H
#define LOGIN_H
#include<bits/stdc++.h>
using namespace std;

class login
{
	public:
	char id[100];
	char pass[100];
	char password[10];
	char fname[100];
	char lname[100];
	char uname[100];
	void getid();

	void displayid();

};
class admin:public login{
    void displayid();

};
#endif // LOGIN_H
