// WHILE Y FOR

#include <iostream>
using namespace std;

int main()
{
    system("cls");

    // int nro;

    // cout << "Ingrese un n£mero:";
    // cin >> nro;

    // while (nro != 0)
    // {
    //     // AMBIENTE DEL SUBLOTE

    //     for (int i = 0; i < 5; i++)
    //     {

    //         // PROCESO
    //         cout << "El n£mero ingresado es " << nro << endl;

    //         if(i==4)
    //         {
    //             cout << "Ingrese 0 para cortar" << endl;
    //         }

    //         cout << "Ingrese un n£mero:";
    //         cin >> nro;

    //         if(nro == 0)
    //         {
    //             cout << "Vuelta n£mero " << i << endl;
    //             break;
    //         }
    //     }

    //     // AMBIENTE SUBLOTE

    // }

    int nro = 1;

    while (nro != 0)
    {
        // AMBIENTE DEL SUBLOTE

        for (int i = 0; i < 5; i++)
        {
            cout << "Ingrese un n£mero:";
            cin >> nro;
            // PROCESO
            cout << "El n£mero ingresado es " << nro << endl;
        }

        // AMBIENTE SUBLOTE

        cout << "Ingrese 0 para terminar o 1 para continuar:";
        cin >> nro;
    }

    system("pause > nul");
    return 0;
}