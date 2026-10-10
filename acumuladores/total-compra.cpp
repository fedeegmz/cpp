#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir precios de productos, uno por uno, hasta que el usuario ingrese 0.

        Al final mostrar:
            - el total de la compra
            - la cantidad de productos comprados

        Ojo: el 0 no es un producto, no hay que contarlo.

        Ejemplo: si ingresa 100, 250, 50, 0
        tiene que mostrar: total: 400, productos: 3
    */
    int precios;
    int total = 0;
    int cantidad = 0;

    do
    {
        cout << "ingrese un precio";
        cin >> precios;
        total = total + precios;

        if (precios != 0)
        {
            cantidad = cantidad + 1;
        }
    } while (precios != 0);

    cout << "total: " << total << ", productos: " << cantidad << endl;
}
