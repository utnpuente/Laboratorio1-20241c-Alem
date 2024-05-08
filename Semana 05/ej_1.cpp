#include <iostream>
using namespace std;

int main()
{

    /*
        AND

        TRUE && TRUE --> TRUE
    */
    int num = 12;

    bool A = num > 10;
    bool B = num < 20;

    if(A == true && B == true)
    {
            cout << "El número está entre el 10 y el 20" << endl;
    }


    return 0;
}
