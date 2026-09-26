#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir tres números y decir si NINGUNO es negativo.
    */
    int a, b, c;
    cout << "ingrese el primer numero ";
    cin >> a;
    cout << "ingrese el segundo numero ";
    cin >> b;
    cout << "ingrese el tercer numero ";
    cin >> c;

    if (a >= 0 && b >= 0 && c >= 0)
    {
        cout << "ninguno es negativo" << endl;
    }
}
