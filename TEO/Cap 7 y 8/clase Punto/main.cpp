#include <iostream>
#include "Punto.h"

using namespace std;

int main()
{
    Punto arr[5];
    // for (int i = 0; i < tam; i ++)
    // {
    //     arr[i].print();  // objeto de tipo punto
    // }

    Punto *ptr = arr;
    int tam = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < tam; i++, ptr++)    // incremento el puntero para poder imprimir todos los valores
        ptr->print();   // -> se usa para puntero, invoca metodos publicos y variables

    return 0;
}