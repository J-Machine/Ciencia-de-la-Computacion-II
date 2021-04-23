/*
    2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin ningún resto.
    ¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?
*/
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    for(long int i = 100; i < 1000; i++)
    {
        for(long int j = 100; j < 1000; j++)
        {
            long int prod = i*j;
            cout<<to_string(prod)<<endl;
        }
    }
    return 0;
}