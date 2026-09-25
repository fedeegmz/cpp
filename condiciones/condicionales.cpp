#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    if (N == 3) // siempre que N sea igual a 3
    {
        cout << "N es igual a 3" << endl;
    }

    if (N != 3) // siempre que N sea diferente a 3
    {
        cout << "N es diferente a 3" << endl;
    }

    if (N > 3) // siempre que N sea mayor a 3
    {
        cout << "N es mayor a 3" << endl;
    }

    if (N < 3) // siempre que N sea menor a 3
    {
        cout << "N es menor a 3" << endl;
    }

    if (N >= 3) // siempre que N sea mayor o igual a 3
    {
        cout << "N es mayor o igual a 3" << endl;
    }

    if (N <= 3) // siempre que N sea menor o igual a 3
    {
        cout << "N es menor o igual a 3" << endl;
    }

    if (N > 3 && N < 5) // siempre que N sea mayor a 3 y menor a 5
    {
        cout << "N es mayor a 3 y menor a 5" << endl;
    }

    if (N > 3 || N < 0) // siempre que N sea mayor a 3 o menor a 0
    {
        cout << "N es mayor a 3 o menor a 0" << endl;
    }

    if (N == 0 || N == 1) // siempre que N sea igual a 0 o igual a 1
    {
        cout << "N es igual a 0 o igual a 1" << endl;
    }

    if (N < -2 || N > 8 || (N >= 0 && N <= 3)) // siempre que N sea menor que -2 o N sea mayor que 8 o N este entre 0 y 3
    {
        cout << "N menor que -2 o N mayor que 8 o N entre 0 y 3" << endl;
    }
}