/*
    Al considerar los términos en la secuencia de Fibonacci cuyos valores no exceden los cuatro millones, 
    encuentre la suma de los términos pares.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sum = 0;
    int f1 = 1;
    int f2 = 2;
    while (f1 <= 4000000)
    {
        if (f1%2 == 0)
            sum += f1;
        int temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    cout<<sum<<endl;
    return 0;
}