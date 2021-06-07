#include <iostream>
#include "DynamicArray.h"

using namespace std;


int main()
{   
    /* Constructor por defecto */
    DynamicArray p;
    // cout << p.getSize()<<endl;

    /* Push Back - Insert - Remove */
    Person arr[4];
    int tam = sizeof(arr)/sizeof(arr[0]);
    // Ingresando elementos
    Person a ("Ana", 11111);
    Person b ("Beto", 22222);
    Person c ("Carlos", 33333);
    Person d ("Diana", 44444);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;

    DynamicArray q(arr, tam);
    cout << "\nARREGLO ORIGINAL: Tamaño inicial: "<<q.getSize()<<endl;
    q.show();

    Person e("Erick", 32456);
    // q.pushBack(e);
    q.insert(e,3);
    cout <<"\nINSERT(pos 3): Tamaño del nuevo arreglo: "<<q.getSize()<<endl;
    q.show();

    q.remove(0);    
    cout <<"\nREMOVE (pos 0): Tamaño del nuevo arreglo: "<<q.getSize()<<endl;
    q.show();

    /* Constructor copia */
    DynamicArray r = q;     // aqui se intenta copiar el objeto q a r.
    // Instanciando un objeto con otra instancia
    // Problema de doble destructor solucionado con implementacion de constructor copia

    return 0;
}
