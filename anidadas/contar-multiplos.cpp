#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un numero N y contar cuantos multiplos de 3 hay
        entre 1 y N.

        Ejemplo: si N es 10, los multiplos de 3 son 3, 6 y 9,
        asi que tiene que mostrar: hay 3 multiplos de 3

        Este junta todo: un for, un if adentro y un acumulador.
    */
    int suma = 0;
    int N;
    cout << "Ingresa un numero: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0)
        {
            suma = suma + 1;
        }
    }
    cout << "hay " << suma << " multiplos de 3\n";
}
