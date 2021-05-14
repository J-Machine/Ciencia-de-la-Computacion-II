#include <iostream>
#include "DynamicArray.h"

using namespace std;


int main()
{
    DynamicArray p;
    cout << p.getSize()<<endl;

    Person arr[4];
    int tam = sizeof(arr)/sizeof(arr[0]);

    DynamicArray q(arr, tam);
    cout << q.getSize()<<endl;

    DynamicArray r = q;     // aqui se intenta copiar el objeto q a r.
    // Instanciando un objeto con otra instancia
    // Problema de doble destructor solucionado con implementacion de constructor copia

    Person e("Erick", 32456);

    // q.pushBack(e);
    q.insert(e, 0);
    cout << q.getSize()<<endl;

    q.show();

    return 0;
}
