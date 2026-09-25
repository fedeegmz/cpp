#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un numero N y calcular la suma de todos los
        numeros pares entre 1 y N.

        Por ejemplo, si N es 6, la suma tiene que dar 12 (2+4+6).
    */

    int N;
    int suma = 0;
    cout << "ingrese un numero ";
    cin >> N;

    int i = 0;
    while (i <= N)
    {
        if (i % 2 == 0)
        {
            suma = suma + i;
        }
        i++;
    }

    cout << "El resultado es: " << suma << endl;
}