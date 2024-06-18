#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/*
    Tenemos que tomar los TPI de los alumnos y alumnas del Trayecto formativo. Este listado
    corta con el ingreso de número de grupo igual a cero.

    Por cada grupo se verifica si es correcto o incorrecto (bool) cada una de las 4 partes:
    estructura, A, B y C

    Se pide determinar:

    a) Cuántos programas tienen al menos una falla
    b) Indicar cuando el programa no compila (Cuando todos los puntos están mal)

*/

int main()
{
    setlocale(LC_ALL, "spanish");

    int nro;
    bool esCorrecto;
    bool esIncorrecto;
    int cantGruposConfallas = 0;
    int nota;

    cout << "Ingrese un número de grupo: ";
    cin >> nro;

    while (nro != 0) // se encarga de los grupos
    {
        esIncorrecto = false;

        for (int notas = 0; notas < 4; notas++) // Se encarga de las notas
        {
            //Semilla random
            srand(time(0));

            cout << "Ingrese si es correcto el punto "<< notas + 1 << " o no (1/0)";
            cin >> esCorrecto;

            if(esCorrecto == 0) // Averigua si el punto es incorrecto
            {
                esIncorrecto = true;
                nota = (rand() % 5) + 1;
                cout <<  "La consigna no anda. Nota " << nota << endl;
                continue;
            }


            nota = (rand() % 5) + 6;
            cout <<  "La consigna anda. Nota " << nota << endl;

        }

        if(esIncorrecto == true)
        {
            cantGruposConfallas++;
        }

        cout << "Ingrese un número de grupo: ";
        cin >> nro;
    }

    cout << "La cantidad de grupos con programas con al menos una falla: " << cantGruposConfallas << endl;

    return 0;
}


//void main_2()
//{
//
//        int nro;
//
//    cout << "Ingrese un número: ";
//    cin >> nro;
//
//    while (nro != 0)
//    {
//
//        for (int i = 0; i < 4; i++)
//        {
//            cout << "El número ingresado es " << nro << endl;
//
//            cout << "-------------------" << endl;
//            if(i == 4) cout << "Puede ingresar 0 para terminar" << endl;
//            cout << "Ingrese un número: ";
//            cin >> nro;
//        }
//    }
//}
