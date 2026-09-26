#include <iostream>
using namespace std;

int main()
{
    /*
        Calcular un descuento combinando:
            - edad (jubilados, 65 años o más: 10% de descuento)
            - dia de la semana (1 a 7; si es miercoles (3): 15% de descuento)
            - si es socio (5% de descuento adicional)

        Estos descuentos NO son excluyentes: pueden acumularse

        Mostrar el descuento total.
    */
    int edad, dia_semana;
    int descuento = 0;
    char socio;
    cout << "ingrese la edad ";
    cin >> edad;
    cout << "ingrese el dia de la semana ";
    cin >> dia_semana;
    cout << "Eres socio? (s = si | n = no) ";
    cin >> socio;
    if (edad >= 65)
    {
        cout << "tenes 10\% de descuento\n";
        descuento = descuento + 10;
    }
    if (dia_semana == 3)
    {
        cout << "tenes un 15\% de descuento\n";
        descuento = descuento + 15;
    }
    if (socio == 's')
    {
        cout << "tenes 5\% de descuento\n";
        descuento = descuento + 5;
    }
    cout << "el descuento total es: " << descuento << endl;
}