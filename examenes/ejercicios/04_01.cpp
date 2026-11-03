#include <iostream>
using namespace std;

int main()
{
    /*
        Leer un número N y una secuencia de números (N números).
        Mostrar la cantidad de números impares ingresados.

        Ejemplo:
            N= 8
            Secuencia= 12, 22, 17, 33, 15, 46, 37, 31
            Números impares ingresados: 5
    */
    int suma = 0;
    int N, numero;
    cout << "ingrese un numero ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> numero;
        if (numero % 2 != 0)
        {
            suma = suma + 1;
        }
    }
    cout << "N = " << N << endl;
    cout << "numeros impares ingresados: " << suma << endl;
}
