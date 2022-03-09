#include<bits/stdc++.h>
#include"funtionfile.h"
using namespace std;
void reserve()
{
    int ch;
    do
    {
        std::cout << "1.Reserve\n2.Return to the main menu\n";
        std::cout << "Enter your choice:";
        std::cin >> ch;
        std::cout << endl;
        switch (ch)
        {
        case 1:
            res();
            break;
        }
    } while (ch == 1);
}
