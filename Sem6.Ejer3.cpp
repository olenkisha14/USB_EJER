#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

//FUNCIONES
void cursor(int x, int y)
{
    Console::SetCursorPosition(x, y);
}
void cursor2(int r, int z)
{
    Console::SetCursorPosition(r, z);
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
    int x = 40, y = 20, dx = -1, dy = 1; 
    //"dx" y "dy"para controlar cuando se va a mover en "x" y "y" 
    int r = 42, z = 20, dr = 1, dz = -1;
    cursor(x, y); cout << "O";
    cursor2(r, z); cout << "D";

    while (1)
    {
        //borrar 
        cursor(x, y); cout << " ";
        cursor2(r, z); cout << " ";

        //mover1
        if (x > 78 || x < 1) dx = dx * -1; 
        if (y > 38 || y < 1) dy = dy * -1;

        y = y + dy;
        x = x + dx;

        //mover2
        if (r > 78 || r < 1) dr = dr * -1;
        if (z > 38 || z < 1) dz = dz * -1;

        r = r + dr;
        z = z + dz;

        if (x == r && y == z)
        {
            cout << "COLISION!!!!!!";
            system("pause>0");
        }

        //dibujar
        cursor(x, y); cout << "O";
        cursor2(r, z); cout << "D";

        _sleep(100);
    }

    return 0;
}