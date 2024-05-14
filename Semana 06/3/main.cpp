#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int pos = 0, neg = 0, cero = 0;
    int num;

    for (int i = 0; i < 100; i++)
    {
        cout << "Ingrese un n£mero: ";
        cin >> num;

        if(num > 0)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg ++;
        }
        else{
            cero++;
        }
        
    }

    cout <<"Cantidad de positivos " << pos << endl;
    cout << "Cantidad de negativos " << neg << endl;
    cout << "Cantidad de ceros " << cero << endl;
    cout << "Fin del programa" << endl;

    system("pause > nul");
    return 0;
}