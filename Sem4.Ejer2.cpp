#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{

    int N;
    cout << "Ingrese un numero de 3 cifras: "; cin >> N;

    if (N < 100 || N > 999)
    {
        cout << "Error.";
    }

    else {
        if (N % 2 == 0)
        {
            cout << "Es par.";
        }
        else {
            cout << "Es impar";
        }
    }

    system("pause>0");
    return 0;
}
