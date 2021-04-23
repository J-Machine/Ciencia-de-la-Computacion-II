#include <iostream>
#include <cmath>

using namespace std;
void invertir( int array[], int tam)
{
    int temp = 0;
    for (int i= 0; i < tam; i++) {
        temp = array[i];
        array[i] = array[--tam]; // disminuyendo tam en cada iteración
        // cout<<array[tam]<<endl;
        array[tam] = temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int tam = sizeof(arr)/sizeof(arr[0]);

    invertir(arr, tam);
    
    for (int i=0; i < tam; i++)
        cout<<arr[i]<<" ";

    return 0;
}