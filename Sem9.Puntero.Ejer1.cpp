#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    int x, y;
    int* px, * py;

    //entrada
    cout << "Ingrese un valor para x: "; cin >> x;
    cout << "Ingrese un valor para y: "; cin >> y;

    //salida
    cout << endl << "Direcc. Mem. x: " << &x;
    cout << endl << "Direcc. Mem. y: " << &y;
    cout << endl;
    cout << endl << "x = " << x;
    cout << endl << "y = " << y;
    cout << endl;
    cout << endl << "Direcc. Mem px: " << &px;
    cout << endl << "Direcc. Mem py: " << &py;

    //valor para los punteros 
    px = &x;
    py = &y;
    cout << endl;
    cout << endl << "px = " << px;
    cout << endl << "py = " << py;

    //usamos punteros
    *px = 666;
    *py = 777;
    cout << endl;
    cout << endl << "x = " << x;
    cout << endl << "y = " << y;

    system("pause>0");
    return 0;
}
