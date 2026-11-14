#include <iostream>
using namespace std;
int main()
{
    int cont, triple, acum = 0;
    for (cont = 1; cont <= 6; cont++)
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
/*
cont    triple   acum  salida
                   0
1
        3
                  5
2
         6
                 10
3
        9
                15
4
       12
                17
5
        15
                19
6
        18
                21
                        El valor final 21
*/