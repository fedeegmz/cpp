#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un número y avisar si NO es par.
    */
    int numero;
    cout << "ingrese un numero ";
    cin >> numero;
    if (!(numero % 2 == 0))
    {
        cout << "tu numero no es par" << endl;
    }

    if (numero % 2 != 0)
    {
        cout << "tu numero no es par" << endl;
    }
}
