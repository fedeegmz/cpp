#include <iostream>
using namespace std;

int main()
{
    /*
    Pedir un numero positivo, si se ingresa un numero negativo
    se debe volver a solicitar hasta que se ingrese uno positivo
    */
    int numero;
    cout << "Ingresa un numero positivo: ";
    cin >> numero;

    while (numero < 0)
    {
        cout << "Ingresa un numero positivo: ";
        cin >> numero;
    }

    cout << "Ingresaste el numero: " << numero;
}