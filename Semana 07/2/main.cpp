#include <iostream>
using namespace std;

// VARIABLE CONTROL

/* 
    Dada una lista de 10 n£meros, indicar cu l es el segundo ingreso
*/

int main() {
   system("cls");

    int nro, segundoIngreso, posicion = 0;

    float acumulador = 0;
    float donacion, donacionSupera1000;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Ingrese un n£mero: ";
        cin >> nro;
        cout << "Ingrese la donaci¢n";
        cin >> donacion;

        acumulador += donacion;
        acumulador = acumulador + donacion;

        if(i == 2)
        {
            segundoIngreso = nro;
            posicion = i;
        }

        if(acumulador > 1000)
        {
            donacionSupera1000 = donacion;
        }
    }

    cout << "El segundo ingreso fue el n£mero " << segundoIngreso << endl;

   system("pause > nul");
    return 0;
}