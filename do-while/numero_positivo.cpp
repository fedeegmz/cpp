#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un numero positivo, si se ingresa un numero negativo
        se debe volver a solicitar hasta que se ingrese uno positivo.

        Resolver usando do-while.
    */
    int numero;

    do
    {
        cout << "Ingresa un numero positivo: ";
        cin >> numero;
    } while (numero < 0);

    cout << "Ingresaste el numero: " << numero;
}