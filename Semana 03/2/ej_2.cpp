/*
    Hacer un programa que solicite por teclado que se ingresen dos números y
    luego guardarlos en dos variables distintas. A continuación se deben
    intercambiar mutuamente los valores en ambas variables y mostrarlos por
    pantalla.
    Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
    usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/

/*
    ENTRADA: a, b (int) (2)
    SALIDA: a,b (2)
    PROCESO: Intercambio de valores
*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    //Entrada
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un segundo numero: ";
    cin >> n2;

    // Proceso
    int aux = n1;
    n1 = n2;
    n2 = aux;

    // Salida
    cout << endl << "------------------------" << endl;
    cout << "El valor de N1 es: ";
    cout << n1 << endl;
    cout << "El valor de N2 es: ";
    cout << n2;
    

    return 0;
}

/*
    Ingrese un numero: 3
    Ingrese un segundo numero: 4

    ------------------------
    El valor de N1 es: 4
    El valor de N2 es: 3
*/