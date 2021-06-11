#ifndef __NODE_H__
#define __NODE_H__

#include <iostream>

class Node
{
    private:
        int elem;
        Node *next;

    public:
        Node();
        Node(int _elem);
        ~Node();
        
        int getElem() const;
        Node* getNext() const;
        void setElem(int _elem);
        void setNext(Node* _next);
};


#endif