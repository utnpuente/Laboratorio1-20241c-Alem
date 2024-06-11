// FOR Y WHILE

#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int nro;

    // AMBIENTE PARA TODO

    for (int i = 0; i < 10; i++)
    {
        cout << "--------------" << endl;
        cout << "GRUPO " << i + 1 << endl;
        cout << "--------------" << endl;
        // AMBIENTE PARA SUB LOTE
        cout << "Ingrese un n£mero: ";
        cin >> nro;

        while (nro != 0)
        {
            cout << "El n£mero ingresado es " << nro << endl;

            // AMBIENTE INGRESADO

            cout << "--------------------" << endl;
            cout << "Ingrese un n£mero: ";
            cin >> nro;
        }

        // RESULTADO DEL SUBLOTE
    }

    // RESULTADO DE TODO

    system("pause > nul");
    return 0;
}