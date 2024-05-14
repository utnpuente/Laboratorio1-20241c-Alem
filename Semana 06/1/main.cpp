#include <iostream>
using namespace std;

int main()
{
    system("cls");

    /*
        C
        #
        P
        G
    */
    char tipoLenguaje;
    cout << "Ingrese el tipo de lenguaje: ";
    cin >> tipoLenguaje;

    switch (tipoLenguaje)
    {
    case 'c':
    case 'C':
        cout << "Eligio C++" << endl;
        break;
    case '#':
        cout << "Eligio C#" << endl;
        break;
    case 'p':
    case 'P':
        cout << "Eligio Python" << endl;
        break;
    case 'g':
    case 'G':
        cout << "Eligio Go" << endl;
        break;
    default:
        cout << "La opci¢n elegida no es valida" << endl;
    }

    system("pause > nul");
    return 0;
}