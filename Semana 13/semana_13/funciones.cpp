#include <iostream>
#include <cstdlib>
#include "funciones.h"
using namespace std;



// Función que carga 3 valores random por referencia
void tirarDados(int &d1, int &d2, int &d3)
{
    d1 = tirarDado();
    d2 = tirarDado();
    d3 = tirarDado();
}

// Función para generar un número random del 1 al 6
int tirarDado()
{
    int dado;
    dado = (rand() % 6) + 1;
    return dado;
}

// Función que muestra los dados
void mostrarDados(int d1, int d2, int d3)
{
    mostrarDado(d1);
    mostrarDado(d2);
    mostrarDado(d3);
}

// Función que miestra un dado con dibujo
void mostrarDado(int d)
{

    switch (d)
    {
    case 1:
        cout << " ------- \n";
        cout << "|       |\n";
        cout << "|   *   |\n";
        cout << "|       |\n";
        cout << " ------- \n";
        break;
    case 2:
        cout << " ------- \n";
        cout << "| *     |\n";
        cout << "|       |\n";
        cout << "|     * |\n";
        cout << " ------- \n";
        break;
    case 3:
        cout << " ------- \n";
        cout << "| *     |\n";
        cout << "|   *   |\n";
        cout << "|     * |\n";
        cout << " ------- \n";
        break;
    case 4:
        cout << " ------- \n";
    case 5:
        cout << " ------- \n";
        cout << "| *   * |\n";
        cout << "|   *   |\n";
        cout << "| *   * |\n";
        cout << " ------- \n";
        break;
    case 6:
        cout << " ------- \n";
        cout << "| *   * |\n";
        cout << "| *   * |\n";
        cout << "| *   * |\n";
        cout << " ------- \n";
        break;
    }

}

// Función que determina si los 3 números ingresados son iguales
bool sonIguales(int d1, int d2, int d3)
{
    bool iguales = false;

    if(d1 == d2 && d2 == d3)
    {
        iguales = true;
    }

    return iguales;
}
