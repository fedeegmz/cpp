#include <iostream>
using namespace std;

int main()
{
    /*
        Pedile al usuario su edad y el año actual.
        Calculá y mostrá en qué año va a cumplir 100 años.

        Pseudocodigo:
        - pedir edad
        - pedir anio actual

        - edad_faltante = 100 - edad
        - resultado = anio + edad_faltante

        - mostrar resutlado
    */

    int edad, anio_actual;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Ingresa el año actual: ";
    cin >> anio_actual;

    int edad_faltante = 100 - edad;
    int resultado = anio_actual + edad_faltante;

    if (edad < 0)
    {
        cout << "Tu edad no es valida\n";
    }
    else if (anio_actual < 0)
    {
        cout << "El año actual no es valido\n";
    }
    else
    {
        cout << "Vas a cumplir 100 en " << resultado;
    }
}