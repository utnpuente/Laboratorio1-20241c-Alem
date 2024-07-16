#include <iostream>
using namespace std;

void cargarVector( int v[], int t);
void mostrarVector(int v[], int t);

int main()
{
    setlocale(LC_ALL, "spanish");

    const int TAM = 10;
    int vec[TAM];

    // cout << vec << endl;
    // cout << &vec[0] << endl;

    cargarVector(vec, TAM);

    cout <<" ---- " << endl;

     mostrarVector(vec, TAM);

    // foreach
    // for(int v : vec)
    // {
    //    cout << v << endl;
    // }

    return 0;
}

void cargarVector(int v[], int t)
{
    for(int i = 0; i < t; i++)
    {
        cout << "ingrese un número: ";
        cin >> v[i];
    }
}

void mostrarVector(int v[], int t)
{
    for(int i = 0; i < t; i++)
    {
        cout << v[i] << " ";
    }
}
