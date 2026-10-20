#include <iostream>
using namespace std;

int main()
{
    /*
        Sin ejecutar el programa, escribi abajo (en el comentario
        del final) que va a mostrar en pantalla, linea por linea.
        Despues ejecutalo y compara.

        Pregunta extra: que pasaria si producto empezara en 0
        en vez de 1? Por que?
    */
    int producto = 1;
    for (int i = 1; i <= 5; i++)
    {
        producto = producto * i;
        cout << "i vale " << i << " y producto vale " << producto << endl;
    }
    cout << "producto final: " << producto << endl;

    /*
        Salida que pienso que va a dar:
        i vale 1 y producto vale 1
        i vale 2 y producto vale 2
        i vale 3 y producto vale 6
        i vale 4 y producto vale 24
        i vale 5 y producto vale 120

        producto final: 120

        Respuesta a la pregunta extra: todo en cero
    */
}
