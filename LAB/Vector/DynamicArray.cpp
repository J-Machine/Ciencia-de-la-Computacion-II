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

//push_back insertar en pos final un elemento
void DynamicArray::pushBack(Person elem)
{
    Person *temp =  new Person [size + 1];
    for(size_t i = 0; i< size; i++)
        temp[i] = arr[i];

    temp[size] = elem;

    delete [] arr;
    size+=1;
    arr = temp;
}

//insert: recibe el elemento Person y lo inserta en la pos dada
void DynamicArray::insert(Person elem, int pos)
{
    Person *temp =  new Person [size + 1];
    int i;
    while(i < pos)
    {
        temp[i] = arr[i];
        i++;
    }
    temp[pos] = elem;   // i y pos tienen el mismo valor
    pos +=1;
    while (i < size+1)
    {
        temp[pos] = arr[i];
        i++;
        pos++;
    }
    delete [] arr;
    size+=1;
    arr = temp;
}

//remove: recibe la posicion del elemento que se elimina
void DynamicArray::remove(int pos)
{
    if(pos < size)
    {
        Person *temp =  new Person [size -1];
        for(size_t i = 0; i < size-1; i++)
        {
            if (i == pos)
                i++;
            temp[i] = arr[i];
        }
        delete [] arr;
        size-=1;
        arr = temp;
    }
    else
    {
        std::cout<<"La posición ingresada no es válida"<<std::endl;
    }

}

void DynamicArray::show() const
{
    for( size_t i = 0; i < size; i++)
    {
        std::cout<<"Pos "<<i<<": "<<arr[i].getName()<<std::endl;

    }
}

// Destructor
DynamicArray::~DynamicArray()
{
    delete []arr;
}