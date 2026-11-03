#include <iostream>
using namespace std;

int main()
{
    /*
        Realizar un algoritmo para calcular y
        mostrar el salario de N trabajadores.
        El salario se calcula a partir de las horas
        trabajadas durante el mes (24 días),
        en estos 24 días trabaja diferentes horas
        por lo que deben ser ingresadas por teclado.
        Se le paga 2250$ por hora.
        Además, se le da un aumento del 25%.

        Mostrar la siguiente salida por cada empleado:
            Salario Base: 10000$
            Aumento: 2500$
            Salario Total: 12500$
    */
    int horas;
    int horas_acumuladas = 0;
    int trabajadores;
    cout << "ingrese la cantidad de trabajadores: ";
    cin >> trabajadores;
    for (int i = 1; i <= 24; i++)
    {
        cin >> horas;
        horas_acumuladas = horas_acumuladas + horas;
    }
}
