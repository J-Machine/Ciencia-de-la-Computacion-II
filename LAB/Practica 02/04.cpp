/* 
* Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int longitudIter(char cadena[])
{
    int sum = 0;
    for(int i = 0; cadena[i]!='\0'; i++, sum++);
    return sum;
}

int longitudRec(char cadena[], int pos)
{
    if(cadena[pos]!= '\0')
        return 1 + longitudRec(cadena, ++pos);
    return 0;
}

int main()
{
    char texto[] = "Ciencia de";

    cout<<longitudIter(texto)<<endl;
    cout<<longitudRec(texto, 0)<<endl;
    cout<<endl;
    return 0;
}