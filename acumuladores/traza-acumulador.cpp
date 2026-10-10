#include <iostream>
using namespace std;

int main()
{
    /*
        SIN EJECUTARLO: hacer la traza de este programa y escribir
        en el comentario de abajo que va a mostrar en la terminal.
        Despues ejecutarlo y comparar.

        Salida esperada: 10

    */
    int suma = 0;
    for (int i = 1; i <= 4; i++)
    {
        suma = suma + i;
        cout << "i vale " << i << " y suma vale " << suma << endl;
    }
    cout << "suma final: " << suma << endl;
}
