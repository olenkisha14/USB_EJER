#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    //funcion lamdba para mostrar un titulo
    []()
    {
            cout << endl << "\t EL JUEGO DE LA VIDA";
            cout << endl << "\t *******************";
            cout << endl << endl;
    }(); // <- indica que la función se ha llamdo

    //funcion lambda para sumar dos numeros enteros
    int n1, n2;
    cout << endl << "Ingres n1: "; cin >> n1;
    cout << endl << "Ingres n2: "; cin >> n2;


    //PRIMERA FOMA
    //asignar una variable
    auto suma1 = [](int a, int b)
    {//"auto" cuando no sabes que tipo de dato es, y el propio lenguaje lo va imprimir
            return a + b; //la suma es lo que va a contener la variale suma
        }(n1, n2);// <- indica que la función se ha llamdo

     cout << endl << "LA SUMA ES: " << suma1;

     //SEGUNDA FORMA
     auto suma2 = [](int a, int b)
     {
             return a + b; //la suma es lo que va a contener la variale suma
     }; // <- NO SE LLAMA LA FUNCIÓN EN ESTA PARTE

     cout << endl << "LA SUMA ES: " << suma2(n1, n2); // se llama en esa parte


     //funcion lambda para calcula el factoial de un numero
     int numero;
     cout << endl << "Ingres el numero para el factorial: "; cin >> numero;

     auto factorial1 = [](int n)
         {
             int f = 1;
             for (int i = 1; i <= n; i++)
             {
                 f *= i;
             }
             return f;
         }(numero);
     cout << endl << "EL FACTORIAL ES: " << factorial1; //<- primera forma



     //funcion lambda para calcula el factoial de un numero
     int numero2;
     cout << endl << "Ingres el numero para el factorial: "; cin >> numero2;

     auto factorial2 = [](int n)
         {
             int f = 1;
             for (int i = 1; i <= n; i++)
             {
                 f *= i;
             }
             return f;
         };
     cout << endl << "EL FACTORIAL ES: " << factorial2(numero2); //<- segunda forma


     //funcion lambda para una variable vidas que se imcrementa 
     int vidas = 3;

     auto suma_vidas = [](int& v)//el amperson es necesario para que no copio el variable con valo 0, sino que lo aumente 
         {
             v--;
             //vidas++
             return v;
         };
     while (1)
     {
         cout << endl << "variable vidas = " << vidas;
         suma_vidas(vidas);
         system("pause>0");
     }
     
    system("pause>0");
    return 0;
}
