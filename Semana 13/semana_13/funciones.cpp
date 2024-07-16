#include <iostream>
#include <cstdlib>
#include "funciones.h"
#include "b.h"
using namespace std;



// Funci�n que carga 3 valores random por referencia
void tirarDados(int &d1, int &d2, int &d3)
{
    d1 = tirarDado();
    d2 = tirarDado();
    d3 = tirarDado();
}

// Funci�n para generar un n�mero random del 1 al 6
int tirarDado()
{
    int dado;
    dado = (rand() % 6) + 1;
    return dado;
}

// Funci�n que determina si los 3 n�meros ingresados son iguales
bool sonIguales(int d1, int d2, int d3)
{
    bool iguales = false;

    if(d1 == d2 && d2 == d3)
    {
        iguales = true;
    }

    return iguales;
}
