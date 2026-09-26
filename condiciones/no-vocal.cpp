#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un carácter y avisar si NO es una vocal.
    */
    char caracter;
    cout << "ingrese un caracter ";
    cin >> caracter;

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
    {
        cout << "tu caracter es una vocal" << endl;
    }

    if (!(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'))
    {
        cout << "tu caracter no es una vocal" << endl;
    }

    if (caracter != 'a' && caracter != 'e' && caracter != 'i' && caracter != 'o' && caracter != 'u')
    {
        cout << "tu caracter no es una vocal" << endl;
    }
}
