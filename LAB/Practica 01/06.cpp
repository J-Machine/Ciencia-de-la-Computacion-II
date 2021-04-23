/*
    Por lo tanto, la diferencia entre la suma de los cuadrados de los primeros diez números naturales y el cuadrado de la suma es 3025−385 = 2640.
    Calcula la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.
*/
#include <iostream>
#include <cmath>
using namespace std;

long int suma (int n)
{
    long int result = n*(n+1)/2;
    cout<<result<<endl;
    return result;
}

long int sumaCuadrados (int n)
{
    long int result =  n*(n+1)*(2*n+1)/6;
    cout<<result<<endl;
    return result;
}
int main()
{
    cout<<(pow(suma(100),2)- sumaCuadrados(100))<<endl; // 25 164 150
    return 0;
}