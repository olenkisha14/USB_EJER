#include "pch.h"
#include "iostream"
using namespace std;
using namespace System;

int main()
{
    char marca;
    do
    {
        cout << "Ingrese marca de auto: ";
        cout << "[T]Toyota, [A]Audi, [K]Kia, [S]Susuki" << endl;
        cin >> marca;
    } while (marca != 'T' && marca != 'A' && marca != 'K' && marca != 'S');

    // while (!(marca == 'T' || marca == 'A' || marca == 'K' || marca == 'K'));


    system("pause>0");
    return 0;
}
