/*
    Hacer un programa para ingresar por teclado la cantidad de asientos totales en
    un avión y la cantidad de pasajes ocupados y luego calcular e informar el
    porcentaje de ocupación y el porcentaje de no ocupación del mismo.
    Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el
    porcentaje de ocupación que se informará será de un 40% y el porcentaje de no
    ocupación será de un 60%.
*/

/*
    ENTRADA: cantidadAsiento, pasajesOcupados
    SALIDA: porcentajeOcupacion porcentajeNoOcupacion
    PROCESO:
*/

#include <iostream>
using namespace std;

int main()
{

    // Variables
    const int PORCENTAJE = 100;
    int cantAsientos, pasajesVendidos;
    float porcOcupacion, porcNoOcupacion;

    // Entrada
    cout << "Cantidad de asisentos totales: ";
    cin >> cantAsientos;
    cout << "cantidad de pasajes vendidos: ";
    cin >> pasajesVendidos;

    // proceso
    porcOcupacion = (float)pasajesVendidos * PORCENTAJE / cantAsientos;
    porcNoOcupacion = PORCENTAJE - porcOcupacion;

    // Salida
    cout << endl << "-------------------------------" << endl;
    cout << "Porcenataje de ocupacion; " << porcOcupacion << "%" << endl;
    cout << "porcentaje de no ocupacion: " <<porcNoOcupacion << "%"; 


    return 0;
}