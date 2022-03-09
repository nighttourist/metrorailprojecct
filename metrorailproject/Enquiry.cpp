#include<bits/stdc++.h>
#include"funtionfile.h"
#include"Detail.h"
using namespace std;

void enquiry()
{
    fstream f;
    f.open("t.txt",ios::in|ios::out|ios::binary);
    Detail a;
    while(f.read((char *) & a,sizeof(a)))
    {
            a.displaydetail();
    }
}
