/* 
* Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva). Tamaño del
    arreglo 1000000.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void print (long* arr, long tam)
{
    while(tam--)    // cuando tam = 0 e detiene
        cout<< *arr++<< " ";
    cout<<endl;
}
void swap( int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void invertir (long* start, long* end)
{
    while(start < end)
        swap(*start++, *end--);        
} 

int main ()
{
    // Creación de un array de los 1 000 000 primeros numeros enteros
    long n = 1000000;
    long arrayN[n];
    for (long i=0; i<n; i++)
        arrayN[i] = i+1;
    
    invertir(arrayN, arrayN + n-1);
    print(arrayN, n);
    return 0;
}