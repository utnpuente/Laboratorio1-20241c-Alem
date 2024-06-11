/*
    1. Hacer un programa para ingresar una lista de 10 n£meros y luego informar
    cu ntos de los n£meros ingresados son primos. Se informa 1 resultado al final.

    1. B Dada una lista de 3 sub-lotes, cada uno compuesto 5 n£meros, calcular la cantidad de primos de cada sub-lote
    Informar tambi‚n el total de primos entre todos los subgrupos
 */

#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int nro, contMultiplos, contPrimos, contPrimosTotal;

    contPrimosTotal = 0;

    for (int i = 0; i < 3; i++)
    {
        contPrimos = 0;

        cout << "---------" << endl;
        cout << "GRUPO Nø" << i + 1 << endl;
        cout << "---------" << endl;

        for (int x = 0; x < 5; x++)
        {
            contMultiplos = 0;

            cout << "Ingresar un n£mero: ";
            cin >> nro;

            // Averigua si el n£mero ingresado es primo
            for (int j = 1; j <= nro; j++)
            {
                if (nro % j == 0)
                {
                    contMultiplos++;
                }
            }

            if (contMultiplos == 2)
            {
                contPrimos++;
            }
        }

        cout << "La cantidad de primos encontrados fue de " << contPrimos << endl;

        contPrimosTotal += contPrimos;
    }

    cout << "El total de primos que hubieron entre todos los sub-grupos fue de " << contPrimosTotal << endl;

    system("pause > nul");
    return 0;
}