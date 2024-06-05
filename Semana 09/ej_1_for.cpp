/*
    Ingrese una lista de los artículos vendidos. Cada registro consta con la siguiente info:

    Registro:
    - Número de Artículo
    - Precio
    - Cantidad

    El ingreso finaliza cuando se ingresa número de artículo 0
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    // ESTRUCTURA
    int nro, cantidad;
    float precio;


    for(int i = 0; i < 3; i++)
    {
        // PRIMER PEDIDO DE REGISTRO
        cout << "Ingrese un número: ";
        cin >> nro;
        cout << "Ingrese el precio: $";
        cin >> precio;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;


        // PROCESO
        cout << "El número del artículo fue: " << nro << endl;
        cout << "El precio del artículo " << nro << " es $" << precio << endl;
        cout << "La cantidad del artículo " << nro << " es " << cantidad << endl;

    }

    cout << "Fin del programa" << endl;


    return 0;
}










