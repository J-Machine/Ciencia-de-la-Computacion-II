/*
* Implementación de Insertion Sort
*/
#include <iostream>
using namespace std;

/* Funciones para el ordenamiento*/

void insertionSort(int a[], int tam)
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

void showArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

/* ****************** MAIN FUNCTION *************************/
int main()
{
    int option;
    int size;

    cout << "** ORDENAMIENTO POR INSERCIÓN**\n"
         << "Ingrese el tamaño de su lista de números: ";
    cin >> size;

    // Inicializando y llenando la lista de números a ordenar
    int numList[size];
    cout << "Ingrese los números:\n";
    for (int i = 0; i < size; i++)
        cin >> numList[i];
    
    cout << "\nSu lista ordenada es: ";
    insertionSort(numList, size);
    showArray(numList, size);
    cout<<endl;

    return 0;
}
// Caso a probar: 67,8,15,44,27,12,35 -> 8 12 15 27 35 44 97