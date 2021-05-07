/**
 * Implemente una función que reciba un arreglo de cadenas y su tamaño y ordene lexicográficamente dicho arreglo.
Tamaño del arreglo 1000000.
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void print (char* arr, size_t tam)
{
    while(tam--)    // cuando tam = 0 se detiene
        cout<< *arr++<< " ";    // imprime los valores de c/dir. de memoria
    cout<<endl;
}

void insertionSort(char a[], int tam)
{
    int i, pos, temp;
    for (i = 0; i < tam; i++)   // Recorre c/posición del arreglo
    {
        temp = a[i];            // Almacena el valor de la pos. actual
        pos = i;                // Almacena la posición

        while (pos > 0 && temp < a[pos-1]) // A partir de la pos 1, evalua si el elemento actual es menor al de la izq 
        {
            a[pos] = a[pos - 1];           // Si es menor, el elm. de la izq pasa a la pos actual
            pos--;                         // recorre la pos. hacia la izquierda
        }
        a[pos] = temp;                     // el elemento en la pos recorrida es igual al valor de esta iteración
    }
}




int main()
{

    char cadena[] = "MecAnIsMo";
    size_t tam = sizeof(cadena)/sizeof(cadena[0]);
    cout<<('a'< 'A')<<endl;
    insertionSort(cadena, tam);
    print(cadena, tam);
    cout<<endl;
    return 0;
}