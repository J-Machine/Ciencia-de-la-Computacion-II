/* 
* Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
    (asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).
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

void concatenar(char a[], size_t sizeA, char b[], size_t sizeB, char c[], size_t sizeC)
{
    // Se solicita 3 arrays con sus tamaños. 
    // El último array debe ser uno vacio que almacene las cadenas concatenadas
    for(int i = 0; i< sizeA; i++)
        c[i] = a[i];
    for(int j = 0; j< sizeB; j++)
        c[sizeA + j] = b[j];
}

int main()
{
    char a[] = "Hola";
    char b[] = "Jenny";
    size_t sizeA = sizeof(a)/sizeof(a[0]);
    size_t sizeB = sizeof(b)/sizeof(b[0]);
    size_t sizeC = sizeA + sizeB;
    char c[sizeC];

    concatenar(a, sizeA, b, sizeB, c, sizeC);
    print( c, sizeC);

    return 0;
}