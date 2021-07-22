#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include <iostream>
#include "Node.cpp"

// template <typename T>
// class LinkedList;

// template <typename T>
// std::ostream& operator<<(std::ostream &out,const LinkedList<T> &p);

template <typename T>
class LinkedList {
        int size;
        Node<T> *head;
    public:
        LinkedList();
        LinkedList(T);
        LinkedList(const LinkedList&);

        ~LinkedList();

        void insert(T);
        void remove(T); // remove by value

        bool search(T);

        int getSize() const;
        template<class U> friend std::ostream& operator<< (std::ostream &out, const LinkedList<U> &p);

};

/***/

/*Sobrecarga operador "<<"*/
template <class U>
std::ostream& operator<< (std::ostream &out, const LinkedList<U> &p){
    // Node<T> *temp = p.head;
    Node<U> *temp = p.head;
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
template <typename T>
LinkedList<T>::LinkedList() {
    this->size = 0;
    this->head = nullptr;
}

template <typename T>
LinkedList<T>::LinkedList(T value) {
    this->size = 1;
    this->head = new Node<T>(value);
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &o) {
    this->size = o.size;
    Node<T>* nuevo = o.head;
    while(nuevo->getNext() != nullptr){
        insert(nuevo->getValue());
        nuevo = nuevo->getNext();
    }
}

template <typename T>
LinkedList<T>::~LinkedList() {
    Node<T> *p = head;
    while(p){
        p = head->getNext();
        delete head;
        head = p;
    }
}

template <typename T>
void LinkedList<T>::insert(T value) {
    Node<T> *new_node = new Node<T>(value);
    Node<T> *temp = head;
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


template <typename T>
void LinkedList<T>::remove(T value) {
    if (head != nullptr){
        Node<T> *temp = nullptr;
        Node<T> *aux_borrar = head;

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

template <typename T>
bool LinkedList<T>::search(T value) {
    Node<T> *actual = head;
    Node<T> *anterior = nullptr;
    while(actual->getValue() != value && actual->getNext() != nullptr){
        anterior = actual;
        actual = actual->getNext();
    }
    if(actual->getValue() != value && actual->getNext() ==nullptr ){
        return false;
    }else{
        return true;
    }
}

template <typename T>
int LinkedList<T>::getSize() const {
    return size;
}

#endif