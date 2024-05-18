#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    int tipo_pizza;
    int precio_pizza;
    int monto_a_pagar;

    //entrada
    cout << "Ingrese el tipo de pizza [1]GRANDE [2}FAMILIAR [3]FIESTA: "; cin >> tipo_pizza;
    cout << "Ingrese el precio de la pizza: "; cin >> precio_pizza;

    //calculo
    monto_a_pagar = (tipo_pizza == 1) * (precio_pizza - 0.10 * precio_pizza) +
        (tipo_pizza == 2) * (precio_pizza - 0.15 * precio_pizza) +
        (tipo_pizza == 3) * (precio_pizza - 0.20 * precio_pizza);
    //salida
    cout << "Monto a pagar: " << monto_a_pagar;

    system("pause>0");
    return 0;
}
