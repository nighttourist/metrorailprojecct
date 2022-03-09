#include<bits/stdc++.h>
#include"funtionfile.h"
using namespace std;
void can()
{
    int ch;
    do
    {
        cout << "……………..CANCELLATION MENU………\n";
        cout << "1.Cancel\n2.Return to the main menu\n";
        cout << "Enter your choice:";
        cin >> ch;
        cout << endl;
        switch (ch)
        {
        case 1:
            cancell();
            break;
        }
    } while (ch == 1);
}
