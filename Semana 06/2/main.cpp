#include <iostream>
using namespace std;

int main()
{
    system("cls");

    /*
     Inicializaci¢n --> x, i = 0 -- > variable control
     condici¢n de corte -- > valor OPERADOR valor -- > True o False
     Modificaci¢n --> i++ -- > i = i + 1--> i += 1
    */

   // Instrucciones que se ejecutan una vez
    int num, pos;
    pos = 0;

    //Instruccion que se ejecutan x veces
    for (int i = 0; i < 5; i++)
    {

        cout << "Ingrese un n£mero: ";
        cin >> num;

        if(num > 0)
        {
            cout << "Es positivo" << endl;
           pos++; 
        }

    }

    // Instrucciones que se ejecutan una vez
    cout << "Cantidad de positivos fue de: " << pos << endl;



    system("pause > nul");
    return 0;
}