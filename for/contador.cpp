#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un número N y mostrar los números del 0 al N
    */
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 0; i <= numero; i++)
    {
        cout << "El numero es: " << i << "\n";
    }
}