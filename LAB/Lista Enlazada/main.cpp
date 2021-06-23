#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList l1;
    l1.insert(5);
    l1.insert(15);
    l1.insert(20);
    l1.insert(25);
    l1.insert(8);
    l1.insert(1);

    cout << l1 << endl;

    l1.remove(25);
    cout << l1 << endl;

    l1.remove(15);
    cout << l1 << endl;

    l1.remove(1);
    cout << l1 << endl;

    cout <<"Buscanso 8: "<< l1.search(8) << endl;
    cout <<"Buscanso 2: "<< l1.search(2) << endl;

    return 0;
}