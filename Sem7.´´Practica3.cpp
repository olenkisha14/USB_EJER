#include "pch.h"
#include "iostream"
#include "conio.h"

using namespace System;
using namespace std;
void ventana()
{
    Console::SetWindowSize(80, 40);
    Console::CursorVisible = false;
}

void cursor(int x, int y)
{
    Console::SetCursorPosition(x, y);
}

int main()
{
    ventana();
    int x = 40, y = 20;
    int xp, yp, dyp = -1;
    int activa_proyectil = false;
    cursor(x, y); cout << (char)219;

    while (true)
    {
        if (_kbhit())
        {
            //borrar
            cursor(x, y); cout << " ";
            char tecla = getch();
            //mover
            if (tecla == 'W') y--;
            if (tecla == 'S') y++;
            if (tecla == 'A') x--;
            if (tecla == 'D') x++;
            if (tecla == 32)//barra espaciadora
            {
                xp = x;
                yp = y - 1;
                cursor(xp, yp); cout << "O";
                activa_proyectil = true;
            }
            //dibujar
            cursor(x, y); cout << (char)219;

        }

        if (activa_proyectil == true)
        {
            //ANIMACION DEL PROYECTIL
            //BORRAR
            cursor(xp, yp); cout << " ";
            //MOVER
            if (yp < 1) dyp = 0;

            yp = yp + dyp;
            //DIBUJAR
            cursor(xp, yp); cout << "O";
        }

        _sleep(100);
    }

    system("pause>0");
    return 0;
}
