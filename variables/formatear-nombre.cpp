#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir el nombre y el apellido (una palabra cada uno)
        y guardarlos en dos variables string.

        Mostrar:
            1. el nombre completo con el formato:  Apellido, Nombre
            2. si el nombre es "Delfina", mostrar un saludo especial

        Ejemplo con Delfina Luna:
            Luna, Delfina
            hola Delfi!
    */
    string nombre, apellido;
    cout << "ingrese un nombre: ";
    cin >> nombre;
    cout << "ingrese un apellido: ";
    cin >> apellido;

    cout << apellido << ", " << nombre << endl;
    if (nombre == "delfina" || nombre == "Delfina")
    {
        cout << "hola delfi" << endl;
    }
}