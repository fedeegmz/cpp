#include <iostream>
using namespace std;

int main()
{
    /*
        Pedir una base y un exponente (entero, 0 o positivo) y
        calcular la base elevada al exponente usando un for
        y un acumulador.

        Ejemplos:
            base 2, exponente 5  ->  32   (2 * 2 * 2 * 2 * 2)
            base 3, exponente 4  ->  81
            base 7, exponente 0  ->  1

        Preguntas:
            - Con que valor tiene que empezar el acumulador? Por que?
            - Por que da bien el caso del exponente 0? Cuantas
              vueltas da el for en ese caso?
    */
    int base, exponente;
    int producto = 1;
    cout << "ingresa la base";
    cin >> base;
    cout << "ingresa el exponente";
    cin >> exponente;
    for (int i = 0; i < exponente; i++)
    {
        producto = producto * base;
    }
    cout << "el resultado es: " << producto << endl;
}