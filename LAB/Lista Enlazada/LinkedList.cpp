#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
    this->size = 0;
    this->head = nullptr;
}

LinkedList::LinkedList(int value) {
    this->size = 1;
    this->head = new Node(value);
}

// Erick
LinkedList::LinkedList(const LinkedList &o) {
    this->size = o.size;
    Node* nuevo = o.head;
    while(nuevo->getNext() != nullptr){
        insert(nuevo->getValue());
        nuevo = nuevo->getNext();
    }
}

// Carlos
LinkedList::~LinkedList() {
    Node *p = head;
    while(p){
        p = head->getNext();
        delete head;
        head = p;
    }
}

//Samuel 
void LinkedList::insert(int value) {
    Node *new_node = new Node(value);
    Node *temp = head;
    if (!head) {
        head = new_node;
    }else {
        if (head->getValue() > value) {
            new_node->setNext(head);
            head = new_node;
        } else {
            while ((temp->getNext() != nullptr) && (temp->getNext()->getValue()<value)) {
                temp=(temp->getNext());
            }
            new_node->setNext(temp->getNext());
            temp->setNext(new_node);
        }
    }
    size++;
}


// Jenny
  
void LinkedList::remove(int value) {
    if (head != nullptr){
        Node *temp = nullptr;
        Node *aux_borrar = head;

        while(aux_borrar != nullptr && aux_borrar->getValue() != value){
            temp = aux_borrar;
            aux_borrar = aux_borrar->getNext();
        }
        if(temp == nullptr){
            head = head->getNext();
            delete aux_borrar;
        }
        else {
            temp->setNext(aux_borrar->getNext());
            delete aux_borrar;
        }
    }
    else
        std::cout << "La lista está vacía" << std::endl;
}

/*Sobrecarga operador "<<"*/
std::ostream& operator<<(std::ostream &out, const LinkedList &p){
    Node *temp = p.head;
    if(p.head==nullptr){
        out << "La lista esta vacia." << "\n";
    }else{
        out << "[";
        while(temp){
            if(temp->getNext()==nullptr){
                out << temp->getValue() << "]";
            }else{
                out << temp->getValue() << "->";
            }
            temp=temp->getNext();
        }
    }
    return out;
}
// Carlos
bool LinkedList::search(int value) {
    Node *actual = head;
    Node *anterior = nullptr;
    while(actual->getValue() != value && actual->getNext() != nullptr){
        anterior = actual;
        actual = actual->getNext();
    }
    if(actual->getValue() != value && actual->getNext() ==nullptr ){
        return false;
    }else{
        return true;
    }

    // return false;
}

// Alvaro
int LinkedList::getSize() const {
    return size;
}