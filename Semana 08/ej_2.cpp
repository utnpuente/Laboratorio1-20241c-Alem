/*
    Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
    ingresa un cero, luego informar cu�ntos son positivos y cu�ntos son negativos.
    Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.

    Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7
*/


#include <iostream>
using namespace std;

int main()
{

    int nro, contPos = 0, contNeg = 0;

    cout << "Ingrese un n�mero: " << endl;
    cin >> nro; // INICIALIZADOR

    while(nro != 0) // CONDICION
    {

        if(nro > 0)
        {
            contPos++;
        }
        else
        {
            contNeg++;
        }


        cout << "Ingrese un n�mero: " << endl;
        cin >> nro; // MODIFICADOR
    }

    cout << "La cantidad de positivos fue de: " << contPos << endl;
    cout << "La cantidad de negativos fue de: " << contNeg << endl;


    return 0;
}
