#include <iostream>

using namespace std;

void print(const int* arr, int tam)  // ptro al primer elemento de un array arr[] = *ptro arr?
{
    // ptro al primer elemento del array
    int tam1 = sizeof(arr) / sizeof(arr[0]);
    cout<< sizeof(arr)<< " - "<< sizeof(arr[0])<< endl;

    cout<<tam1<<endl;
    while(tam--)    // cuando tam = 0 
        cout<< *arr++<< " ";
    cout<<endl;
}

void intercambioWithMemo (int *ptr1, int* ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void intercambio( int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void invertir (int* ini, int* fin)
{
    cout<<ini<<" - "<< fin<< endl; 
    while(ini < fin)
        intercambio(*ini ++, *fin --);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int tam = sizeof(arr)/sizeof(arr[0]);   // lengh

    int *ptr = arr; // = &arr[0]

    invertir(arr, arr+tam -1);
    print(arr, tam);

    return 0;
}