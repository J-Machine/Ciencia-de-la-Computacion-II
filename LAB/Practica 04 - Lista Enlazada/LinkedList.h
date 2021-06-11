#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <iostream>
#include "Node.h"

class LinkedList
{
private:
    int size;
    Node *head;

public:
    LinkedList();
    LinkedList(Node*);
    ~LinkedList();

    int getSize() const;
    Node* getHead() const;

    void insert(int elem);
    void remove(int elem);
    void print();

    // Sobrecarha de operador de salida
    friend std::ostream& operator << (std::ostream &out, const LinkedList &list);
};


#endif