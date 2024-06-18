#include <iostream>
using namespace std;

/*
    Una estación de servicio hace un control en 5 autos,
    de los cuales solicita número de patente, año del auto
    y realiza una comprobación de presión de sus 4 ruedas.

    a) Promedio de presión por cada uno de los auto. Un solo resultado.
    b) cantidad de autos con rueda pinchada (se determina con presión menor a 10)

*/

int main()
{
    setlocale(LC_ALL, "spanish");

    string patente;
    int anio;
    int presion;

    int contAutoRuedasPinchadas = 0;
    bool estaPinchada;

    for(int automovil = 1; automovil <= 3; automovil++) // Recorre autos
    {
        cout << "---------" << endl;
        cout << "Auto Número " << automovil << endl;
        cout << "---------" << endl;

        cout << "Ingrese su patente: ";
        cin >> patente;

        cout << "Ingrese el año del auto:";
        cin >> anio;

        estaPinchada = false;

        for(int ruedas = 1; ruedas <= 4; ruedas++) // Recorre ruedas
        {
            cout << "Ingrese la presión de la rueda número " << ruedas << " para el auto de patente " << patente << endl;
            cin >> presion;

            if(presion < 10)
            {
                estaPinchada = true;
            }

        }

        if(estaPinchada)
        {
            contAutoRuedasPinchadas++;
        }

    }

    cout << endl << endl << "----------------------------------" << endl;
    cout << "La cantidad de autos con ruedas pinchadas fue de " << contAutoRuedasPinchadas << endl;

    return 0;
}
