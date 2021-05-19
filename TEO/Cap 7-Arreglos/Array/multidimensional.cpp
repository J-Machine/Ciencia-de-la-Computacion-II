// Fig. 7.17: fig07_17.cpp
// Initializing multidimensional arrays.
#include <iostream>
#include <array>

using namespace std;

const size_t rows{2};
const size_t columns{3};

void printArray(const array<array<int, columns>, rows> &);

int main()
{
    array<array<int, columns>, rows> array1{1, 2, 3, 4, 5, 6};
    array<array<int, columns>, rows> array2{1, 2, 3, 4, 5};

    cout << "Values in array1 by row are:" << endl;
    printArray(array1);
    cout << "\nValues in array2 by row are:" << endl;
    printArray(array2);

    // Total de los elementos del array - Forma 1
    int total_1 = 0;
    for (size_t row{0}; row < array1.size(); ++row)
    {
        for (size_t column{0}; column < array1[row].size(); ++column)
        {
            total_1 += array1[row][column];
        }
    }
    cout << "\nTotal de array1: " << total_1 << endl;

    // Total de los elementos del array - Forma 2
    int total_2 = 0;
    for (auto row : array2)
    { // for each row
        for (auto column : row)
        { // for each column in row
            total_2 += column;
        }
    }
    cout << "\nTotal de array2: " << total_2 << endl;

}

// output array with two rows and three columns
void printArray(const array<array<int, columns>, rows> &a)
{
    // loop through array's rows
    for (auto const &row : a)
    {
        // loop through columns of current row
        for (auto const &element : row)
        {
            cout << element << ' ';
        }
        cout << endl; // start new line of output
    }
}