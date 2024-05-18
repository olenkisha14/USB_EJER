#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

//POR VALOR
int suma(int a, int b)//copias de n1 y n2
{
    a = a + 10;
    b += 10;

    return a + b;
}

//POR REFERENCIA
void vidas(int & valor)//& representa la ubicación de la variable en si misma(v)
{
    valor++;//Por lo tanto, no se ve afectada la función
    //Sino el que aumenta es la variable en si misma en una unidad
}

//POR PUNTERO 
int factorial (int * n)
{
    int f = 1; 
    for(int c = 1; c <=* n; c++)// * significa, a donde apunta la direccion de memoria
    { 
        f *= c;
    }
    return f;
}

//MAIN 
int main()
{
    int n1, n2, v, numero;
    //entrada
    cout << "Ingrese n1: "; cin >> n1;
    cout << "Ingrese n2: "; cin >> n2;
    cout << "Ingrese nro. vidas: "; cin >> v;
    cout << "Ingrese numero: "; cin >> numero;
    //llama a la funcion vidas
    vidas(v);
    cout << endl << "LA SUMA ES : " << suma(n1, n2);
    cout << endl << "EL FACTORIAL ES: " << factorial(&numero);
    //salida
    cout << endl;
    cout << endl << " n1: " << n1;
    cout << endl << " n2: " << n2;
    cout << endl << " v: " << v;

    //mantiene su valor original
    system("pause>0");
    return 0;
}
