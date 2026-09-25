
#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir la edad de una persona y si viene acompañada de un
        adulto (guardarlo como un char 's'/'n').

        Avisar si puede entrar al boliche. Puede entrar si:
            - es mayor o igual a 18, O
            - es menor de 18 pero viene acompañada de un adulto.

        Usar paréntesis para dejar clara la combinación de AND y OR.
    */
    int edad;
    char con_adulto;
    cout << "ingrese una edad ";
    cin >> edad;
    cout << "ingresa si estas acompañado de un adulto ";
    cin >> con_adulto;

    if (edad >= 18 || (edad < 18 && con_adulto == 's'))
    {
        cout << "es mayor de edad" << endl;
    }
    else
    {
        cout << "es menor de edad" << endl;
    }
}