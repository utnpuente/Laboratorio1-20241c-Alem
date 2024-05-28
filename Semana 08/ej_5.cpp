/*
    Una convención recibe invitados. Cuenta con X salas de 60 espacio de capacidad.
    Dependiendo la cantidad de invitados, tenemos que calcular, cuántas salas utilizaría.
*/

#include <iostream>
using namespace std;

int main()
{

    const int CAPACIDAD = 60;
    int visitantes;
    int cantidadSalas = 0;

    cout << "Ingrese la cantidad de visitantes: ";
    cin >> visitantes; // INICIALIZADOR

    while(visitantes > 0) // CONDICION
    {
        visitantes -= CAPACIDAD; // MODIFICADOR
        cantidadSalas++;
    }

    cout << "La cantiadad de salas a utilizar es de " << cantidadSalas << endl;

    return 0;
}
