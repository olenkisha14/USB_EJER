#include "pch.h"
#include "Mi_bibliotecaos.h"

using namespace System;

int main()
{
    int opcion_menu;
    int nuevo;
    int* arreglo; //puntero al arreglo
    arreglo = nullptr;
    int posicion;
    int N = 0;//para el tam del arreglo

    while (1)
    {
        opcion_menu = menu();
        Console::Clear();
        if (opcion_menu == 1)
        {
            //listar elementos del arreglo
            listar_elementos(arreglo, N);

        }
        if (opcion_menu == 2)
        {
            // ya no apunta a donde estba inicialmente, sino al nuevo arreglo
            cout << "Ingrese el nuevo elemento: "; cin >> nuevo;
            arreglo = agregar_al_final(arreglo, nuevo, N);
        }
        if (opcion_menu == 3)
        {
            cout << "Ingrese la posicion a eleminar: "; cin >> posicion;
            arreglo = eliminar_en_posicion(arreglo, posicion, N);
        }
        if (opcion_menu == 4)
        {
            // ya no apunta a donde estba inicialmente, sino al nuevo arreglo
            cout << "Ingrese el nuevo elemento: "; cin >> nuevo;
            arreglo = agregar_al_inicio(arreglo, nuevo, N);
        }
        if (opcion_menu == 6)
        {
            //ordenar de mayor a menor
            cout << "Elementos ordenados: ";
            ordenar_elementos(arreglo, N);
            listar_elementos(arreglo, N);
            
        }
        cout << endl;
        cout << "Presione una tecla para continuar...";
        system("pause>0");
    }
    return 0;
}
