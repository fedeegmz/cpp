#include <iostream>
using namespace std;

int main()
{
    /*
        Pedí la edad de una persona y calculá
        el precio de la entrada al cine:
            - menores de 12 años pagan $500
            - de 12 a 64 años pagan $1200
            - de 65 años en adelante pagan $700.
        Mostrá el precio final.
    */

    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad < 0)
    {
        cout << "La edad no es valida\n";
    }
    else if (edad < 12)
    {
        cout << "Pagan $500\n";
    }
    else if (edad >= 12 && edad <= 64)
    {
        cout << "Pagan $1200\n";
    }
    else
    {
        cout << "Pagan $700\n";
    }
}