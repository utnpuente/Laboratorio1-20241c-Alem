#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int multiplicarPorRandom(int, int &);
void pedirIngreso(int &);
void mostrarResultado(string);

int main()
{
    system("cls");

    srand(time(NULL));

    int nro, resultado, multiplicador;
    // cout << "La direcci¢n de memoria de la variable nro en main es " << &nro << endl;
    // cout << "Nro antesde la funcion " << nro << endl;
    pedirIngreso(nro);

    resultado = multiplicarPorRandom(nro, multiplicador);

    cout << nro << " x "<< multiplicador << " = " << resultado << endl;
    mostrarResultado("El resultado");
    

    system("pause > nul");
    return 0;
}

int multiplicarPorRandom(int a, int & multiplicador)
{
    int resultado;

    multiplicador = (rand() % 100) + 1;

    resultado = a * multiplicador;

    return resultado;
}

void pedirIngreso(int &a)
{
    // cout << "A antes de inicializar " << a << endl;
    // cout << "La direcci¢n de memoria de la variable a en pedirIngreso es " << &a << endl;
    cout << "ingrese un n£mero: ";
    cin >> a;
}

void mostrarResultado(string msg)
{
    cout << msg << endl;
}