#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;


int main()
{
    srand(time(nullptr));
    int const N = 10;
    //arreglo
    int Numeros[N];
	double Reales[N];
    //genera datos para el arreglo
	for (int i = 0; i < N; i++)
	{
		Numeros[i] = 1 + rand() % 1000;
		Reales[i] = 0.1 + rand() % 1000/100;
	}
	//imprime el arreglo
	cout << endl << "Datos del arreglo" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "Numeros[" << i << "]=" << Numeros[i];
		cout << "\tReales[" << i << "]=" << Reales[i];
		cout << endl;
	}

	system("pause>0");
	return 0;
}