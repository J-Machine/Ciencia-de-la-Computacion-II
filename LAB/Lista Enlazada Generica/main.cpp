#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList<int> l1;
    cout << l1.getSize()<< endl;
    l1.insert(5);
    l1.insert(15);
    l1.insert(20);
    l1.insert(25);
    l1.insert(8);
    l1.insert(1);

    cout << "Traversing LinkedList through method" << endl; 
    l1.traverse();

    cout << l1 << endl;

    l1.remove(25);
    cout << l1 << endl;

    l1.remove(15);
    cout << l1 << endl;

    l1.remove(1);
    cout << l1 << endl;

    cout <<"Buscando 8: "<< l1.search(8) << endl;
    cout <<"Buscando 2: "<< l1.search(2) << endl;

    return 0;
}