// FOR Y FOR

#include <iostream>
using namespace std;

int main() {
   system("cls");

   int nro;

   // AMBIENTE PARA TODO

    for (int i = 0; i < 5; i++)
    {
        cout << "--------------" << endl;
        cout << "GRUPO " << i + 1 << endl;
        cout << "--------------" << endl;

        // AMBIENTE PARA SUB LOTE

        for (int j = 0; j < 10; j++)
        {
            cout << "Ingrese un n£mero: ";
            cin >> nro;

            // PORCESO O AMBIENTE DE INGRESO

            cout << "El n£mero ingresado fue " << nro << endl;
        }

        // AMBIENTE PARA SUB LOTE PARA RESULTADOS
    }

   // AMBIENTE PARA TODO Y MOSTRAR RESULTADO

    

   system("pause > nul");
    return 0;
}