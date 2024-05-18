#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{

    int contar = 1;

    while (1)// ciclo verdadero = infinito 
    {
        cout << contar << ".OLENKA" << endl; 
        contar++; 
        if (contar > 10)
        {
            break;
            cout << "contar sobrepaso 10";
        }

    }

    system("pause>0");
    return 0;
}
