#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int num, num2 = 5;
    cout << "Ingrese un numero: ";
    cin >> num;

    num + 10;
    num - 5;
    num % 6;
    num / 7;

    // Operadores relacionales
    /*
        > mayor que
        < menor que
        >= mayor o igual que
        <= menor o igual que
        != distinto que
        == igualdad
    */

    // valor OPERADOR valor
    true == 1;
    false == 0;

    num > 10; // TRUE FALSE
    num == 5;
    num != 6;
    num >= 7;
    false == false;

    // NO SON CORRECTOS
    // num > 10 > 4;
    // num = 10;
    // 10 > 5;

    if (num > 10) // VERDADERO
    {
        // instrucciones
        //  Lado verdadero
    }

    system("pause > nul");
    return 0;
}