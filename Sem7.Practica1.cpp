#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    Console::SetWindowSize(60, 30);
    int filas = 1, columnas = 1;
    int cuadrados = 1;
    int delta_espacios = 1;
    int n;
    cout << "Ingrese n:"; cin >> n;


    while (cuadrados <= n)
    {
        //cuadrado hueco
        while (filas <= n)
        {
            //imprime los espacios 
            for (int espacios = 1; espacios <= n * delta_espacios; espacios++) cout << " ";

            while (columnas <= n)
            {
                if (filas == 1 || filas == n || columnas == 1 || columnas == n)
                    cout << " *";
                else
                {
                    if (filas == 2 && columnas == 2)
                        cout << " " << cuadrados;
                    else
                        cout << "  ";
                }
                columnas++;
            }

            cout << endl;
            columnas = 1;
            filas++;
        }

        filas = 1;
        cuadrados++;
        delta_espacios++;
    }
    system("pause>0");
    return 0;
}
