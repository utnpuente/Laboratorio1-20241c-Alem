/*
    Hacer un programa para calcular los autos que debemos alquilar para llevar a la familia 
    al campo. 
	
	Autos de 5 - 1000
	Autos de 2 - 700
	Motos de 1 - 500
	
	Indicando por teclado la cantidad de Autos y motos a alquiler, calcule el costo.
*/

/*
    ENTRADA: familiares
    SALIDA: autos de 5, autos de 2 y motos (costo)
    PROCESO: Calcular cuántos familiares podemos meter en cada vehiculo
*/

#include <iostream>
using namespace std;

int main()
{
    const int AUTO5 = 5;
    const int AUTO2 = 2;
    const int MOTO = 1;

    const float PRECIO_AUTO5 = 1000;
    const float PRECIO_AUTO2 = 700;
    const float PRECIO_MOTO = 500;

    int familiares;
    int auto5 = 0, auto2 = 0, moto = 0;

    // Entrada
    cout << "Ingrese la cantidad de familiares: ";
    cin >> familiares;

    // Proceso
    auto5 = familiares / AUTO5; // Autos ocupados
    int familiaresSinVehiculo = familiares % AUTO5; // Familiares sin lugares

    // cout << "#1 " << auto5 << endl;
    // cout << "#2 " << familiaresSinVehiculo << endl;

    auto2 = familiaresSinVehiculo / AUTO2; // Autos ocupados
    familiaresSinVehiculo = familiaresSinVehiculo % AUTO2; // Familiares que sobran

    // cout << "#3 " << auto2 << endl;
    // cout << "#4 " << familiaresSinVehiculo << endl;

    moto = familiaresSinVehiculo / MOTO; // Motos ocupadas
    familiaresSinVehiculo = familiaresSinVehiculo % MOTO; // Familiares que sobran

    // cout << "#5 " << moto << endl;
    // cout << "#6 " << familiaresSinVehiculo << endl;
    
    //Salida
    cout << "Autos de 5 " << auto5 << endl;
    cout << "Autos de 2 " << auto2 << endl;
    cout << "Motos " << moto << endl;


    return 0;
}