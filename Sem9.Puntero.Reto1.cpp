#include "pch.h"
#include "iostream"
#include "math.h"
using namespace System;
using namespace std;


int menu()
{
    int opcion;
    cout << endl << "\t1. SUMA";
    cout << endl << "\t2. RESTAS ";
    cout << endl << "\t3. PRODUCTO";
    cout << endl << "\t4. DIVISION ";
    cout << endl << "\t5. MODULO ";
    cout << endl << "\t6. POTENCIA ";
    cout << endl << "\t7. FACTORIAL ";
    cout << endl << "\t8. RAIZ CUADRADA ";
    cout << endl << "\tIngrese una opcion: ";
    cin >> opcion;
    return opcion;
}
//SUMA (por valor)
int suma(int a, int b)
{
    return a + b;
}

void leer_suma()
{
    int n1, n2;
    cout << "SUMA" << endl;
    cout << "Ingrese un valor entero(n1): "; cin >> n1; 
    cout << "Ingrese un valor entero(n2): "; cin >> n2;
    cout << endl;
    cout << "La suma es: " <<suma(n1, n2);
    cout << endl;
}

//RESTA (por punteros)
int resta(int* a, int* b)
{
    return *a - *b;
}
void leer_resta() {
    int n1, n2;
    cout << "RESTA" << endl;
    cout << "Ingrese un valor entero(n1): "; cin >> n1;
    cout << "Ingrese un valor entero(n2): "; cin >> n2;
    cout << endl;
    cout << "La resta es: " << resta(&n1, &n2) << endl;
}

//PRODUCTO (por punteros)
int producto(int* a, int* b)
{
    return *a * *b;
}
void leer_producto() 
{
    int n1, n2;
    cout << "PRODUCTO" << endl;
    cout << "Ingrese un valor entero(n1): "; cin >> n1;
    cout << "Ingrese un valor entero(n2): "; cin >> n2;
    cout << endl;
    cout << "El producto es: " << producto(&n1, &n2) << endl;
}

//DIVISION (por referencia)
double division(int&a, int&b)
{
    return a * 1.0 / b;
}

double leer_divison()
{
    int n1, n2;
    cout << "DIVISION" << endl;
    cout << "Ingrese un valor entero(n1): "; cin >> n1;
    cout << "Ingrese un valor entero(n2): "; cin >> n2;
    while (n2 == 0)
    {
        cout << "Ingrese un valor entero(n2): "; cin >> n2;
    }
    cout << endl;

    cout << "La division es: " << division(n1, n2);
    cout << endl;
    return n1;
}

//MODULO (por referencia)
int modulo(int& a, int& b) // NO PUEDE SER 0
{
    return a % b;
}

void leer_modulo()
{
    int n1, n2;
    cout << "MODULO" << endl;
    cout << "Ingrese un valor entero(n1): "; cin >> n1;
    cout << "Ingrese un valor entero(n2): "; cin >> n2;
    while (n2 == 0)
    {
        cout << "Ingrese un valor entero(n2): "; cin >> n2;
    }
    cout << endl;

    cout << "La modulo es: " << modulo(n1, n2);
    cout << endl;
}

//POTENCIA (por referencia)
double potencia(int& a, int& b)
{
    return pow(a, b);
}

void leer_potencia()
{
    int n1, n2;
    cout << "POTENCIA" << endl;
    cout << "Ingrese un valor entero(n1): "; cin >> n1;
    cout << "Ingrese un valor entero(n2): "; cin >> n2;
    cout << endl;
    cout << "La potencia es: " << potencia(n1, n2);
    cout << endl;
}

//FACTORIAL (por punteros)
int factorial(int* n)
{
    int f = 1;
    for (int c = 1; c <= *n; c++)
        f = f * c;
    return f;
}
void leer_factorial()
{
    int n;
    cout << "FACTORIAL" << endl;
    cout << "Ingrese un valor entero(n): "; cin >> n;
    cout << endl;
    cout << "El factorial es: " << factorial(&n) << endl;
}

//RAIZ (por referencia)
double raiz_cuadrada(int& a)
{
    return sqrt(a);
}

void leer_raiz()// MO PUDE SER -
{
    int n;
    cout << "RAIZ CUADRADA" << endl;
    cout << "Ingrese un valor entero positivo o cero (n): "; cin >> n;
    cout << endl;
    while (n < 0)
    {
        cout << "Ingrese un valor entero positivo o cero (n): "; cin >> n;
    }
    cout << "La raiz cuadrada de " << n << " es: " << raiz_cuadrada(n) << endl;
}

int main()
{
    int m;
    while (1)
    {
        m = menu();
        Console::Clear();//limpia la ventana
        if (m == 1)
        {
            leer_suma();
        }
        if (m == 2)
        {
            leer_resta();
        }
        if (m == 3)
        {
            leer_producto();
        }
        if (m == 4)
        {
            leer_divison();
        }
        if (m == 5)
        {
            leer_modulo();
        }
        if (m == 6)
        {
            leer_potencia();
        }
        if (m == 7)
        {
            leer_factorial();
        }
        if (m == 8)
        {
            leer_raiz();
            break;
        }
    }
     system("pause>0");
    return 0;
}
