#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

struct Datos_personales
{
    string dni;
    string nombre;
    string apellido;
    string apelativo;
};


int main()
{
    srand(time(nullptr));
    int N = 1 + rand() % 10;//tam del arreglo
    Datos_personales* lista_personas;
    //crea el arreglo
    lista_personas = new Datos_personales[N];
    //llenas datos del arreglo
    for (int i = 0; i < N; i++)
    {
        cout << endl << "Personas Nro." << i + 1;
        cout << endl << "-------------" << endl;

        cout << endl << "Ingrese DNI: "; cin >> lista_personas[i].dni;
        cout << endl << "Ingrese Nombre: "; cin >> lista_personas[i].nombre;
        cout << endl << "Ingrese Apellido: "; cin >> lista_personas[i].apellido;
        cout << endl << "Ingrese Apelativo: "; cin >> lista_personas[i].apelativo;
        cout << endl;
        cout << endl;
    }

    //imprime la lista de personas
    cout << endl << "\t LISTA DE PERSONAS:";
    cout << endl << "\t********************";
    cout << endl << "DNI \t NOMBRE \t APELLIDO \tAPELATIVO";

    for (int i = 0; i < N; i++)
    {
        cout << endl << lista_personas[i].dni;
        cout << "\t" << lista_personas[i].nombre;
        cout << "\t    " << lista_personas[i].apellido;
        cout << "\t    " << lista_personas[i].apelativo;
        cout << endl;

    }

    system("pause>0");
    return 0;
}
