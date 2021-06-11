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

// Constructores
Node::Node()
{
    elem = 0;
    next = nullptr;
}
Node::Node(int _elem)
{
    this->elem = _elem;
    next = nullptr;
}

// Getters
int Node::getElem() const
{
    return elem;
}
Node* Node::getNext() const
{
    return next;
}


// Setters
void Node::setElem(int _elem)
{
    this->elem = _elem;
}
void Node::setNext(Node* _next)
{
    this->next = _next;
}
Node::~Node()
{
}


#endif