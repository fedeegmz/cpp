#include <iostream>
using namespace std;

int main()
{
    /*
        Este programa pide 4 notas y muestra la suma y el promedio.

        Con las notas 6, 8, 7 y 9 deberia mostrar:
            suma = 30
            promedio = 7.5

        Tiene 3 errores. Ninguno lo marca el compilador: hay que
        encontrarlos ejecutando y haciendo la traza.
        Despues de arreglar cada error, volve a probar.
    */
    float suma = 0;
    float nota;
    float promedio;
    for (int i = 1; i <= 4; i++)
    {
        cout << "Ingresa la nota " << i << ": ";
        cin >> nota;
        suma = suma + nota;
    }
    promedio = suma / 4;
    cout << "suma = " << suma << endl;
    cout << "promedio = " << promedio << endl;
}
