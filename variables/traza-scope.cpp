#include <iostream>
using namespace std;

int main()
{
    /*
        SIN EJECUTARLO: hacer la traza de este programa y escribir
        en el comentario de abajo que va a mostrar en la terminal.
        Despues ejecutarlo y comparar.

        Salida esperada:
        A: 13 3
        B: 0
        B: 2
        B: 4
        C: 13

        A: 13 3
        B: 0
        B: 2
        B: 4
        C: 13


        Despues: descomentar la linea D y compilar. Que pasa? Por que?
        Volver a comentarla y hacer lo mismo con la linea E.
    */
    int x = 10;

    if (x > 5)
    {
        int y = 3;
        x = x + y;
        cout << "A: " << x << " " << y << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        int x = i * 2;
        cout << "B: " << x << endl;
    }

    cout << "C: " << x << endl;
    // cout << "D: " << y << endl;
    // cout << "E: " << i << endl;
}
