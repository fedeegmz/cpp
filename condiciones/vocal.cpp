#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un carácter y avisar si es una vocal (a, e, i, o, u).

        Usar una única condición con OR (||).
    */
    char caracter;
    cout << "ingrese un caracter ";
    cin >> caracter;
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
    {
        cout << "tu caracter es una vocal" << endl;
    }
}