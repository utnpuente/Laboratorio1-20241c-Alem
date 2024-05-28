#include <iostream>
using namespace std;

int main()
{

    float saldo = 1600; // Inicializador
    float compra;
    int cantCompras = 0;


    while(saldo >= 0) // Condición
    {
        cout << "Ingrese el precio de la compra: $";
        cin >> compra;

        saldo -= compra; // Incrementador
        cantCompras++;
    }

        cout << "La cantidad de compras que pudo realizar fue de: " << cantCompras << endl;

    return 0;
}
