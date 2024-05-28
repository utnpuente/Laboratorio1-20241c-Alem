#include <iostream>
using namespace std;

int main()
{
    int nota = 1;
    int cantNotas = 0;
    int sumaNotas = 0;

    cout << "Ingrese un nota: ";
    cin >> nota;

    while(nota >= 1 && nota <=10)
    {

        cantNotas++;
        sumaNotas += nota;

        cout << "Ingrese un nota: ";
        cin >> nota;
    }

    cout << " ------------------------ " << endl;
    cout << "La cantidad de examenes fue de " << cantNotas << endl;
    cout << "El promedio es de " << sumaNotas / cantNotas << endl;


    return 0;
}
