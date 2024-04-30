#include <iostream>
using namespace std;

int main() {
   system("cls");

    // Como hacer para determinar que un valor sea igual a un caracter S
    // char letra;
    // cout << "Ingrese un caracter: ";
    // cin >> letra;

    // if(letra == 'S')
    // {
    //     cout << "Es la letra " << letra << endl;
    // }
 

    // Indicar si el numero ingresado es multiplo 3
    // int num;
    // cout << "Ingrese un numero: ";
    // cin >> num;

    // if(num%3 == 0)
    // {
    //     cout << num << " es multiplo de 3" << endl;
    // }

    //Ingresar un numero y determinar si esta entre 10 y 20
    // int num;
    // cout << "Ingrese un numero: ";
    // cin >> num;

    // if(num > 10)
    // {
    //     if( num < 20)
    //     {
    //         cout << "El numero está entre 10 y 20" << endl;
    //     }
    // }

    //Ingresar 3 numero y determina si son positivos
    int num1, num2, num3;
    cout << "Ingrese un numero: ";
    cin >> num1 >> num2 >> num3;

    if(num1 > 0)
    {
        cout << num1 << "Es positivo"<<endl;
    }

    if(num2 > 0)
    {
        cout << num2 << "Es positivo"<<endl;   
    }

    if(num3 > 0)
    {
        cout << num3 << "Es positivo"<<endl;
    }

    
    cout << "Fin del programa" << endl;
   system("pause > nul");
    return 0;
}