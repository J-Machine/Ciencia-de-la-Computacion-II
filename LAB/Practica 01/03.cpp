/*
    Los factores primos de 13195 son 5, 7, 13 y 29. ¿Cuál es el factor primo más grande del número 600851475143?
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
    // int n = 13195;
    long int n = 600851475143;
    for (long int i = 2; i < sqrt(n)+1; i++ )
    {
        if(n%i == 0 && isPrimo(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}