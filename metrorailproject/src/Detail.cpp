#include "Detail.h"
using namespace std;
		void Detail::getDetail()
		{
			std::cout << "\n--Add New details--\n";
			std::cout << "Train no: ";
			std::cin >> tno;
			std::cout << "Train Name: ";
			std::cin >> tname;
			std::cout << "Boarding point: ";
			std::cin >> bp;
			std::cout << "Destination pt: ";
			std::cin >> dest;
			std::cout << "No of seats in first class & fare per ticket: ";
			std::cin >> c1 >> c1fare;
			std::cout << "No of seats in second class & fare per ticket: ";
			std::cin >> c2 >> c2fare;
			std::cout << "Date of travel\n";
			std::cout << "Day: ";
			std::cin >> d;
			std::cout << "Month: ";
			std::cin >> m;
			std::cout << "Year: ";
			std::cin >> y;
		}
		void Detail::displaydetail()
		{
		    std::cout << "\n|Train No." << "\t" << "|Train Name" << "\t" << "|Boarding pt." << "\t" << "|Destination pt."  <<"\t";
			std::cout << "|F-Class" << "\t"<< "|F-Class Fare" << "\t" << "|S-Class" << "\t" << "|S-Class Fare" <<"\t";
			std::cout << "|Day" << "-" << "Month" << "-" << "Year" << "\n";

			std::cout << "|" << tno << "\t\t" << "|" << tname << "\t\t" << "|" << bp << "\t\t" << "|" << dest <<"\t\t\t";
			std::cout << "|" << c1 << "\t\t" << "|"<< c1fare << "\t\t" << "|" << c2<< "\t\t" << "|" << c2fare <<"\t\t";
			std::cout << "|" << d << "-" << m << "-" << y << "\n";
		}

