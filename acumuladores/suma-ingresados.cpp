#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir al usuario cuantos numeros va a ingresar (N).
        Despues pedir esos N numeros uno por uno y al final
        mostrar la suma de todos.

        Ejemplo:
            Cuantos numeros vas a ingresar? 3
            Ingresa el numero 1: 4
            Ingresa el numero 2: 10
            Ingresa el numero 3: 6
            La suma es 20
    */
    int N, numero;
    int suma = 0;
    cout << "cuantos numeros vas a ingresar?";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cout << "ingresa el numero " << i << ": ";
        cin >> numero;
        suma = suma + numero;
    }
    cout << "la suma es: " << suma << endl;
}
