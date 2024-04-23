/*
    EJERCICIO 1
    Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
    por un operario y el valor que se le paga por hora trabajada y listar por pantalla
    el sueldo que le corresponda.
*/

/*
    ENTRADA --> ???? --> SALIDA

    ENTRADA: catnHoras, valorHora (2)
    SALIDA: sueldo (1)
    PROCESO: calcular sueldo
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    system("cls");

    // variables
    int cantHoras;
    float valorHora;
    float sueldo;

    // Entrada
    cout << "Ingresar la cantidad de horas: ";
    cin >> cantHoras;

    cout << "Ingresar el valor de la hora trabajada: ";
    cin >> valorHora;

    // Proceso
    sueldo = cantHoras * valorHora;

    // Salida
    cout << endl;
    cout << "Total a pagar: $";
    cout << sueldo; 
    cout << endl;

    system("pause");

    return 0;
}