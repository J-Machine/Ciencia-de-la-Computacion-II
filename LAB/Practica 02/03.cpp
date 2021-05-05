/* 
* Implementar una función que ordene los elementos de un arreglo: ascendente. Tamaño del arreglo 1000000.
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

void insertionSort(long* a, long tam)
{
    long i, pos;
    long temp;
    for (i = 0; i < tam; i++)   // Recorre c/posición del arreglo
    {
        temp = *(a+i);            // Almacena el valor de la pos. actual a[i]
        pos = i;                // Almacena la posición

        while (pos > 0 && temp < *(a + pos-1)) // A partir de la pos 1, evalua si el elemento actual es menor al de la izq 
        {
            *(a+pos) = *(a + pos - 1);           // Si es menor, el elm. de la izq pasa a la pos actual
            pos--;                         // recorre la pos. hacia la izquierda
        }
        *(a + pos) = temp;                     // el elemento en la pos recorrida es igual al valor de esta iteración
        // cout<<"a[i]="<< *(a+pos)<<endl;
    }
}


int main()
{
    // Creación de un array de los 1 000 000 primeros numeros enteros
    long n = 1000000;
    long tam = 1000000;
    long* arreglo = new long[tam];

    for (long i = 0; i < tam; i++, n--)
        *(arreglo+i) = n;
    
    insertionSort(arreglo, tam);
    print(arreglo, tam);

    delete[] arreglo;

    cout<<endl;
    return 0;
}