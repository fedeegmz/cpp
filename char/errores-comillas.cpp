#include <iostream>
using namespace std;

int main()
{
    /*
        Este programa pregunta si queres continuar y responde
        segun la letra que se ingrese ('s' o 'n').

        Tiene 3 errores relacionados con las comillas.
        Algunos los marca el compilador y uno no: hay que
        ejecutarlo para verlo.

        Recordar:
            s     -> el nombre de una variable
            's'   -> UN caracter (comillas simples)
            "si"  -> un texto (comillas dobles)
    */
    char respuesta;
    cout << "queres continuar? (s/n) ";
    cin >> respuesta;

    if (respuesta == 's')
    {
        cout << "seguimos!" << endl;
    }
    else if (respuesta == 'n')
    {
        cout << "chau!" << endl;
    }
    else
    {
        cout << "opcion invalida" << endl;
    }
}
