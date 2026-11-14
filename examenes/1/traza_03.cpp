#include <iostream>
using namespace std;
int main()
{
    char letra1, letra2;
    string palabra1, palabra2;

    letra1 = 'd';
    letra2 = 'M';
    switch (letra1)
    {
    case 'D':
    case 'm':
        palabra1 = "Perro";
        break;
    case 'a':
    case 'd':
        palabra1 = "Gato";
        break;
    case 'M':
    case 'x':
        palabra1 = "Loro";
        break;
    default:
        palabra1 = "Pez";
        break;
    }
    switch (letra2)
    {
    case 'm':
    case 'B':
        palabra2 = "azul";
        break;
    case 'R':
    case 'v':
        palabra2 = "rojo";
        break;
    default:
        palabra2 = "verde";
        break;
    }

    cout << palabra1 << " " << palabra2;
}