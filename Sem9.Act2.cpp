#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

long long factorial(int*k)//desarrollar el factorial
{
    long long fact = 1;
    for (int i = 2; i <=*k; i++)//empieza desde 2 porq
    //la multiplicacion con 1 es practicamente invisible
    {
        fact *= i;
    }
    return fact;
}

//PARTE 1 DEL MENU
void Calcular_factorial()
{
    int* k;
    k = new int;
    cout << "Ingrese el numero para hallar su factorial: "; cin >> *k;
    cout << endl;
    cout << "Su factorial es: " << factorial(k);
    cout << endl;
    delete k;
}


double ea(int* k, int* a)//desarrollar la sumatoria de la parte2
{
    double sumatoria = 0.0;
    for ( int i = 0; i <= *k; i++)
    {
        sumatoria += pow(*a, i) / factorial(&i);
    }
    return sumatoria;
}

//PARTE 2 DEL MENU
void Valores_ea()
{
    int* k, * a;
    a = new int;
    k = new int;
    cout << "Valor inicial de numerador: "; cin >> *a; 
    cout << endl;
    cout << "Valor inicial de denominador: "; cin >> *k;
    while (*k > 20)
    {
        cout << "Valor inicial de denominador: "; cin >> *k;
    }
    cout << endl;
    double resultado = ea(k, a);
    cout << "Resultado de la sumatorial: " << resultado;
    delete k;
    delete a;
}


void leer_n(int* n)//aux de parte 3
{
    cout << "Ingrese un numero positivo menor a 11: "; cin >> *n;
    while (*n < 0 || *n > 11)
    {
        cout << "Ingrese un numero positivo menor a 11: "; cin >> *n;
    }
}

//PARTE 3 DEL MENU
void Imprimir_rombo()
{
    int* n;
    n = new int;
    leer_n(n);
    //PIRAMIDE NORMAL
    for (int i = 1; i <= *n; i++) // parte vertical
    {
        for (int e = 1; e <= abs(*n- i); e++)// espacios y valor absoluto
        {
            cout << "  ";
        }
        for (int j = 1; j <= i * 2 - 1; j++) //parte horizontal
        //j <= i * 2 - 1, si i = 3
        // * 2 por va aumentando dos valores más a parte del valor inicial
        // -1 para que cumpla los parametros del rombo
        //se convierte en j <= 3 * 2 - 1, es decir, j <= 5.
        {
            cout << j;
            if (j < 9) cout << " "; // para que no se deforme el rombo
        }
        cout << endl;
    }
    //PIRAMIDE INVERSA
    for (int i = 1; i <= *n - 1; i++)//decreciente, parte vertical
    {
        for (int e = 1; e <= i; e++) //espacios
        {
            cout << "  ";
        }
        for (int j = 1; j <= (*n - i) * 2 - 1; j++)// horizontal
        //La condición j <= (*n - i) * 2 - 1
        //si *n = 6
        //si i = 2
        //se convierte en j <= (6 - 2) * 2 - 1, es decir, j <= 7.
        {
            cout << j;
            if (j < 9) cout << " "; // para que no se deforme el rombo
        }
        cout << endl;
    }

    delete n;
}

int  menu()
{
    int opcion;
    cout << endl << "\t MENU PRINCIPAL";
    cout << endl << "\t1)Determinar el factorial de un numero";
    cout << endl << "\t2)Calcular el valor de ea";
    cout << endl << "\t3)Imprime rombo";
    cout << endl << "\t4)Fin";
    cout << endl << "\tIngrese una de las opciones: "; cin >> opcion;
    return opcion;
}



int main()
{
    int m;

    while (1)
    {
        m = menu();
        Console::Clear();
        if (m == 1)
        {
            Calcular_factorial();
        }
        if (m == 2)
        {
            Valores_ea();
        }
        if (m == 3)
        {
            Imprimir_rombo();
        }
        if (m == 4)
        {
            cout << "FIN!! :)";
            break;
        }
    }

    system("pause>0");
    return 0;
}
