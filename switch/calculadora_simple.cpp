#include <iostream>
using namespace std;

int main()
{
    /*
        Pedí dos números y un operador (+, -, *, /).
        Usando switch, calculá y mostrá el resultado
        de la operación correspondiente.

        Si se ingresa un operador inválido,
        mostrá un mensaje de error.
    */

    int numero1, numero2;
    char operador;

    cout << "Ingresa el primer numero: ";
    cin >> numero1;
    cout << "Ingresa el segundo numero: ";
    cin >> numero2;
    cout << "Ingresa el operador: ";
    cin >> operador;

    int resultado;
    switch (operador)
    {
    case '+':
        resultado = numero1 + numero2;
        cout << resultado;
        break;
    case '-':
        resultado = numero1 - numero2;
        cout << resultado;
        break;
    case '*':
        resultado = numero1 * numero2;
        cout << resultado;
        break;
    case '/':
        if (numero2 == 0)
        {
            cout << "Error: no puedes dividir por cero";
        }
        else
        {
            resultado = numero1 / numero2;
            cout << resultado;
        }
        break;
    default:
        cout << "Operador invalido";
    }
}