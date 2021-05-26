#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

#include <string>
#include "Person.h"

class DynamicArray
{
    private:
        int size;
        Person *arr;

    public:
        DynamicArray(/* args */);
        DynamicArray(const Person arr[], int size);
        DynamicArray(const DynamicArray &obj);
        int getSize()const;
        //resize: cambiar el tamaño del arreglo
        void resize(int newSize);
        //push_back insertar en pos final un elemento
        void pushBack(Person elem);
        //insert: recibe el elemento Person y lo inserta en la pos dada
        void insert(Person elem, int pos);
        //remove: recibe la posicion del elemento que se elimina
        void remove(int pos);
        //clear
        void clear();
        //print: imprimie elemento (nombre y id)
        void print() const;
        //show: muestra los elementos almacenados en arr
        void show() const;

        ~DynamicArray();
};




#endif