#include "pch.h"
#include "iostream"
#include "conio.h"
using namespace System;
using namespace std;

void cursor(int x, int y)
{
    Console::SetCursorPosition(x, y);
}

int imagen[2][2] =
{
    {0,1},
    {1,0},
};

int dibujar_imagen()
{
    for(int i = 0)




}

struct Personaje
{
    int x, y;
    string cabeza = " O";
    string cuerpo = "-I-";
    string piernas = "/\\";

    void dibujar(int x, int y)
    {
        cursor(x, y); cout << cabeza;
        cursor(x, y + 1); cout << cuerpo;
        cursor(x, y + 2); cout << piernas;
    }
    void borrar(int x, int y)
    {
        cursor(x, y); cout << "    ";
        cursor(x, y + 1); cout << "    ";
        cursor(x, y + 2); cout << "    ";
    }
};



int main()
{
    Personaje* pepito;
    Personaje* lupita;

    pepito = new Personaje;
    lupita = new Personaje;

    int x = 10, y = 10;
    int x1 = 40, y1 = 15;

    pepito->dibujar(x, y);
    lupita->dibujar(x1, y1);

    while (1)
    {
        if (_kbhit())
        {
            //borrar
            pepito->borrar(x, y);
            lupita->borrar(x1, y1);

            //mover
            char tecla = getch();
            //pepito
            if (tecla == 77) x++;
            if (tecla == 75) x--;
            if (tecla == 72) y--;
            if (tecla == 80) y++;
            //lupita
            if (tecla == 'd') x1++;
            if (tecla == 'a') x1--;
            if (tecla == 'w') y1--;
            if (tecla == 's') y1++;

            //dibujar
            pepito->dibujar(x, y);
            lupita->dibujar(x1, y1);
        }

    }
    //Liberar punteros
    delete pepito;
    delete lupita;

    system("pause>0");
    return 0;
}
