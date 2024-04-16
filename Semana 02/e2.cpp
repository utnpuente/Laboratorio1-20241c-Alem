/*
	Hacer un programa que permita ingresar dos número enteros por teclado.
	Luego calcular e informar la suma de ellos.
*/

#include <iostream>
using namespace std;

int main()
{
    // < --- (I)

    //Declaramos variables
    int num1, num2, resultado;

    //Ingreso de un numero
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    // ingreso de segundo numero
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    //Proceso
    resultado = num1 + num2;

    //Salida del resultado
    cout << "El resultado de la suma es: " << resultado;

    // <--- (F)
    return 0;
}
