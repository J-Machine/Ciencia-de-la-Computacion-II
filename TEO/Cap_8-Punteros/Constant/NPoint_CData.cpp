/*
A nonconstant pointer to constant data is:
• a pointer that can be modified to point to any data of the appropriate type, but
• the data to which it points cannot be modified through that pointer.

Such a pointer might be used to receive a built-in array argument to a function that should
be allowed to read the elements, but not modify them. Any attempt to modify the data in
the function results in a compilation error. The declaration for such a pointer places const
to the left of the pointer’s type, as in 1
const int* countPtr;
The declaration is read from right to left as “ countPtr is a pointer to an integer constant”
or more precisely, “ countPtr is a non-constant pointer to an integer constant.”

Figure 8.10 demonstrates GNU C++’s compilation error message produced when
attempting to compile a function that receives a nonconstant pointer to constant data, then
tries to use that pointer to modify the data
*/

// Fig. 8.10: fig08_10.cpp
// Attempting to modify data through a
// nonconstant pointer to constant data.

void f(const int *); // prototype
int main()
{
    int y{0};
    f(&y); // f will attempt an illegal modification
}

// consItant variable cannot be modified through xPtr
void f(const int *xPtr)
{
    *xPtr = 100; // error: cannot modify a const object
}