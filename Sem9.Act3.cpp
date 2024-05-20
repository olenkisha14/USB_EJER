#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

//El tipo float es adecuado para representar números con decimales 
// en estos cálculos. Sin embargo, en aplicaciones más precisas
// o donde se necesita mayor precisión,se podría considerar el 
// uso de double.


//SUMA
void Imprimir_operacion(float* pr, float* pi)
{
    //(x + zi)
    cout << "(" << *pr << "+";
    if (*pi != 1) cout << *pi; // porq 1i es invisible;
    cout << "i)";
}

void Suma_Completos(float * pr1, float * pi1, float* pr2, float* pi2)
{
    float* resultado_pr, * resultado_pi;
    resultado_pr = new float;
    resultado_pi = new float;
    Imprimir_operacion(pr1, pi1);
    cout << " + ";
    Imprimir_operacion(pr2, pi2);
    cout << " = ";
    *resultado_pr = *pr1 + *pr2;
    *resultado_pi = *pi1 + *pi2;
    Imprimir_operacion(resultado_pr, resultado_pi);
    cout << endl;
    delete resultado_pr;
    delete resultado_pi;
}

void Imprimir_Suma()
{
    float * pr1, * pi1;
    float * pr2, * pi2;
    pr1 = new float;
    pi1 = new float;
    pr2 = new float;
    pi2 = new float;
    cout << "Numero 1°" << endl;
    cout << "Parte Real: "; cin >> *pr1;
    cout << "Parte Imaginaria: "; cin >> *pi1;
    cout << "Numero 2°" << endl;
    cout << "Parte Real: "; cin >> *pr2;
    cout << "Parte Imaginaria: "; cin >> *pi2;
    Suma_Completos(pr1, pi1, pr2, pi2);
    delete pr1;
    delete pi1;
    delete pr2;
    delete pi2;
}


//RESTA
void Resta_Completos(float* pr1, float* pi1, float* pr2, float* pi2)
{
    float* resultado_pr, * resultado_pi;
    resultado_pr = new float;
    resultado_pi = new float;
    Imprimir_operacion(pr1, pi1);
    cout << " - ";
    Imprimir_operacion(pr2, pi2);
    cout << " = ";
    *resultado_pr = *pr1 - *pr2;
    *resultado_pi = *pi1 - *pi2;
    Imprimir_operacion(resultado_pr, resultado_pi);
    cout << endl;
    delete resultado_pr;
    delete resultado_pi;
}

void Imprimir_Resta()
{
    float* pr1, * pi1;
    float* pr2, * pi2;
    pr1 = new float;
    pi1 = new float;
    pr2 = new float;
    pi2 = new float;
    cout << "Numero 1°" << endl;
    cout << "Parte Real: "; cin >> *pr1;
    cout << "Parte Imaginaria: "; cin >> *pi1;
    cout << "Numero 2°" << endl;
    cout << "Parte Real: "; cin >> *pr2;
    cout << "Parte Imaginaria: "; cin >> *pi2;
    Resta_Completos(pr1, pi1, pr2, pi2);
    delete pr1;
    delete pi1;
    delete pr2;
    delete pi2;
}

int Menu()
{
    int opcion;
    cout << endl << "\t MENU PRINCIPAL";
    cout << endl << "\t================";
    cout << endl << "\t1)Sumar 2 Numeros Completos";
    cout << endl << "\t2)Restar 2 Numeros Completos";
    cout << endl << "\t3)Salir del programa";
    cout << endl << "\tIngrese una de las opciones: "; cin >> opcion;
    return opcion;
}

int main()
{
    int m;
    while (1)
    {
        m = Menu();
        Console::Clear();
        if (m == 1)
        {
            Imprimir_Suma();
        }
        if (m == 2)
        {
            Imprimir_Resta();
        }
        if (m == 3)
        {
            break;
        }
    }
    system("pause>0");
    return 0;
}
