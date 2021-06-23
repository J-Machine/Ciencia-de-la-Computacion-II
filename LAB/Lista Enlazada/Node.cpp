#include "Node.h"

Node::Node(int value) {
    this->value = value;
    this->next = nullptr;
}

int Node::getValue() const {
    return value;
}

void Node::setValue(int value) {
    this->value = value;
}

void Node::setNext(Node *next) {
    this->next = next;
}

Node* Node::getNext() const {
    return next;
}

