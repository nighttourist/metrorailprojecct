#include<bits/stdc++.h>
#include"funtionfile.h"
#include"reser.h"
using namespace std;
void displaypassdetail()
{
	std::cout << "\n--------Passenger Details--------\n";
	fstream f;
	reser b;
	f.open("p.txt",ios::in|ios::out|ios::binary);
	f.seekg(0);
	while(f.read((char *) & b,sizeof(b)))
	{
		b.displayresdet();
	}
	f.close();
}
