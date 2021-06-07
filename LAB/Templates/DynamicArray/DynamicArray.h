#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

#include <string>
#include "Person.h"

template <typename T>
class DynamicArray
{
    private:
        int size;
        T *arr;

    public:
        DynamicArray(/* args */);
        DynamicArray(const T arr[], int size);
        DynamicArray(const DynamicArray &obj);
        int getSize()const;
        //resize: cambiar el tamaño del arreglo
        void resize(int newSize);
        //push_back insertar en pos final un elemento
        void pushBack(T elem);
        //insert: recibe el elemento Person y lo inserta en la pos dada
        void insert(T elem, int pos);
        //remove: recibe la posicion del elemento que se elimina
        void remove(int pos);
        //clear
        void clear();
        //print: imprimie elemento (nombre y id)
        void print() const;
        //show: muestra los elementos almacenados en arr
        void show() const;

        ~DynamicArray();

        friend std::ostream& operator<<(std::ostream &out, const DynamicArray &d){
            for( size_t i = 0; i < d.size; i++)
            {
                out << "Posición: "<<i<<std::endl;
                
            }
            return out;
        }
};

template <typename T>
DynamicArray<T>::DynamicArray(/* args */)
{
    size = 0;
    arr = new T[0];
}

template <typename T>
DynamicArray<T>::DynamicArray(const T arr[], int size)
{
    this->size = size;
    this->arr = new T [size];

    for(size_t i = 0; i< size; i++)
        this->arr[i] = arr[i];
}

template <typename T>
DynamicArray<T>::DynamicArray(const DynamicArray <T> &obj)
{
    this->size = obj.size;
    this->arr = new T[obj.size];

    for(size_t i = 0; i< size; i++)
        this->arr[i] = obj.arr[i];
}

template <typename T>
int DynamicArray<T>::getSize()const
{
    return size;
}

template <typename T>
void DynamicArray<T>::resize(int newSize) {
    T *tmp = new T[newSize];
    int minSize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minSize; i++)
        tmp[i] = arr[i];
    delete[] arr;
    size = newSize;
    arr = tmp;
}

template <typename T>
void DynamicArray<T>::pushBack(T elem) {
    resize(size + 1);
    arr[size - 1] = elem;
}

template <typename T>
void DynamicArray<T>::insert(T elem, int pos)
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

template <typename T>
void DynamicArray<T>::remove(int pos)
{
    int i = pos;
    while(i < size - 1) // size esta actualizado al tam final
    {
        arr[i] = arr[i+1]; // pos esta una posicion por detras de arr
        i++;
    }
    resize(size-1);
}

template <typename T>
void DynamicArray<T>::clear() 
{
    resize(0);
}

template <typename T>
void DynamicArray<T>:: print() const
{
    for(int x = 0;x<size; x++)
    {
        std::cout << "Elemento "<< x <<": \t"
             << "Nombre: " << arr[x].getName() << "\t"
             << "Id: " << arr[x].getId() << "\n";
    }
}

template <typename T>
void DynamicArray<T>::show() const
{
    for( size_t i = 0; i < size; i++)
        std::cout<<"Pos "<<i<<": "<<arr[i].getName()<<std::endl;
}

// Destructor
template <typename T>
DynamicArray<T>::~DynamicArray()
{
    delete []arr;
}

#endif