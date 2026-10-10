#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir una hora y unos minutos (dos numeros separados).

        Decir si es una hora valida:
            - la hora tiene que estar entre 0 y 23
            - los minutos tienen que estar entre 0 y 59

        Ejemplos:
            14 y 30 -> valida
            24 y 10 -> invalida
            8 y 60  -> invalida
    */
    int hora, minutos;
    cout << "ingrese una hora ";
    cin >> hora;
    cout << "ingrese minutos ";
    cin >> minutos;

    if (hora >= 0 && hora <= 23 && minutos >= 0 && minutos <= 59)
    {
        cout << "valida\n";
    }
    else
    {
        cout << "invalida\n";
    }
}
