#include "pch.h"
#include "iostream"
using namespace std;
using namespace System;

int main()
{
    int N;
    cout << "Ingrese un numero de 3 cifras: "; cin >> N;

    if ( N >= 100 && N <= 999)
    {
        if (N % 2 == 0)
        {
            cout << "Es par.";
        }
        else {
            cout << "Es impar";
        }
    }

    else {
        cout << "Error. Vuelva a ingresar el numero.";
    }

    system("pause>0");
    return 0;
}
