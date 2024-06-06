#include "pch.h"
#include "Mi_biblioteca.h"

int main()
{
    ventana(120,40);
    srand(time(nullptr));
    //constantes
    int const FILAS = 40; //no cambia de valor, normalmente se escriben con MAYUSCULA
    int const COLUMNAS = 80;
    //define matriz
    int mapa[FILAS][COLUMNAS];
    //genera datos para la matriz
    for (int f = 0; f < FILAS; f++)
    {
        for (int c = 0; c < COLUMNAS; c++)
        {
            mapa[f][c] = aleatorio(0,6);
        }
    }
    mathwars();
    //imprime la matriz
    for (int f = 0; f < FILAS; f++)
    {
 
        for (int c = 0; c < COLUMNAS; c++)
        {
            
            if (mapa[f][c] == 0) Console::ForegroundColor = ConsoleColor::Yellow;
            if (mapa[f][c] == 1) Console::ForegroundColor = ConsoleColor::Cyan;
            if (mapa[f][c] == 2) Console::ForegroundColor = ConsoleColor::DarkRed;
            if (mapa[f][c] == 3) Console::ForegroundColor = ConsoleColor::DarkMagenta;
            if (mapa[f][c] == 4) Console::ForegroundColor = ConsoleColor::Green;


            cout << (char)219;
        }
        cout << endl;
    }

    system("pause>0");
    return 0;
}
