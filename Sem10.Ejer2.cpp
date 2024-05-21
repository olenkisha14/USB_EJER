#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;


// el arreglo es dinamico cuando no se el tamaño N 
// sino que sea asigna en el tiempo de ejecucion

//con un solo puntero puedo tener los punteros que quiera
int main()
{
    srand(time(nullptr));
    int* Numeros;
    int N; //tamaño del arreglo
	while (1)
	{
		Console::Clear();
		N = 1 + rand() % 20;
		//crea el arreglo
		Numeros = new int[N];
		//genera datos para el arreglo
		for (int i = 0; i < N; i++)
		{
			Numeros[i] = 1 + rand() % 1000;
		}

		//imprime el arreglo
		cout << endl << "Datos del arreglo" << endl;
		for (int i = 0; i < N; i++)
		{
			cout << "Numeros[" << i << "]=" << Numeros[i] << endl;
		}

		delete[]Numeros;
		Numeros = nullptr;
		cout << endl << "presione una tecla para generar otro arreglo...";
		system("pause>0");
	}
    return 0;
}
