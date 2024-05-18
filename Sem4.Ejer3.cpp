#include "pch.h"
#include "iostream";
using namespace System;
using namespace std;
int main( )
{

    char N;
    cout << "Ingrese una letra: "; cin >> N;

    if ((N >=65 && N <= 90) || (N >= 97 && N <= 122))
    {
        cout << endl << "Si...es una letra.";
        if (N >= 65 && N <= 90)
        {
            cout << endl << "La letra en minuscula:" << (char)(N + 32);
        }
        else
        {
            cout << endl << "La letra en mayuscula es:" << (char)(N - 32);
        }
    }

    else
    {
        cout << endl << "No es una letra. Ingrese un numero.";
    }

    system("pause>0");
    return 0;
}
