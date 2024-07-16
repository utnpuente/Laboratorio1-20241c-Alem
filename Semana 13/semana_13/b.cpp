#include <iostream>
#include "b.h"
using namespace std;

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
