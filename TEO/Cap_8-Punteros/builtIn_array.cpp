/* 
You can declare a built-in array parameter in a function header, as follows:

int sumElements(const int values[], const size_t numberOfElements)

which indicates that the function’s first argument should be a one-dimensional built-in ar-
ray of int s that should not be modified by the function. Unlike array objects, built-in ar-
rays don’t know their own size, so a function that processes a built-in array should have
parameters to receive both the built-in array and its size.

The preceding header can also be written as:

int sumElements(const int* values, const size_t numberOfElements)

The compiler does not differentiate between a function that receives a pointer and a function
that receives a built-in array. This, of course, means that the function must “know” when
it’s receiving a built-in array or simply a single variable that’s being passed by reference.
When the compiler encounters a function parameter for a one-dimensional built-in array
of the form const int values[] , the compiler converts the parameter to the pointer no-
tation const int* values (that is, “ values is a pointer to an integer constant”). These
forms of declaring a one-dimensional built-in array parameter are interchangeable.*/


#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // Initialize
    int n[5]{50, 20, 30, 10, 40};
    int n_2[]{50, 20, 30, 10, 40}; // el compilador toma el tamaño por el nro de elem.

    // Standard Library Functions begin and end
    sort(begin(n), end(n)); // sort contents of built-in array n

    // display items after modification
    cout << "\nitems after modification: ";
    for (int item : n)
    {
        cout << item << " ";
    }
    cout << endl;
    return 0;
}

/*
Built-in arrays and pointers are intimately related in C++ and may be used almost
interchangeably. Pointers can be used to do any operation involving array subscripting.
Assume the following declarations
    int b[ 5 ]; // create 5-element int array b; b is a const pointer
    int* bPtr; // create int pointer bPtr, which isn't a const pointer

We can set bPtr to the address of the first element in the built-in array b with the statement
    bPtr = b; // assign address of built-in array b to bPtr
This is equivalent to assigning the address of the first element as follows:
    bPtr = &b[0]; // also assigns address of built-in array b to bPtr

The expression
    b += 3
causes a compilation error, because it attempts to modify the value of the built-in array’s
name with pointer arithmetic.
*/