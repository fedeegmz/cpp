#include <iostream>
using namespace std;

int main()
{
    /*
        Este programa quiere recorrer los numeros del 1 al 10 y:
            - sumar todos los numeros pares
            - contar cuantos numeros pares hay

        Deberia mostrar: suma = 30 y cantidad = 5.

        Tiene 3 errores. Uno lo marca el compilador; los otros
        dos hay que encontrarlos haciendo la traza.
        Ojo: aunque te de el resultado correcto, puede seguir
        estando mal.
    */
    int suma = 0;
    int cantidad = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            suma = suma + i;
            cantidad = cantidad + 1;
        }
    }
    cout << "suma = " << suma << endl;
    cout << "cantidad = " << cantidad << endl;
}
