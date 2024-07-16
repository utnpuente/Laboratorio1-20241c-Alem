/*
    Hacer un programa que realice 100 tiradas de 3 dados de 6 caras.

    El programa debe calcular y mostrar la cantidad de veces que una
    tirada produjo que todos los dados sean iguales.
*/

#include <iostream>
#include <time.h>

#include "b.h"
#include "funciones.h"

using namespace std;

int main()
{
    const int TIRADAS = 100;

    //Semilla
    srand(time(NULL));

    int d1, d2, d3;
    int contIguales = 0;
    bool iguales;

    for(int i = 0; i < TIRADAS; i++)
    {
        tirarDados(d1, d2, d3);
        iguales = sonIguales(d1, d2, d3);

        if(iguales == true)
        {
            mostrarDados(d1, d2, d3);
            contIguales++;
        }

    }

    cout << "Las tiradas de igual cara de dados fueron " << contIguales << endl;

    return 0;
}
