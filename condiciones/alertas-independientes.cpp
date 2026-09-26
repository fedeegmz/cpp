#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un numero y mostrar, con ifs separados (no else if),
        todos los mensajes que apliquen a la vez:
            - "es par" (si el numero es par)
            - "es negativo" (si el numero es negativo)
            - "es mayor a 100" (si el numero es mayor a 100)
    */
    int numero;
    cout << "ingrese un numero ";
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "tu numero es par\n";
    }

    if (numero < 0)
    {
        cout << "tu numero es negativo\n";
    }

    if (numero > 100)
    {
        cout << "tu numero es mayor a 100\n";
    }
}
