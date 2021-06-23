#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include<iostream>
#include "Node.h"

class LinkedList;
std::ostream& operator<<(std::ostream &out,const LinkedList &p);

class LinkedList {
        int size;
        Node *head;
    public:
        LinkedList();
        LinkedList(int);
        LinkedList(const LinkedList&);

        ~LinkedList();

        void insert(int);
        void remove(int); // remove by value

        bool search(int);

        int getSize() const;
        friend std::ostream& operator<< (std::ostream &out, const LinkedList &p);

};

#endif