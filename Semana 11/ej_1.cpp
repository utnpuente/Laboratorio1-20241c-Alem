#include <iostream>
using namespace std;

/*
    Una estaci�n de servicio hace un control en 5 autos,
    de los cuales solicita n�mero de patente, a�o del auto
    y realiza una comprobaci�n de presi�n de sus 4 ruedas.

    a) Promedio de presi�n por cada uno de los auto. Un solo resultado.
    b) cantidad de autos con rueda pinchada (se determina con presi�n menor a 10)

*/

/*
    EJERCICIO EXTRA

    Un profesor necesita pasar las notas de los 5 ex�menes que le tomo a sus 10 alumnos
    durante el cuatrimestre.

    Solicita legajo por cada alumno y la nota de sus 5 ex�menes.

    a) promedio de notas
    b) cantidad de alumnos que rinden finales (al menos un examen aprobado, pero no todos)

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
        cout << "Auto N�mero " << automovil << endl;
        cout << "---------" << endl;

        cout << "Ingrese su patente: ";
        cin >> patente;

        cout << "Ingrese el a�o del auto:";
        cin >> anio;

        estaPinchada = false;

        for(int ruedas = 1; ruedas <= 4; ruedas++) // Recorre ruedas
        {
            cout << "Ingrese la presi�n de la rueda n�mero " << ruedas << " para el auto de patente " << patente << endl;
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
