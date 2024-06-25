#include <iostream>

using namespace std;

int sumar(int, int); // H

int main()
{
    system("cls");

    int nro1, nro2, resultado;

    cout << "Ingrese un n£mero:";
    cin >> nro1;

    cout << "Ingrese un segundo n£mero:";
    cin >> nro2;

    resultado = sumar(nro1, nro2);

    cout << "El resultado de la suma de " << nro1 << " y " << nro2 << " es de " << resultado << endl;
    
    system("pause > nul");
    return 0;
}

/**
* @brief funcion que suma dos n£meros
*
* @param a n£mero entero
* @param b n£mero entero
*/
int sumar(int a, int b) // CPP
{
    int resultado;
    resultado = a + b;
    return resultado;
}