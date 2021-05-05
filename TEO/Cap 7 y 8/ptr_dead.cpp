#include <iostream>

using namespace std;

// SEGEMENTENCION FAULT  - ERROR

int* fun2( int &a)  // referencia
{
    return &a;  // dir memory
}

// int* fun()
// {
//     int x = 10; // muere la  var aquí
//     return &x;  // Retorna un valor que es invalido . apunta a ago muerto
//     // estoy retornando una direccion de una var local, que luego no podré acceder.
// }

int* fun3()
{
    int *ptr = new int;
    *ptr = 100;
    return ptr;
}

int main()
{
    // int *ptr = func();
    // cout<<*ptr<<endl;

    int x = 10;
    int *ptr2 = fun2(x);
    cout<<*ptr2<<endl;

    int *ptr3 = fun3(); //return una direccion de memoria
    cout<<*ptr3<<endl;
    return 0;
}