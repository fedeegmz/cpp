#include <iostream>
using namespace std;

int main()
{
    /*
        Este programa quiere calcular un descuento sobre una compra:
            - si el cliente es socio: 5% de descuento
            - si la compra es mayor a 1000: 10% de descuento adicional
            - si es dia miercoles (dia == 3): 15% de descuento adicional

        Estos tres casos NO son excluyentes: un cliente podria ser
        socio, comprar mas de 1000 Y hacerlo un miercoles al mismo
        tiempo, sumando los tres descuentos.

        El programa de abajo tiene un error de logica: probar con
        socio = s, monto = 1500, dia = 3, y ver que el descuento
        mostrado no es el esperado (deberia ser 5 + 10 + 15 = 30).

        Encontrar el error y corregirlo.
    */
    char socio;
    float monto;
    int dia;
    int descuento = 0;

    cout << "es socio? (s = si / n = no): ";
    cin >> socio;
    cout << "ingrese el monto de la compra ";
    cin >> monto;
    cout << "ingrese el dia de la semana (1 a 7) ";
    cin >> dia;

    if (socio == 's')
    {
        descuento = descuento + 5;
    }

    if (monto > 1000)
    {
        descuento = descuento + 10;
    }

    if (dia == 3)
    {
        descuento = descuento + 15;
    }

    cout << "descuento total: " << descuento << "%" << endl;
}
