#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    Console::SetWindowSize(80, 40); //Tamaño de la ventana

    int x = 20;
    int y = 10;
    
    Console::SetCursorPosition(x, y); // coordenada

    cout << "O O O O O";

    system("pause>0");
    return 0;
}
