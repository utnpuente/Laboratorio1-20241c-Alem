/*
	Ingresar por teclado el nombre de un aritculo, el precio unitario y la cantidad de unidades vendidas.
	Calcular e informar el importe de la venta y el articulo vendido.

*/
#include <iostream>
using namespace std;


int main()
{
    //<---- (I)

    string nombre;
    float precio;
    int cantidad;
    float importe;

    cout << "Nombre del articulo: ";
    cin >> nombre;

    cout << "Precio del aritulo: $";
    cin >> precio;

    cout << "Indique cantidad: ";
    cin >> cantidad;

    importe = precio * cantidad;

    cout << endl;
    cout << "El producto: " << nombre << " - A pagar es: $" << importe;


    return 0;

    //<---- (F)
}
