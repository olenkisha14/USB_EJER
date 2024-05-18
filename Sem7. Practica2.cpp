#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    Console::SetWindowSize(60, 30);
    int filas = 1, columnas = 1;
    int e;
    int n;
    int delta_columna = 0;
    cout << "Ingrese n:"; cin >> n;
    e = n - 1;

    while (filas <= n)
    {
        while (columnas <= n + delta_columna)
        {
            if (columnas <= e)
                cout << " ";
            else
                cout << "*";

            columnas++;

            _sleep(100);
        }

        cout << endl;
        columnas = 1;
        filas++;
        delta_columna++;
        e--;
    }


    system("pause>0");
    return 0;
}
