/*
* Hacer un progrma en C, C++ que muestre un menú que integre 
*los métodos de ordenamiento anteriormente mostrados.
*/
#include <iostream>
using namespace std;

/* Funciones de los tipos de ordenamiento*/
void burbuja(int a[], int tam)
{
    for (int i = 0; i < tam - 1; i++)
        for (int j = i; j < tam; j++)
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

void insercion(int a[], int tam)
{
    int i, temp, j;
    for (i = 1; i < tam; i++)
    {
        temp = a[i];
        j = i - 1;
        while ((j >= 0) && (temp < a[j]))
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
}

void seleccion(int a[], int tam)
{
    int indiceMenor, i, j, temp;
    for (i = 0; i < tam - 1; i++)
    {
        //comienzo de la exploración en índice i
        indiceMenor = i;
        //j explora la sublista a[i+1]..a[n-1]
        for (j = i + 1; j < tam; j++)
            if (a[j] < a[indiceMenor])
                indiceMenor = j;
        temp = a[indiceMenor];
        a[indiceMenor] = a[i];
        a[i] = temp;
    }
}

void showArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

/* ****************** MAIN FUNCTION *************************/
int main()
{
    int option;
    int size;

    cout << "** ORDENAMIENTO DE LISTAS POR DIFERENTES MÉTODOS **\n"
         << "Ingrese el tamaño de su lista de números: ";
    cin >> size;

    // Inicializando y llenando la lista de números a ordenar
    int numList[size];
    cout << "Ingrese los números:\n";
    for (int i = 0; i < size; i++)
        cin >> numList[i];

    do
    {
        cout << "\nSeleccione un número para usar un método de ordenamiento:\n"
             << "---------------------------------------------------------\n"
             << " 1. Ordenamiento de Burbuja\n"
             << " 2. Ordenamiento por Inserción\n"
             << " 3. Ordenamiento por Selección\n";
        cin >> option;

        cout << "Su lista ordenada es:\n";
        switch (option)
        {
        case 1:
            burbuja(numList, size);
            showArray(numList, size);
            cout << endl;
            break;
        case 2:
            insercion(numList, size);
            showArray(numList, size);
            cout << endl;
            break;
        case 3:
            seleccion(numList, size);
            showArray(numList, size);
            cout << endl;
            break;

        default:
            cout << "Ingrese una opción válida\n";
            break;
        }
        cout << endl;

    } while (option < 1 || option > 3); //  Seguira ejecutandose si la opcion elegida no estan entre el rango 1 a 3

    //system("pause"); // Descomentar pause para windows
    return 0;
}
// Caso a probar: 67,8,15,44,27,12,35 -> 8 12 15 27 35 44 97