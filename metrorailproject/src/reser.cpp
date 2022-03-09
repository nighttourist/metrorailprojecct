#include "reser.h"
using namespace std;

	void reser::getresdet()
	{
		cout<<"Enter the details as follows\n";
		cout<<"Train no:";
		cin>>tno;
		cout<<"Train name:";
		cin>>tname;
		cout<<"Boarding point:";
		cin>>bp;
		cout<<"Destination pt:";
		cin>>dest;
		cout<<"No of seats required:";
		cin>>nosr;
		for(i=0;i<nosr;i++)
		{
			cout<<"Passenger name:";
			std::cin >> pname[i];
			cout<<"Passenger age:";
			std::cin>>age[i];
		}
		cout<<"Enter the class f-first class s-second class:";
		std::cin >> clas;
		cout<<"Date of travel:";
		std::cin>>d>>m>>y;
		cout<<"Enter the concession category\n";
		cout<<"1.Military\n2.Senior citizen\n";
		cout<<"3.Children below 5 yrs\n4.None\n";
		std::cin>>con;
		cout<<"…………END OF GETTING DETAILS…………\n";
	}
	void reser::displayresdet()
	{
		cout<<"Pnr no: "<<pnr;
		cout<<"\nTrain no: "<<tno;
		cout<<"\nTrain name: "<<tname;
		cout<<"\nBoarding point: "<<bp;
		cout<<"\nDestination pt: "<<dest;
		cout<<"\nNo of seats reserved: "<<nosr;
		for(i=0;i<nosr;i++)
		{
			cout<<"\nPassenger name: ";puts(pname[i]);
			cout<<"Passenger age: "<<age[i];
		}

		cout<<"\nYour class: ";puts(clas);
		cout<<"\nDate of reservation: "<<d<<"-"<<m<<"-"<<y;
		cout<<"\nYour concession category: "<<con;
		cout<<"\nYou must pay: "<<amc<<endl;
		cout<<"***********************************\n";
	}

