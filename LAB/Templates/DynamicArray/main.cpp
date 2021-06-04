#include <iostream>
#include "DynamicArray.h"
#include "Jugador.h"

using namespace std;


int main()
{   
    // Instanciar jugadores
    Jugador j1("Paolo Gurrero", 9, "Perú", "Delantero"); 
    Jugador j2("Jose Olaya",99, "Brasil", "Delantero"); 
    Jugador j3("Pedro Gallese",1, "Perú", "Arquero"); 
    Jugador j4("Jose de San Martin", 14, "Perú", "Mediocampista"); 

    // Arreglo de jugadores
    Jugador arr[] = {j1, j2, j3, j4};
    int tam = sizeof(arr)/sizeof(arr[0]);

    DynamicArray<Jugador> jugadores(arr, tam);

    
    // Sobrecarga el operador de salida para la clase jugador
    // Sobrecarga el operador de salida para la clase Persona
    // Sobrecarga el operador de salida para la clase DynamicArray
    
    jugadores.print();

    return 0;
}
