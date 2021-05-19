// Fig. 7.3: fig07_03.cpp
// Initializing an array's elements to zeros and printing the array.

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{

    // array<int, 5> n{}; // initialize elements of array n to 0

    array<int, 5> n; // n is an array of 5 int values
    // initialize elements of array n to 0
    for (size_t i{0}; i < n.size(); ++i)
    {
        n[i] = 0; // set element at location i to 0
    }
    cout << "Element" << setw(10) << "Value" << endl;
    // output each array element's value
    for (size_t j{0}; j < n.size(); ++j)
    {
        cout << setw(7) << j << setw(10) << n[j] << endl;
    }

    cout << "-------------------------" << endl;

    // Fig. 7.4: fig07_04.cpp
    // Initializing an array in a declaration.

    array<int, 5> m{32, 27, 64, 18, 95}; // list initializer
    cout << "Element" << setw(10) << "Value" << endl;

    // output each array element's value
    for (size_t i{0}; i < m.size(); ++i)
    {
        cout << setw(7) << i << setw(10) << m[i] << endl;
    }

    cout << "-------------------------" << endl;

    // Fig. 7.5: fig07_05.cpp
    // Set array s to the even integers from 2 to 10. With const vr y operations

    // constant variable can be used to specify array size
    const size_t arraySize{5};    // must initialize in declaration
    array<int, arraySize> values; // array values has 5 elements

    for (size_t i{0}; i < values.size(); ++i)
    {                          // set the values
        values[i] = 2 + 2 * i; // Inicia en zero
    }

    cout << "Element" << setw(10) << "Value" << endl;
    // output contents of array s in tabular format
    for (size_t j{0}; j < values.size(); ++j)
    {
        cout << setw(7) << j << setw(10) << values[j] << endl;
    }

    cout << "-------------------------" << endl;

    // Fig. 7.6: fig07_06.cpp
    // Compute the sum of the elements of an array.
    
    const size_t arraySize_2{4}; // specifies size of array
    array<int, arraySize_2> a{10, 20, 30, 40};
    
    int total{0};
    // sum contents of array a
    for (size_t i{0}; i < a.size(); ++i)
    {
        total += a[i];
    }
    cout << "Total of array elements: " << total << endl;
}