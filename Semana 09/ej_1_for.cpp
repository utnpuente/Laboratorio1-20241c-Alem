/*
    Ingrese una lista de los art�culos vendidos. Cada registro consta con la siguiente info:

    Registro:
    - N�mero de Art�culo
    - Precio
    - Cantidad

    El ingreso finaliza cuando se ingresa n�mero de art�culo 0
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
        cout << "Ingrese un n�mero: ";
        cin >> nro;
        cout << "Ingrese el precio: $";
        cin >> precio;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;


        // PROCESO
        cout << "El n�mero del art�culo fue: " << nro << endl;
        cout << "El precio del art�culo " << nro << " es $" << precio << endl;
        cout << "La cantidad del art�culo " << nro << " es " << cantidad << endl;

    }

    cout << "Fin del programa" << endl;


    return 0;
}










