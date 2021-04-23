/*
    Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto primo es 13.
¿Cuál es el número primo 1001avo?
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrimo (int n)
{
    for (int i = 2; i < n; i++) 
    {
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    long int i = 1;
    long int n = 0;
    while( n < 10001)
    {
        i++;
        if (isPrimo(i)) {
            n++;                
        }
    }
    cout<<i<<endl; // 104743
}