/*
    El usuario para poder utilizarlo tiene que ingresar un PIN.
    Tiene que ingresar el importe.
    Tenemos que validar que el importe pedido sea valido.
*/
#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int importe, calculadorDeResto, bMil, bQuin, bDoscien, bCien;

    float saldo = 5500;
    const int PIN = 1234;
    int userPin;

    cout << "Ingrese el pin: ";
    cin >> userPin;

    if(PIN == userPin)
    {
        cout << "Ingrese el monto a retirar" << endl;
        cin >> importe;

        if (importe <= saldo)
        {
            bMil = importe / 1000;
            importe %= 1000;

            bQuin = importe / 500;
            importe %= 500;

            bDoscien = importe / 200;
            importe %= 200;

            bCien = importe / 100;

            cout << "Le entregaré " << endl;
            cout << bMil << " billetes de 1000" << endl;
            cout << bQuin << " billetes de 500" << endl;
            cout << bDoscien << " billetes de 200" << endl;
            cout << bCien << " billetes de 100" << endl;
        }
        else
        {
            cout << "No cuenta con suficiente saldo" << endl;
        }
    }
    else
    {
        cout << "El pin es incorrecto" << endl;
    }

    system("pause > nul");
    return 0;
}