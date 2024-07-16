/*
    11 Una empresa que fabrica 200 art�culos tiene la siguiente informaci�n para cada
    uno de las ventas del mes anterior:

    - C�digo de Art�culo (1 a 200) --> vector de elementos --> 0 al 199
    - D�a (1 a 31)
    - Cantidad vendida

    Puede haber m�s de un registro para el mismo art�culo. El lote finaliza con un
    registro con n�mero de art�culo igual a cero. Se pide determinar e informar:

    a) Informar para cada c�digo de art�culo la cantidad total de ventas en el mes.
    b) Informar los d�as en los que no hubo ventas.
    c) Informar los c�digos de los art�culos cuyas ventas en cantidad son mayores
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

    cout << "Ingresar n�mero de art�culo: ";
    cin >> nroArt;

    while(nroArt != 0)
    {
        cout << "Ingrese el d�a: ";
        cin >> dia;

        cout << "Ingrese la cantidad de art�culos: ";
        cin >> cantArts;

        // Punto A
        vCantVentasPorArts[nroArt - MIN_ART]++;

        // Punto B
        if(!vHuboVentas[dia - MIN_DIA])
        {
            vHuboVentas[dia - MIN_DIA] = true;
        }


        cout << "--------------------" << endl;
        cout << "Ingresar n�mero de art�culo: ";
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
        cout << "El art�culo " << i + mt << " vendi� un total de " << v[i] << endl;

    }
}

void mostrarDiasSinVentas(bool v[], int t, int mt)
{
    for(int i = 0; i < t; i++)
    {
        if(!v[i])
        {
            cout << "El d�a " << i + mt << " no se han vendido productos" << endl;
        }
    }
}





