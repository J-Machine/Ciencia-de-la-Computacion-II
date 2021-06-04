#include <iostream>
#include "DynamicArray.h"

using namespace std;


int main()
{   
    /* IMPLEMENTACION DE MÉTODOS: INSERT Y REMOVE */
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

    DynamicArray<Person> q(arr, tam);
    cout << "\nARREGLO ORIGINAL: Tamaño inicial: "<<q.getSize()<<endl;
    q.show();

    Person e("Erick", 32456);
    q.insert(e,1);
    cout <<"\nINSERT(pos 1): Tamaño del nuevo arreglo: "<<q.getSize()<<endl;
    q.show();

    q.remove(0);    
    cout <<"\nREMOVE (pos 0): Tamaño del nuevo arreglo: "<<q.getSize()<<endl;
    q.show();

    return 0;
}
