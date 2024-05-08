#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    /*
        OR ---> ||
        valor OPERADOR valor
    */

    int edad;
    float descuento = 1, totalAPagar;
    char opcion;
    bool esEstudiante;
    const float PRECIO = 300;

    cout << "Ingrese la edad: ";
    cin >> edad;

    cout << "¿Es estudiante? (S-N)";
    cin >> opcion;

    esEstudiante = opcion == 'S' || opcion == 's';

    if(edad < 10 || edad > 65 || esEstudiante == true)
    {
        descuento = 0.6f;
    }

    totalAPagar = PRECIO * descuento;

    cout << endl;
    cout << endl << "---------------------------" << endl;
    cout << " VALOR         : $" << PRECIO << endl;
    cout << " DESCUENTO     : " << 100 - (descuento * 100) << "%";
    cout << endl << "---------------------------" << endl;
    cout << " TOTAL A PAGAR : $" << totalAPagar << endl;


    return 0;
}
