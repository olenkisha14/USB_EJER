#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    srand(time(nullptr));
    int const N = 18;
    int numeros[N];

    //genera datos para el arreglo
    for (int i = 0; i < N; i++)
    {
        numeros[i] = 1 +rand() % 1000;
    }   
    //imprime datos del arreglo
    cout << endl << "DATOS DEL ARREGLO" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "\t" << numeros[i] << endl;
    }
    //ordenar por burbuja
    int aux;
    for (int i = 0; i < N; i++)
    {
        for (int k = i + 1; k < N; k++)
        {
            if (numeros[i] > numeros[k])
            {
                aux = numeros[i];
                numeros[i] = numeros[k];
                numeros[k] = aux;
            }
        }
    }
    //imprime datos del arreglo
    cout << endl << "DATOS ORDENADOS DEL ARREGLO" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "\t" << numeros[i] << endl;
    }
    system("pause>0");
    return 0;
}
