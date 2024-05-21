#include <iostream>
using namespace std;

// BANDERA
// Ingresar por teclado 3 n£meros e informar si hubo al menos un positivo

int main() {
   system("cls");

   int nro;
   bool huboPositivos = false;

    for(int i = 0; i < 3; i++)
    {
        cout << "Ingrese un n£mero: ";
        cin >> nro;

        if(nro > 0)
        {
            huboPositivos = true;
        }
    }

    if(huboPositivos == true)
    {
     cout << "Hubo al menos un positivo" << endl;
    }
    else{
        cout << "No se han ingresado n£meros positivos" << endl;
    }
    

   system("pause > nul");
    return 0;
}