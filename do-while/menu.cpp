#include <iostream>
using namespace std;

int main()
{
    /*
        Mostrar un menú con las opciones:
        1. Sumar dos numeros
        2. Restar dos numeros
        3. Salir

        Pedir al usuario que elija una opcion y ejecutar la accion
        correspondiente. El menu se tiene que volver a mostrar despues
        de cada accion, hasta que el usuario elija la opcion "Salir".

        Usar do-while (el menu se tiene que mostrar al menos una vez,
        sin importar que ingrese el usuario).
    */
    int opcion;
    do
    {
        cout << "1. Sumar dos numeros\n";
        cout << "2. Restar dos numeros\n";
        cout << "3. Salir\n";
        cin >> opcion;

    } while (opcion > 3 || opcion < 0);
    int numero1, numero2, resultado;
    cout << "ingresa el primer numero ";
    cin >> numero1;
    cout << "ingrese el segundo numero ";
    cin >> numero2;
    if (opcion == 1)
    {
        cout << "tu opcion es sumar\n";
        resultado = numero1 + numero2;
        cout << "tu resultado es:" << resultado << endl;
    }
    else if (opcion == 2)
    {
        cout << "tu opcion es resta\n";
        resultado = numero1 - numero2;
        cout << "tu resultado es:" << resultado << endl;
    }
    else
    {
        cout << "salir\n";
    }
}