#include <iostream>
#include <string>
#include "DynamicArray.h"

// Constructor por defecto
DynamicArray::DynamicArray(/* args */)
{
    size = 0;
    arr = new Person[0];
}

// Constructor 
DynamicArray::DynamicArray(const Person arr[], int size)
{
    this->size = size;
    this->arr = new Person[size];

    for(size_t i = 0; i< size; i++)
        this->arr[i] = arr[i];
}

// Constructor copia
DynamicArray::DynamicArray(const DynamicArray &obj)
{
    this->size = obj.size;
    this->arr = new Person[obj.size];

    for(size_t i = 0; i< size; i++)
        this->arr[i] = obj.arr[i];
}

int DynamicArray::getSize()const
{
    return size;
}

void DynamicArray::resize(int newSize) {
    Person *tmp = new Person[newSize];
    int minSize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minSize; i++)
        tmp[i] = arr[i];
    delete[] arr;
    size = newSize;
    arr = tmp;
}

//push_back: insertar en pos final un elemento
/* void DynamicArray::pushBack(Person elem)
{
    Person *temp =  new Person [size + 1];
    for(size_t i = 0; i< size; i++)
        temp[i] = arr[i];

    temp[size] = elem;

    delete [] arr;
    size+=1;
    arr = temp;
} */

void DynamicArray::pushBack(Person elem) {
    resize(size + 1);
    arr[size - 1] = elem;
}

//insert: recibe el elemento Person y lo inserta en la pos dada
void DynamicArray::insert(Person elem, int pos)
{
    resize(size + 1);
    int i = size - 1; // i toma el valor de la ultima pos
    while (i > pos)
    {
        arr[i] = arr[i-1];
        i--;    
    }
    arr[pos] = elem;
}

//remove: recibe la posicion del elemento que se elimina
void DynamicArray::remove(int pos)
{
    int i = pos;
    while(i < size - 1) // size esta actualizado al tam final
    {
        arr[i] = arr[i+1]; // pos esta una posicion por detras de arr
        i++;
    }
    resize(size-1);
}

void DynamicArray::clear() 
{
    resize(0);
}

void DynamicArray :: print() const
{
    for(int x = 0;x<size; x++)
    {
        std::cout << "Elemento "<< x <<": \t"
             << "Nombre: " << arr[x].getName() << "\t"
             << "Id: " << arr[x].getId() << "\n";
    }
}

void DynamicArray::show() const
{
    for( size_t i = 0; i < size; i++)
        std::cout<<"Pos "<<i<<": "<<arr[i].getName()<<std::endl;
}

// Destructor
DynamicArray::~DynamicArray()
{
    delete []arr;
}