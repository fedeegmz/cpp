#include <iostream>
using namespace std;

int main()
{
    /*
        Diseñar el algoritmo para generar la siguiente salida.
        Donde N ingresa por teclado.

        Salida:
            N=5
            11111
            22222
            33333
            44444
            55555
    */
    int N;
    cout << "ingrese un numero ";
    cin >> N;
    cout << "N = " << N << "\n";
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}
