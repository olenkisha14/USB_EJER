#include "pch.h"
#include "iostream"
using namespace std;
using namespace System;

int main()
{
    int N, contar = 1;
    int coefN = 1;
    int coefD = 2;
    int expoa = 1;
    int expob = 0;
    double a, b, numerador, denominador;
    double termino, S = 0;

    do
    {
        cout << "Ingrese 2 <= a <= 20: "; cin >> N;
    } while (!(N >= 2 && N <= 20));

    do
    {
        cout << "Ingrese 1.5 <= a <= 2.3: "; cin >> a;
    } while (!(a >= 1.5 && a <= 2.3));

    do
    {
        cout << "Ingrese 0.5 <= b <= 1.2: "; cin >> b;
    } while (!(b >= 0.5 && b <= 1.2));

    while (contar <= N)
    {
        numerador = coefN * pow(a, expoa);
        denominador = coefD * pow(b, expob);
        termino = numerador / denominador;

        S = S + termino;

        coefN *= 2; expoa++;
        coefD += 2; expob++;

        contar++;
    }

    cout << "SUMA: " << S;

    system("pause>0");
    return 0;
}