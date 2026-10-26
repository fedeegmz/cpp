#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un numero entero n y guardar cada condicion
        en una variable bool:
            - es_par        -> n es par
            - es_positivo   -> n es mayor a 0
            - es_dos_cifras  -> n esta entre 10 y 99 (incluidos)

        1. Mostrar las tres variables con cout.
           Que se muestra en la terminal? Por que no dice true/false?

        2. Usar las variables (no las condiciones) en if para mostrar:
            - "es par" o "es impar"  (resolver "impar" usando !)
            - "es positivo de dos cifras" si se cumplen las dos cosas

        Probar con: 14, 7, -20, 150
    */
    int n;
    cout << "ingrese un numero entero: ";
    cin >> n;

    bool es_par = n % 2 == 0;
    bool es_impar = !es_par;
    bool positivo_dos_cifras = n >= 10 && n <= 99;
    if (es_par)
    {
        cout << "es par\n";
    }
    if (es_impar)
    {
        cout << "es impar\n";
    }
    if (positivo_dos_cifras)
    {
        cout << "es positivo de dos cifras\n";
    }
}
