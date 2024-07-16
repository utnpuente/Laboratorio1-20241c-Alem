/*
    11 Una empresa que fabrica 200 artículos tiene la siguiente información para cada
    uno de las ventas del mes anterior:

    - Código de Artículo (1 a 200) --> vector de elementos --> 0 al 199
    - Día (1 a 31)
    - Cantidad vendida

    Puede haber más de un registro para el mismo artículo. El lote finaliza con un
    registro con número de artículo igual a cero. Se pide determinar e informar:

    a) Informar para cada código de artículo la cantidad total de ventas en el mes.
    b) Informar los días en los que no hubo ventas.
    c) Informar los códigos de los artículos cuyas ventas en cantidad son mayores
    al promedio.
*/

#include <iostream>
using namespace std;

void mostrarCantVentasPorArt(int v[], int t, int mt);
void mostrarDiasSinVentas(bool v[], int t, int mt);

int main()
{
    setlocale(LC_ALL, "spanish");

    const int TAM_ART = 200;
    const int MIN_ART = 1;

    const int TAM_DIA = 31;
    const int MIN_DIA = 1;

    int nroArt;
    int dia;
    int cantArts;

    int vCantVentasPorArts[TAM_ART] {};
    bool vHuboVentas[TAM_DIA] {};

    cout << "Ingresar número de artículo: ";
    cin >> nroArt;

    while(nroArt != 0)
    {
        cout << "Ingrese el día: ";
        cin >> dia;

        cout << "Ingrese la cantidad de artículos: ";
        cin >> cantArts;

        // Punto A
        vCantVentasPorArts[nroArt - MIN_ART]++;

        // Punto B
        if(!vHuboVentas[dia - MIN_DIA])
        {
            vHuboVentas[dia - MIN_DIA] = true;
        }


        cout << "--------------------" << endl;
        cout << "Ingresar número de artículo: ";
        cin >> nroArt;
    }

    // Mostramos el punto A
    mostrarCantVentasPorArt(vCantVentasPorArts, TAM_ART, MIN_ART);

    // Mostrar el punto B
    mostrarDiasSinVentas(vHuboVentas, TAM_DIA, MIN_DIA);


    return 0;
}


void mostrarCantVentasPorArt(int v[], int t, int mt)
{

    for(int i = 0; i < t; i++)
    {
        cout << "El artículo " << i + mt << " vendió un total de " << v[i] << endl;

    }
}

void mostrarDiasSinVentas(bool v[], int t, int mt)
{
    for(int i = 0; i < t; i++)
    {
        if(!v[i])
        {
            cout << "El día " << i + mt << " no se han vendido productos" << endl;
        }
    }
}





