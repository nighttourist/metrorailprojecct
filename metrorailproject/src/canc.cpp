#include "canc.h"
using namespace std;
    void canc::getcancdet()
    {
        std::cout << "Enter the details as follows\n";
        std::cout << "Pnr no:";
        std::cin >> pnr;
        std::cout << "Date of cancellation:";
        std::cin >> d >> m >> y;
        std::cout << "………..END OF GETTING DETAILS………..\n";
    }
    void canc::displaycancdet()
    {
        std::cout << "…………………………………….\n";
        std::cout << "…………………………………….\n";
        std::cout << "Pnr no:" << pnr;
        std::cout << "\nTrain no:" << tno;
        std::cout << "\nTrain name:";
        std::cout << tname;
        std::cout << "Boarding point:";
        std::cout << bp;
        std::cout << "Destination pt:";
        std::cout << dest;
        cout << "\nYour class:";
        std::cout << clas;
        cout << "no of seats to be cancelled:" << nosc;
        for (i = 0; i < nosc; i++)
        {
            std::cout << "Passenger name:";
            std::cout << pname[i];
            std::cout << "passenger age:" << age[i];
        }
        std::cout << "\nDate of cancellation:" << d << "-" << m << "-" << y;
        std::cout << "\nYou can collect:" << amr << "rs" << endl;
        std::cout << "*****************************************\n";
        std::cout << "………END OF CANCELLATION………….\n";
        std::cout << "*****************************************\n";
    }
