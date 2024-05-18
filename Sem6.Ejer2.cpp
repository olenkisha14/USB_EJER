#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

//FUNCIONES
void cursor(int x, int y) 
{
    Console::SetCursorPosition(x, y);
}

void ventana()
{
    Console::SetWindowSize(80, 40);
    Console::CursorVisible = false;
}

//MAIN
int main()
{
    Console::SetWindowSize(80, 40);
    int x = 40, y = 20, dx = 1;
    cursor(x, y);

    cout << "O";

    while (1)
    {
        //borrar 
        cursor(x, y); cout << " ";

        //mover
        x = x + dx;

        //dibujar
        cursor(x, y); cout << "O";
        
        _sleep(200);
    }
    system("pause>0");
    return 0;
}
