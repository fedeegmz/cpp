#include <iostream>
using namespace std;
int main()
{
    float descuento, aumento, salario;

    cout << "Bienvenido al examen\n";
    salario = 2000;

    if (salario < 1500)
    {
        cout << "Camino A\n";
        descuento = salario * 0.05;
    }
    else if (salario > 1500 && salario <= 2000)
    {
        cout << "Camino B\n";
        descuento = salario * 0.10;
    }
    else
    {
        cout << "Camino C\n";
        descuento = salario * 0.15;
    }

    salario = salario - descuento;

    if (salario < 1500)
    {
        cout << "Camino A\n";
        aumento = salario * 0.05;
    }
    else if (salario > 1500 && salario <= 2000)
    {
        cout << "Camino B\n";
        aumento = salario * 0.10;
    }
    else
    {
        cout << "Camino C\n";
        aumento = salario * 0.15;
    }

    salario = salario + aumento;
    cout << "Salario Final: " << salario << "$\n";
}

/*
descuento   aumento    salario   salida
                                  "Bienvenido al examen"
                        2000
                                  "Camino B"
 200                    1800
                                 "Camino B"
            180
                        1980
                                 "Salario Final: 1980$"
*/