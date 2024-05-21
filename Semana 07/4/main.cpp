#include <iostream>
using namespace std;

/*
	Hacer un porgrama para ingresar una lista de 10 n£meros 
	y mostrar el m ximo de los negativos y el m¡nimo de los positvos.
*/

/*
5
8
12
2
-10
15
-20
8
-3
2
*/

// Listas de 10 n£meros - OK
// Maximo negativo
// El minimo positivo

int main() {
   system("cls");
    int nro, maxNegativo = 0, minPositivo;
    int contPositivos = 0;
 
   for(int i = 1; i <=10; i++) //Pedimo 10 n£meros
   {
        cout << "Ingresar un n£mero: ";
        cin >> nro;

        if(nro < 0) // Averiguamos si es negativo
        {
            if(maxNegativo == 0 || nro > maxNegativo) // Averiguamos si es el m ximo
            {
                maxNegativo = nro;

            }
        }

        if(nro > 0) //Averigua si es positivo
        {
            contPositivos++;

            if(contPositivos == 1 || nro < minPositivo) // averigua si es el minimo
            {
                minPositivo = nro;
            }
        }

   }

    if(maxNegativo != 0)
    {
         cout << "El m ximo de los negativos es: " << maxNegativo << endl;
    }
    else{
        cout << "No se ingresaron n£meros negativos" << endl;
    }

    if(minPositivo > 0)
    {
         cout << "El m¡nimo de los positivos es: " << minPositivo << endl;
    }
    else{
        cout << "No se ingresaron n£meros positivos" << endl;
    }

 system("pause > nul");
   return 0;
}