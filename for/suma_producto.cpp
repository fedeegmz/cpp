#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir N y calcular, con un solo for,
        la suma y el producto de los números del 1 al N
    */
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    int resultado_suma = 0;
    int resultado_producto = 1;
    for (int i = 1; i <= N; i++)
    {
        resultado_suma = resultado_suma + i;
        resultado_producto = resultado_producto * i;
    }

    cout << "La suma de 1 a " << N << " es: " << resultado_suma << "\n";
    cout << "El producto de 1 a " << N << " es: " << resultado_producto << "\n";
}