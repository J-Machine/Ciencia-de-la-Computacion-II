#include <iostream>
#include "Node.h"

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
