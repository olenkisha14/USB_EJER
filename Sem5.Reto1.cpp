#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    int contar = 1;
    int numeración = 1;
    while (contar <= 12)
    {
        cout << "10 x " << numeración << " = " << contar * 10 << endl; 
        contar = contar + 1;
        numeración = numeración + 1;

    }


    system("pause>0");
    return 0;
}
