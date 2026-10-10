#include <iostream>
using namespace std;

int main()
{
    /*
        Reemplazar cada true por la condicion que corresponda.

        Probar el programa con estos numeros: 10, 15, 20, 0, -5, 150
    */
    int n;
    cout << "ingrese un numero ";
    cin >> n;

    // 1. n esta entre 10 y 20 (ambos incluidos)
    if (n >= 10 && n <= 20)
    {
        cout << "1. esta entre 10 y 20, incluidos" << endl;
    }

    // 2. n esta entre 10 y 20 (sin incluir ni el 10 ni el 20)
    if (n > 10 && n < 20)
    {
        cout << "2. esta entre 10 y 20, sin incluirlos" << endl;
    }

    // 3. n es una nota valida (de 1 a 10)
    if (n >= 1 && n <= 10)
    {
        cout << "3. es una nota valida" << endl;
    }

    // 4. n esta FUERA del rango de 1 a 100
    if (n < 1 || n > 100)
    {
        cout << "4. esta fuera del rango 1 a 100" << endl;
    }

    // 5. n NO esta entre 0 y 5 (resolverlo de dos formas: con ! y sin !)
    if (n < 0 && n > 5)
    {
        cout << "5. no esta entre 0 y 5" << endl;
    }

    // 6. n tiene un solo digito (entre -9 y 9)
    if (n >= -9 && n <= 9)
    {
        cout << "6. tiene un solo digito" << endl;
    }
}
