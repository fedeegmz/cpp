#include <iostream>
using namespace std;
int main()
{
    int cont, doble, acum = 0;
    for (cont = 1; cont <= 10; cont++)
    {
        doble = cont * 2;
        if (doble < 15)
        {
            acum += 10;
        }
        else
        {
            acum += 1;
        }
    }
    cout << "El valor final " << acum;
}

/*
cont   doble   acum  salida
 -       -      0      "El valor final 73"
 1       2      10
 2       4      20
 3       6      30
 4       8      40
 5       10     50
 6       12     60
 7       14     70
 8       16     71
 9       18     72
 10      20     73
 11
*/
