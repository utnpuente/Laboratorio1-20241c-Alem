#include <iostream>
using namespace std;

/*
    Determinar si el numero ingresado es positivo.
    Indicar cuando el número es negativo.
    Inidcar cuando sea cero.
*/

int main() {
   system("cls");

    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num > 0)
    {
        cout << num << " es positivo" << endl;
    }
    else
    {
        if(num < 0)
        {
            cout << num << " es negativo" << endl;
        }
        else
        {
            cout << num << " es cero" << endl;
            
        }
    }


    cout << "Fin del programa";

   system("pause > nul");
    return 0;
}