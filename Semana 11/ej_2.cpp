#include <iostream>
using namespace std;

/*
    Una librer�a registra el ingreso mensual de los 5 distribuidores con los que trabaja.

    De cada distribuidor registra su nombre y de cada libro que le env�an registra:
    -N�mero ISBN
    -T�tulo
    -Costo
    -Genero (F, B, E, C, R) Ficcion, biografia, Educaci�n, Ciencia, Religioso

    El ingreso de libro corta con un ingreso de ISBN igual a 0

*/

/*
    Se dispone de una lista de 10 grupos de n�meros enteros separados entre ellos
    por ceros. Se pide determinar e informar:

    a) El n�mero de grupo con mayor porcentaje de n�meros impares positivos
    respecto al total de n�meros que forman el grupo. Se informa 1 resultado al
    final.

    b) Para cada grupo el �ltimo n�mero primo y en qu� orden apareci� en ese
    grupo, si en un grupo no hubiera n�meros primos informar con un cartel
    aclaratorio. Se informan 2 resultados por cada grupo.

    c) Informar cuantos grupos est�n formados por todos n�meros ordenados de
    mayor a menor. Se informa 1 resultado al final.
*/

int main()
{
    setlocale(LC_ALL, "spanish");

    int nro;
    int contTotalPorGrupo, contPosImp;
    float porcPosImpPorgrupo;
    float maxPorcPosImpPorgrupo = 0;
    int maxNroGrupo;

    for (int i = 0; i < 10; i++)
    {
        contTotalPorGrupo = 0;
        contPosImp = 0;

        cout << "------------------------" << endl;
        cout << "VUELTA " << i + 1 << endl;
        cout << "------------------------" << endl;

        cout << "Ingrese un n�mero: ";
        cin >> nro;

        while (nro != 0)
        {
            // Averiguar la cantidad de ingresos en el grupo
            contTotalPorGrupo++;

            if(nro > 0 && nro % 2 != 0)
            {
                contPosImp++;
            }

            cout << endl;
            cout << "Ingrese un n�mero: ";
            cin >> nro;
        }



        if(contTotalPorGrupo > 0) //Validad que no se divida por cero
        {
            porcPosImpPorgrupo = (float)contPosImp * 100 / contTotalPorGrupo;
            cout << "El porcentaje de n�meros positivos e impares para el grupo " << i + 1 << " es: " << porcPosImpPorgrupo << "%" << endl;

            if(porcPosImpPorgrupo > maxPorcPosImpPorgrupo)
            {
                maxPorcPosImpPorgrupo = porcPosImpPorgrupo;
                maxNroGrupo = i + 1;
            }

        }

    }

    cout << endl << endl << "---------------------------------" << endl;
    cout << "El n�mero de grupo con mayor porcentaje de n�meros positivos e impares es " << maxNroGrupo << endl;

    return 0;
}
