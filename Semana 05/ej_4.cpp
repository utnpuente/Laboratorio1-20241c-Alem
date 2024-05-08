/*
    Hacer un programa para leer tres números diferentes y determinar e informar el
    número del medio.
    Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");

	int num1, num2, num3;
	cout << "Ingrese tres números: ";
	cin >> num1 >> num2 >> num3;

	// num1 es el del medio --- > num1 > num2 && num 1 < num3 / num1 < num2 && num1 > num3
	// 5, 3, 8
	// 5, 8, 3

	if(num1 > num2 && num1 < num3 || num1 < num2 && num1 > num3)
    {
        cout << num1 << " es el medio" << endl;
    }
    else if(num2)
    {


    }
    else
    {
        cout << num3 << " es el medio" << endl;
    }



    return 0;
}
