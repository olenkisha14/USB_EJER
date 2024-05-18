#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int main()
{
    int contar = 2;
    int numeracion = 1;
    while (contar <= 20)
    {
        cout << numeracion << ".OLENKA" << endl; 
        contar = contar + 2;
        numeracion = numeracion + 1;

        //contar++;
        //contar += 1;
        // contar = 1 + 1 = 2
        // contar = 2 + 1 = 3
        // contar = 3 + 1 = 4
        // a "contar" se le asignia el resultado de la suma, hasta que funcione la restricción.

        // Si pongo primero el contar ++; entonces la primera expresion se hace " 2. Olenka" en ves de "1. Olenka"
    }

    system("pause>0");
    return 0;
}
