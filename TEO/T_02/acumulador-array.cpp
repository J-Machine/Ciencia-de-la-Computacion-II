/*
    Usar los elementos de una matriz como contadores de 200 lanzamientos de un dado
*/
#include <iostream>
#include <ctime>
#include <iomanip>
#include <array>

using namespace std;

/* Protipo de Funciones */
unsigned int tirarDados();

/* Función Principal */
int main()
{
    srand(static_cast<unsigned int>(time(0))); 
    
    const size_t tam = 6;
    array <int, tam> dado = {};
    // Posicion      0 1 2 3 4 5
    // Cara Dado     1 2 3 4 5 6

    for (int i = 0; i < 200; i++)           // 200 lanzamientos
       dado[(tirarDados() - 1)]++;

    // Mostrar el arreglo con frecuencias
    cout<<"Cara"<<setw(20)<<"Frecuencias"<<endl;
    for(size_t i = 0; i < dado.size() ;i++)
        cout<<i+1<<setw(20)<<dado[i]<<endl; 


    cout<<endl;
    return 0;
}

/* Funciones */
unsigned int tirarDados()
{
    return rand() % 6 + 1; //Devuelve un número del 1 al 6
}