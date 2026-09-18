#include <iostream>
using namespace std;

int main()
{
    /*
    Solicitar un numero positivo N (hasta que se ingrese uno valido)
    y mostrar todos los numeros pares entre 0 y N
    */

    int N;
    cout << "ingrese un numero ";
    cin >> N;
    int i = 0;
    while (i <= N)
    {
        cout << i << endl;
        i = i + 2;
    }
}
