// WHILE Y WHILE
#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int nro;

    cout << "Ingresar un n£mero: ";
    cin >> nro;

    while (nro != 0)
    {
        while (nro != 0)
        {
            // PROCESO
            cout << "El n£mero ingresado es " << nro << endl;

            cout << "--------------------" << endl;
            cout << "Ingresar un n£mero: ";
            cin >> nro;
        }

        
        cout << "Ingresar un n£mero: ";
        cin >> nro;

        cout << "--------------------" << endl;
        cout << "NUEVO SUB LOTE" << endl;
        cout << "--------------------" << endl;
    }

    cout << "Fin del programa" << endl;

    system("pause > nul");
    return 0;
}