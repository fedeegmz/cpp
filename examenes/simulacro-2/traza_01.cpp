#include <iostream>
using namespace std;

int main()
{
    int cont = 2, suma = 0;
    do
    {
        cont += 2;
        if (cont % 3 == 0)
        {
            suma += 10;
        }
        else if (cont % 4 == 0)
        {
            suma -= 4;
        }
        else
        {
            suma += 1;
        }
    } while (cont < 16);
    cout << "La suma es " << suma;
}
