#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
    this->size = 0;
    this->head = nullptr;
}

LinkedList::LinkedList(Node* node)
{
    this->size = 1;
    this->head = node;
}

// Getter
int LinkedList::getSize() const
{
    return this->size;
}
Node* LinkedList::getHead() const
{
    return this->head;
}

// Functions insert, remove and print
void LinkedList::insert(int elem)
{
    Node *new_node = new Node(elem);
    Node *temp = head;

    if (!head)
    {
        head = new_node;
    }
    else
    {
        if (head->getElem() > elem)
        {
            new_node->setNext(head);
            head = new_node;
        }
        else
        {
            while (temp->getNext() != NULL && temp->getNext()->getElem() < elem)
            {
                temp = temp->getNext();
            }
            new_node->setNext(temp->getNext());
            temp->setNext(new_node);
        }
    }
    size++;
}

void LinkedList::remove(int elem)
{
    if (head != nullptr)
    {

        Node *temp = nullptr;
        Node *aux_borrar = head;

        while (aux_borrar != nullptr && aux_borrar->getElem() != elem)
        {
            temp = aux_borrar;
            aux_borrar = aux_borrar->getNext();
        }
        if (aux_borrar == nullptr)
            std::cout << "No se encontró el elemento a remover en la lista" << std::endl;
            
        else if (temp == nullptr)
        {
            head = head->getNext();
            delete aux_borrar;
        }
        else
        {
            temp->setNext(aux_borrar->getNext());
            delete aux_borrar;
        }
    }
    else 
        std::cout << "La lista está vacía" << std::endl;
}

void LinkedList::print()
{
    Node *actual = head;
    if (head == nullptr)
    {
        std::cout << "La lista está vacía";
    }
    else
    {
        while (actual != nullptr)
        {
            std::cout << actual->getElem() << " -> ";
            if (actual->getNext() == nullptr)
                std::cout << "Null";
            actual = actual->getNext();
        }
    }
    std::cout << std::endl;
}

// Sobrecarga de operador salida
std::ostream& operator << (std::ostream &out, const LinkedList &list)
{
    Node *actual = list.head;

    while (actual != nullptr)
    {
        out << actual->getElem() << " -> ";
        if (actual->getNext() == nullptr)
            out << "Null";
        actual = actual->getNext();
    }
    
    return out; 
}

LinkedList::~LinkedList()
{
}
