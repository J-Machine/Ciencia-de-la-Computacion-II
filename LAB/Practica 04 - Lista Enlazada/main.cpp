#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{   
    // instancia lista 
    Node node(10);
    LinkedList lista(&node);
    lista.print();

    // Insertar elementos
    cout << "Insertar elementos: " << endl;
    lista.insert(3);
    lista.insert(1);
    lista.insert(4);
    lista.insert(2);
    lista.print();
    
    // Remover elemento
    cout << "Remover elemento 3: " << endl;
    lista.remove(3);
    lista.print();

    cout << lista <<endl;

    return 0;
}