
#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void titulo()
{
    cout << "NOTAS" << endl;
    cout << "========" << endl;

}


int main()
{
    titulo();

    int nota;
    int aprobados = 0, desaprobados = 0;
    int m10 = 0, m15 = 0;
    int alumnos = 1;
    while (1)
    {
        do 
        {
            cout << endl << "Alumno" << alumnos << "-> Ingrese nota: "; cin >> nota;
        } while (nota < -1 || nota > 20);

        if (nota == -1)
        {
            break;
        }

        //conteo
        if (nota >= 13)
            aprobados++;
        else
            desaprobados++;

        if (nota < 10) m10++;
        if (nota > 15) m15++;

        alumnos++;
    }

    //REPORTE
    cout << endl << endl << "REPORTE";
    cout << endl << endl << "Nro.Aprobados: " << aprobados;
    cout << endl << endl << "Nro.Desaprobados: " << desaprobados;
    cout << endl << endl << "%.Aprobados: " << aprobados / (alumnos * 1.0) * 100 << "%";
    cout << endl << endl << "%.Desaprobados: " << desaprobados / (alumnos * 1.0) * 100 << "%";
    cout << endl << endl << "Notas < 10: " << m10;
    cout << endl << endl << "Notas > 15: " << m15 << endl << endl;


    system("pause<0");
    return 0;
}
