#include <iostream>
using namespace std;
int main()
{
    int cont, triple, acum = 0;
    for (cont = 1; cont <= 8; cont++)
    {
        triple = cont * 3;
        if (triple < 12)
        {
            acum += 5;
        }
        else
        {
            acum += 2;
        }
    }
    cout << "El valor final " << acum;
}