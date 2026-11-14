/*
Una verdulería desea un programa para atender a N clientes.
Por cada cliente se debe ingresar la cantidad de kilos comprados
y el tipo de producto: fruta (f) o verdura (v).
El kilo de fruta vale 2500$ y el de verdura 1800$.

Mostrar el total a pagar de cada cliente, y al finalizar mostrar cuántos clientes compraron fruta, cuántos compraron verdura y el total recaudado.
*/

#include <iostream>
using namespace std;
int main()
{

    int clientes, kilos;
    int total_recaudado;
    int total = 0;
    int cliente_f = 0, cliente_v = 0;
    char producto;
    cout << "ingrese la cantidad de clientes";
    cin >> clientes;
    for (int i = 1; i <= clientes; i++)
    {
        cout << "ingrese la cantidad de kilos comprados";
        cin >> kilos;
        cout << "ingrese el tipo de producto";
        cin >> producto;
        switch (producto)
        {
        case 'f':
            total_recaudado = kilos * 2500;
            cliente_f += 1;
            break;
        case 'v':
            total_recaudado = kilos * 1800;
            cliente_v += 1;
            break;
        }
        cout << "total:" << total_recaudado << "\n";
        total += total_recaudado;
    }
    cout << "compraron fruta: " << cliente_f << "\n";
    cout << "compraron verdura: " << cliente_v << "\n";
    cout << "el total de clientes es: " << total << "\n";
}
