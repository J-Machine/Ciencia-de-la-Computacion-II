/*
A constant pointer to nonconstant data is a pointer that:
• always points to the same memory location, and
• the data at that location can be modified through the pointer.
Pointers that are declared const must be initialized when they’re declared, but if the pointer
is a function parameter, it’s initialized with the pointer that’s passed to the function.

Figure 8.11 attempts to modify a constant pointer. Line 9 declares pointer ptr to be
of type int* const . The declaration is read from right to left as “ ptr is a constant pointer
to a nonconstant integer.” The pointer is initialized with the address of integer variable x .
Line 12 attempts to assign the address of y to ptr , but the compiler generates an error mes-
sage. No error occurs when line 11 assigns the value 7 to *ptr —the nonconstant value to
which ptr points can be modified using the dereferenced ptr , even though ptr itself has
been declared const
*/

// Fig. 8.11: fig08_11.cpp
// Attempting to modify a constant pointer to nonconstant data.
int main()
{
    int x, y;
    // ptr is a constant pointer to an integer that can be modified
    // through ptr, but ptr always points to the same memory location.
    int *const ptr{&x}; // const pointer must be initialized
    *ptr = 7;           // allowed: *ptr is not const
    ptr = &y;           // error: ptr is const; cannot assign to it a new address
}