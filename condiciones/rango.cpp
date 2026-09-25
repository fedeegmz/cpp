#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir un número y avisar si está entre 10 y 20 (ambos incluidos).

        Usar una única condición con AND (&&).
    */

    int N;
    cout << "ingrese un numero ";
    cin >> N;
    if (N >= 10 && N <= 20)
    {
        cout << "tu numero esta entre 10 y 20" << endl;
    }
}