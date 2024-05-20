#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void Generar_numeros(int* a, int* b, int* c, int* d)
{
    do
    {
        *a = rand() % 40 + 1;
        *b = rand() % 40 + 1;
        *c = rand() % 40 + 1;
        *d = rand() % 40 + 1;
    } while (*a == *b || *a == *c || *a == *d || *b == *c || *b == *d || *d == *c);
}

void Imprimir_numeros(int* a, int* b, int* c, int* d)
{
    cout << "a: " << *a << endl;
    cout << "b: " << *b << endl;
    cout << "c: " << *c << endl;
    cout << "d: " << *d << endl;
}

void Hallar_mayor(int* a, int* b, int* c, int* d)
{
    if (*a > *b && *a > *c && *a > *d)
    {
        cout << "Mayor valor: " << *a << endl;
    }
    if (*b > *a && *b > *c && *b > *d)
    {
        cout << "Mayor valor: " << *b << endl;
    }
    if (*c > *a && *c > *b && *c > *d)
    {
        cout << "Mayor valor: " << *c << endl;
    }
    if (*d > *a && *d > *b && *d > *c)
    {
        cout << "Mayor valor: " << *d << endl;
    }
}

void Hallar_menor(int* a, int* b, int* c, int* d)
{
    if (*a < *b && *a < *c && *a < *d)
    {
        cout << "Menor valor: " << *a << endl;
    }
    if (*b < *a && *b < *c && *b < *d)
    {
        cout << "Menor valor: " << *b << endl;
    }
    if (*c < *a && *c < *b && *c < *d)
    {
        cout << "Menor valor: " << *c << endl;
    }
    if (*d < *a && *d < *b && *d < *c)
    {
        cout << "Menor valor: " << *d << endl;
    }
}

void intercambiar(int* n1, int* n2)
{
    int* aux;
    aux = new int;
    *aux = *n1;
    *n1 = *n2;
    *n2 = *aux;
    delete aux;
}

void ordenar(int* a, int* b, int* c, int* d)
{
    //comparacion a
    if (*b < *a)intercambiar(a, b);
    if (*c < *a)intercambiar(a, c);
    if (*d < *a)intercambiar(a, d);
    //comparacion b
    if (*c < *b)intercambiar(b, c);
    if (*d < *b)intercambiar(b, d);
    //comparacion c
    if (*d < *c)intercambiar(c, d);
}

int Hallar_anterior_mayor(int* a, int* b, int* c, int* d)
{
    ordenar(a, b, c, d);
    return *c;
}

void Borde_2cifras(int* num, int* alt)
{
    // si tiene 2 cifras
    if (*num > 9) {
        Console::SetCursorPosition(78 - *num, *alt);
    }
    // si tiene una cifra
    else {
        Console::SetCursorPosition(79 - *num, *alt);
    }
    cout << *num;
    for (int i = 0; i < *num; i++)
    {
        cout << '*';
    }
    *alt = *alt + 1;
}
void Dibujo(int* a, int* b, int* c, int* d)
{
    int* pte;
    pte = new int;
    *pte = 2;
    Borde_2cifras(a, pte);
    Borde_2cifras(b, pte);
    Borde_2cifras(c, pte);
    Borde_2cifras(d, pte);
}


int main()
{
    srand(time(nullptr));
    int* a;
    int* b;
    int* c;
    int* d;
    a = new int;
    b = new int;
    c = new int;
    d = new int;
    Generar_numeros(a, b, c, d);
    Imprimir_numeros(a, b, c, d);
    Hallar_mayor(a, b, c, d);
    Hallar_menor(a, b, c, d);
    cout << "Valor anterior al mayor: " << Hallar_anterior_mayor(a, b, c, d) << endl;
    ordenar(a, b, c, d);
    cout << "Los numeros ordenados son : " << endl;
    Imprimir_numeros(a, b, c, d);
    Dibujo(a, b, c, d);
    delete a;
    delete b;
    delete c;
    delete d;
    system("pause>0");
    return 0;
}
