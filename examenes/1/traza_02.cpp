#include <iostream>
using namespace std;

int main()
{
    int contUno = 8, contDos = 1, aux;

    while (contUno > 3)
    {
        aux = contUno + contDos;
        switch (aux)
        {
        case 9:
        case 14:
        case 20:
            cout << "A\n";
            break;

        case 10:
        case 12:
        case 16:
            cout << "B\n";
            break;

        default:
            cout << "C\n";
        }
        contUno--;
        contDos += 2;
    }
}