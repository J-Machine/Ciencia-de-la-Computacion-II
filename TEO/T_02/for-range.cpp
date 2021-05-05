#include <iostream>
#include <string>
#include <array>

using namespace std;

int main ()
{
    // Declaración e Inicializaion
    array<string, 5> frutas {"plátano", "naranja", "fresa", "melón", "piña"};
    
    // Mostrar factores de la tabla de multiplicar
    cout<<"Frutas que compré: ";
    
    // Uso de For basado en rango
    for (string fruta: frutas){
        cout<<fruta<<" ";
    }
    
    cout<<endl;

    
    /* ------------- Ejemplo modificación de un arreglo por referencia ------------- */

    array<int, 12> numeros {1,2,3,4,5,6,7,8,9,10,11,12};
    
    cout<<"\nNúmeros antes de ser modificados: ";
    for (int num: numeros)
        cout<<num<<" ";
    
    
    // Usando referencia para modificar los numeros
    for (int& num: numeros)
        cout<< endl<< num <<" x 13 = "<< (num*= 13);
    
    // Mostrar el arreglo modificado
    cout<<"\nNúmeros después de ser modificados: ";
    for (int num: numeros)
        cout<<num<<" ";
    
    cout<<endl;

    return 0;
}