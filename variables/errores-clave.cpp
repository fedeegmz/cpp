#include <iostream>
using namespace std;

int main()
{
    /*
        Este programa da 3 intentos para adivinar la clave.
        Si la adivina muestra "bienvenida", si no "bloqueada".

        Tiene errores: algunos los marca el compilador y otro
        es de logica (aparece cuando se arreglan los demas).
        Encontrarlos y arreglarlos.

        Pista: revisar donde se declara cada variable y
        donde se usa.
    */
    string clave = "delfi123";
    int intentos = 0;
    bool acceso = false;
    while (!acceso && intentos < 3)
    {
        string intento;
        cout << "clave: ";
        cin >> intento;
        if (intento == clave)
        {
            acceso = true;
        }
        intentos++;
    }

    if (acceso)
    {
        cout << "bienvenida" << endl;
    }
    else
    {
        cout << "bloqueada" << endl;
    }
}
