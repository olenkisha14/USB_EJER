#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    char modelo, color;
    double precio, incremento;
    int edad;

    cout << "Ingrese el modelo [A] o [B]: "; cin >> modelo;
    cout << "Ingrese el color [B]Blanco, [M]Metalizado o [O]Otros: "; cin >> color;
    cout << "Ingrese la edad: "; cin >> edad;


    precio = (modelo == 'A' && color == 'B') * 240.50 +
        (modelo == 'A' && color == 'M') * 330.00 +
        (modelo == 'A' && color == 'O') * 270.50 +
        (modelo == 'B' && color == 'B') * 300.50 +
        (modelo == 'B' && color == 'M') * 360.50 +
        (modelo == 'B' && color == 'O') * 330.00;

    incremento = (edad < 31) * (0.25 * precio)+
        (edad >=31 && edad <=65) * 0 + 
        (edad > 65) * (0.10 * precio);

    cout << endl << "Precio del seguro: " << (precio+incremento);

    system("pause>0");
    return 0;
}
