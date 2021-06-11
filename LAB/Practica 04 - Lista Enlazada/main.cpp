#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList lista;
    lista.print();

    lista.insert(3);
    lista.print();

    lista.insert(1);
    lista.insert(4);

    lista.print();
    
    lista.remove(3);
    lista.print();

    return 0;
}