#include <iostream>
#include "DynamicArray.h"
#include "Person.h"
#include "Jugador.h"

using namespace std;


int main()
{   
    // Instancia personas
    Person p1 ("Ana", 11111);
    Person p2 ("Beto", 22222);
    Person p3 ("Carlos", 33333);
    Person p4 ("Diana", 44444);

    Person arr_p[] = {p1, p2, p3, p4};
    int tamP = sizeof(arr_p)/sizeof(arr_p[0]);

    DynamicArray<Person> personas(arr_p, tamP);
    
    // sobrecarga de Persona
    cout<<p1<<endl;
    // sobrecarga de Dynamic array
    cout<<personas<<endl;
    
    // Instanciar jugadores
    Jugador j1("Paolo Gurrero", 9, "Perú", "Delantero"); 
    Jugador j2("Jose Olaya",99, "Brasil", "Delantero"); 
    Jugador j3("Pedro Gallese",1, "Perú", "Arquero"); 
    Jugador j4("Jose de San Martin", 14, "Perú", "Mediocampista"); 

    // Arreglo de jugadores
    Jugador arr[] = {j1, j2, j3, j4};
    int tam = sizeof(arr)/sizeof(arr[0]);

    DynamicArray<Jugador> jugadores(arr, tam);

    // sobrecarga de Jugador
    cout<<j1<<endl;

    

    return 0;
j}
