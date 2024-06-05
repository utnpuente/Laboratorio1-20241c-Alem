/*
    Ingrese una lista de los artículos vendidos. Cada registro consta con la siguiente info:

    Registro:
    - Número de Artículo
    - Precio
    - Cantidad
    - Costo
    - Sucursal (1,2,3)

    El ingreso finaliza cuando se ingresa número de artículo 0

    =RAND()*(5000-1000)+1000,2

    - Cantidad de ventas
    - Indicar cuando un número de artículo coincide con la venta anterior
    - La ganancia de cada venta
    - Ganancia de la sucursal 1
    - Porcentaje de cantidad de artículos vendidos por cada sucursal
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    // ESTRUCTURA
    int nro, cantidad;
    float precio;

    // PUNTO A
    int cantVentas = 0;

    // PUNTO B
    int nroAnterior;

    // PUNTO C
    float costo;

    // PUNTO D
    int sucursal;
    float gananciaSucUno = 0;

    // PUNTO E
    int cantArticulosTotales = 0;
    int cantArticulosSucUno = 0;
    int cantArticulosSucDos = 0;
    int cantArticulosSucTres = 0;


    // PRIMER PEDIDO DE REGISTRO
    cout << "Ingrese un número: ";
    cin >> nro;

    nroAnterior = nro;

    while(nro != 0)
    {
        cout << "Ingrese el precio: $";
        cin >> precio;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;
        cout << "Ingrese el costo: $";
        cin >> costo;
        cout << "Ingrese la sucursal (1,2,3): ";
        cin >> sucursal;

        // ---------------------------------------------------- //

        // PUNTO A
        cantVentas++;

        // ---------------------------------------------------- //

        // PUSTO C
        cout << "Punto C: La ganancia del artículo número " << nro << " es de $" << (precio - costo) * cantidad <<endl;

        // ---------------------------------------------------- //

        // PUNTO D

        if(sucursal == 1)
        {
            gananciaSucUno += (precio - costo) * cantidad;
        }

        // ---------------------------------------------------- //

        // PUNTO E
        cantArticulosTotales+=cantidad;

        switch(sucursal)
        {
        case 1:
            cantArticulosSucUno+=cantidad;
            break;
        case 2:
            cantArticulosSucDos+=cantidad;
            break;
        case 3:
            cantArticulosSucTres+=cantidad;
            break;
        }


        // ---------------------------------------------------- //

        // SIGUIENTE PEDIDO DE REGISTRO
        cout << "-------------------------------" << endl;
        cout << "Ingrese un número: ";
        cin >> nro;

        // ---------------------------------------------------- //
        // PUNTO B
        if(nro == nroAnterior)
        {
            cout << "Punto B: El artículo que acaba de ingresar es el mismo que el anterior" << endl;
        }

        nroAnterior = nro;
    }

    cout << "-------------------------------" << endl;
    cout << fixed <<setprecision(2);
    cout << "Punto A: La cantidad de ventas fue de " << cantVentas << endl;
    cout << "Punto D: La ganancia para la sucursal 1 fue de: $" << gananciaSucUno << endl;
    cout << "Punto E: El porcentaje de cantidad de artículos vendidos por la sucursal uno fue de ";
    cout << ((float)cantArticulosSucUno * 100) / cantArticulosTotales << endl;
    cout << "Punto E: El porcentaje de cantidad de artículos vendidos por la sucursal dos fue de ";
    cout << ((float)cantArticulosSucDos * 100) / cantArticulosTotales << endl;
    cout << "Punto E: El porcentaje de cantidad de artículos vendidos por la sucursal tres fue de ";
    cout << ((float)cantArticulosSucTres * 100) / cantArticulosTotales << endl;



    return 0;
}










