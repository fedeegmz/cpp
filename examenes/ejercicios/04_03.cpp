#include <iostream>
using namespace std;

int main()
{
    /*
        Diseñar el algoritmo para generar la siguiente salida.
        Donde N ingresa por teclado.

        Salida:
            N=5
            54321
            54321
            54321
            54321
            54321
    */
    int N;
    cout << "ingrese un numero ";
    cin >> N;
    cout << "N = " << N << "\n";
    for (int i = 0; i < N; i++)
    {

        for (int i = N; i > 0; i--)
        {
            cout << i;
        }
        cout << "\n";
    }
}
