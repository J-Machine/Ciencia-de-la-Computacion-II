/* 
* Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
* Tamaño del arreglo 1000000. (Iterativa y recursiva). 
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void createArray(long n)
{
    int i, arrayN[n];
    for (i=1; i<=n; i++)
        arrayN[i] = i;
}

long long sumIterativa (long a[], long tam)
{
    long long suma = 0;
    for (int i = 0; i <= tam; i++)
        suma += a[i];        
    return suma;
}

long long sumRecursiva (int a[], long tam)
{
    if (tam == 1)
        return a[0];
    else
        
}

int main()
{
    // Creación de un array de los 1 000 000 primeros numeros enteros
    long n = 1000000;
    long arrayN[n];
    for (long i=1; i<=n; i++)
        arrayN[i] = i;

    cout<<sumIterativa(arrayN, n)<<endl;
    return 0;
}