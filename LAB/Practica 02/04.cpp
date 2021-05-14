/* 
* Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int longitudIter(char cadena[])
{
    //aumenta el acumulador sum a medida que se recorre el array de char hasta llegar a \0
    int sum = 0;
    for(int i = 0; cadena[i]!='\0'; i++, sum++);
    return sum;
}

int longitudRec(char cadena[], int pos)
{
    //En cada llamada recursiva aumenta más 1 por cada char hasta llegar al final \0
    if(cadena[pos]== '\0')
        return 0;
    return 1 + longitudRec(cadena, ++pos);
}

int main()
{
    // char texto[] = "diferentes"; // 10
    char texto[] ="En el mundo tecnológico actual, todos utilizamos o formamos parte, de una u otra manera, de diferentes redes sociales, como blogs, Twitter, Facebook, LinkedIn, Google, etc. Y resulta de suma importancia contar con una herramienta como la que le ofrecemos, que le permita contar palabras y caracteres.";
    // tam = 301

    cout<<longitudIter(texto)<<endl;
    cout<<longitudRec(texto, 0)<<endl;
    
    cout<<endl;
    return 0;
}