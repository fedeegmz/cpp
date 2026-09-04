#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un número y mostrar su tabla del 1 al 10
    */
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    for (int i = 1; i <= 10; i++)
    {
        int resultado = N * i;
        cout << N << " x " << i << " = " << resultado << "\n";
    }
}