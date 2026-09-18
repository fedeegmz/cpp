#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un número N y mostrar los números del 1 al N
    */
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int i = 0;
    while (i <= numero)
    {
        cout << "El numero es: " << i << "\n";
        i++;
    }
}