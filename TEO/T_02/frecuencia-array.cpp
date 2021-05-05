/**
 * Ejemplo barra de frecuencia con las notas de un grupo de estudiantes
*/
#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    const size_t arraySize{11};
    array<unsigned int, arraySize> notas{0, 0, 0, 0, 0, 0, 15, 2, 4, 2, 1};
    
    cout << "Distribución de notas:" << endl;

    // Para cada elemento del arreglo , una salida en un barra de frecuencias
    for (size_t i= 0; i < notas.size(); i++)
    {
        // Etiquetas para las barras de frecuencia ("0-9:", ..., "90-99:", "100:")
        if (0 == i)
            cout << " 0-9: ";
        else if (10 == i)
            cout << " 100: ";
        else
            cout << i * 10 << "-" << (i * 10) + 9 << ": ";

        // Imprimir barra de frecuencias en *
        for (unsigned int stars=0; stars < notas[i]; stars++)
            cout << '*';

        cout << endl; // Salto de linea
    }

    return 0;
}