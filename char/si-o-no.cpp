#include <iostream>
using namespace std;

int main()
{
    /*
        Preguntar al usuario si le gusta programar (s/n).

        Tiene que aceptar la respuesta tanto en minuscula como en
        mayuscula:
            - 's' o 'S' -> mostrar "que bueno!"
            - 'n' o 'N' -> mostrar "ya te va a gustar"
            - cualquier otra cosa -> mostrar "respuesta invalida"
    */
    char gusta_programar;
    cout << "Inregsa s si te gusta programar o n si no te gusta: ";
    cin >> gusta_programar;

    if (gusta_programar == 's' || gusta_programar == 'S')
    {
        cout << "que bueno!\n";
    }
    else if (gusta_programar == 'n' || gusta_programar == 'N')
    {
        cout << "ya te va a gustar\n";
    }
    else
    {
        cout << "invalido\n";
    }
}
