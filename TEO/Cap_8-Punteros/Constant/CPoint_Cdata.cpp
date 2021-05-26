/*
The minimum access privilege is granted by a constant pointer to constant data:
• such a pointer always points to the same memory location, and
• the data at that location cannot be modified via the pointer.

This is how a built-in array should be passed to a function that only reads from the array,
using array subscript notation, and does not modify it. The program of Fig. 8.12 declares
pointer variable ptr to be of type const int* const (line 12). This declaration is read from
right to left as “ ptr is a constant pointer to an integer constant.” 

The figure shows the Xcode
LLVM compiler’s error messages that are generated when an attempt is made to modify
the data to which ptr points (line 16) and when an attempt is made to modify the address
stored in the pointer variable (line 17)—these show up on the lines of code with the errors
in the Xcode text editor. In line 14, no errors occur when the program attempts to deref-
erence ptr , or when the program attempts to output the value to which ptr points, be-
cause neither the pointer nor the data it points to is being modified in this statement.
*/

// Fig. 8.12: fig08_12.cpp
// Attempting to modify a constant pointer to constant data.
#include <iostream>
using namespace std;
int main()
{
    int x{5}, y;
    // ptr is a constant pointer to a constant integer.
    // ptr always points to the same location; the integer
    // at that location cannot be modified.
    const int *const ptr{&x};
    cout << *ptr << endl;
    *ptr = 7; // error: *ptr is const; cannot assign new value
    ptr = &y; // error: ptr is const; cannot assign new address
}