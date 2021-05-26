/*
The built-in array name can be treated as a pointer and used in pointer arithmetic. For
example, the expression
    *(b + 3)
also refers to the element b[3] . In general, all subscripted built-in array expressions can be
written with a pointer and an offset. In this case, pointer/offset notation was used with the
built-in array’s name as a pointer.
*/
#include <iostream>
 
using namespace std;

int main()
{
    int b[ 5 ] {10,20,30,40,50}; // create 5-element int array b; b is a const pointer
    int* bPtr; // create int pointer bPtr, which isn't a const pointer


    //offset
    cout << "Acceso a array por Offset: "
         << *(b + 3) <<endl;
    cout << "Acceso a array por suscription: "
         << b[3] <<endl;
    return 0;
}