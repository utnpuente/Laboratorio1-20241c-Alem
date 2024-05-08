/*
	Alguien quiere acceder a un club nocturno para lo cual necesita tener 18 años y
	una credencial
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int edad;
    char opcion;

    cout << "Ingrese la edad: ";
    cin >> edad;

    cout << "¿Tiene credencial? (S-N)";
    cin >> opcion;

    if(edad >= 18 && (opcion == 's' || opcion == 'S'))
    {
        cout << "Puede ingresar" << endl;
    }
    else
    {
        cout << "No puede ingresar" << endl;
    }


    return 0;
}
