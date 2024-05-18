#include "pch.h"
#include "iostream"
using namespace std;
using namespace System;

int main()
{
    int N, contar = 1;
    int numerador = 2;
    int denominador = 3;
    double termino, S = 0;

    do 
    {
        cout << "Ingrese 2 <= N <= 20: "; cin >> N;
    } while (!(N >= 2 && N <= 20));

    while (contar <= N)
    {
        termino = numerador / (denominador * 1.0); // 2/3 = 0.6 -->  6/5 = 1.2
        S = S + termino;
        // S = 0 + 0.6 = 0.6
        // S = 0.6 + 1.2 = 1.8

        numerador = numerador * 3;

        denominador = denominador + 2;

        contar++;
    }

    cout << "SUMA: " << S;

    system("pause>0");
    return 0;
}
