#include "pch.h"
#include "iostream"
using namespace std;
using namespace System;

int main()
{
    char dia;
    cout << "Ingrese el dia: "; cin >> dia;
    switch (dia)
    {
    case 'L':
    case 'l': cout << "LUNES"; break;
    case 'M':
    case 'm': cout << "MARTES"; break;
    case 'R':
    case 'r': cout << "MIERCOLES"; break;
    case 'J':
    case 'j': cout << "JUEVES"; break;
    case 'V':
    case 'v': cout << "VIERNES"; break;
    case 'S':
    case 's': cout << "SABADO"; break;
    case 'D':
    case 'd': cout << "DOMINGO"; break;

    default: cout << " ERROR.";
    }
    system("pause>0");
    return 0;
}
