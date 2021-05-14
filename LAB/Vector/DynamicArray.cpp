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

//push_back: insertar en pos final un elemento
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
    int i= 0;   // indice para arr

    // copiar los elementos a temp mientras no se alcance la posicion de insercion
    while(i < pos)  
    {
        temp[i] = arr[i];
        i++;
    }
    
    // Cuando se alcanze la pos de insercion se añade el elemento
    temp[pos] = elem;   // i y pos tienen el mismo valor
    pos +=1;            // será indice para temp
    
    // Ahora pos es indice para el arreglo temp y agrega los elementos desplazados
    while (pos < size+1)    // Pos esta un valor adelante de i
    {
        // std::cout<<"Valor de i-pos "<<i<<pos<<std::endl;
        temp[pos] = arr[i];
        pos++;
        i++;
    }
    delete [] arr;
    size+=1;
    arr = temp;
}

//remove: recibe la posicion del elemento que se elimina
void DynamicArray::remove(int pos)
{
    Person *temp =  new Person [size -1];
    int i = 0;

    // Copiar los elementos a temp mientras no se alcance la pos a eliminar
    while (i < pos)
    {
        temp[i] = arr[i];
        i++;
    }
    i++;     // cuando se alcanzo la pos para eliminar (i = pos) el indidce de arr avanza hacia la sgt posicion

    // pos es el nuevo indice para temp. Se copia los elementos faltantes de arra a temp
    while(pos < size - 1)
    {
        temp[pos] = arr[i]; // pos esta una posicion por detras de arr
        pos++;
        i++;
    }
    delete [] arr;
    size-=1;                // actualización del tamaño
    arr = temp;

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