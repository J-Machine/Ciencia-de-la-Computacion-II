#include <iostream>
#include <iomanip> // Manipulación de la salida de datos
#include <array>

using namespace std;

int main ()
{
    // Declaración e Inicializaion
    array<int, 12> factores {1,2,3,4,5,6,7,8,9,10,11,12};
    
    // Mostrar factores de la tabla de multiplicar
    cout<<"Factores de la tabla de multiplicar: ";
    
    // Uso de For basado en rango
    for (int factor: factores)
    {
        cout<<factor<<" ";
    }

    return 0;
}