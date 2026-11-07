#include <iostream>
using namespace std;
int main()
{
    char caracter1, caracter2;
    string txt1, txt2;

    cout << "Segundo ejercicio\n";
    caracter1 = 'a';
    caracter2 = 'A';
    switch (caracter1)
    {
    case 'T':
    case 'c':
        txt1 = "Hola";
        break;
    case 'A':
    case 't':
        txt1 = "Basta";
        break;
    case 'C':
    case 'a':
        txt1 = "Adios";
        break;
    default:
        txt1 = "Que tal!";
        break;
    }

    switch (caracter2)
    {
    case 'B':
    case 'v':
        txt2 = "Susana";
        break;
    case 'V':
    case 'e':
        txt2 = "Rogelio";
        break;
    case 'E':
    case 'b':
        txt2 = "Mambru";
        break;
    default:
        txt2 = "NN";
        break;
    }

    cout << txt1 << " " << txt2;
}

/*
caracter1   caracter2   txt1   txt2  salida
                                    "Segundo ejercicio"
    a
             A
                        Adios
                                NN
                                       "Adios NN"
*/