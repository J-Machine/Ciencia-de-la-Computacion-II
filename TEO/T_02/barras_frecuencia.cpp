
#include <iostream>
#include <string>
#include <array>


LibroCalificaciones::LibroCalificaciones( std::string nombre, int estudiantes)
{
    _nombreCurso = nombre;
    _numEstudiantes = estudiantes;
    _notas = new int[estudiantes];
}

// Functions members
void LibroCalificaciones::ingresarNotas()
{
    std::cout<<"Ingrese la nota (0 a 10) de los "<<_numEstudiantes<<" estudiantes: \n";
    unsigned int nota = 0;

    for (size_t i = 0; i < _numEstudiantes; i++)
    {
        std::cin>>nota;
        _notas[i] = nota;
        _frecuencias[nota]++;
    }
}
void LibroCalificaciones::verNotas() const 
{
    for(size_t i = 0; i <_numEstudiantes; i++)
        std::cout<<_notas[i]<<"\t";
}
float LibroCalificaciones::promedioNotas(){
    float suma = 0.0;
    for (size_t i = 0; i < _numEstudiantes; i++)
        suma += _notas[i];
    
    return suma/static_cast<float>(_numEstudiantes);
}

int LibroCalificaciones::minNota()
{
    int min = 10;

    for (size_t i = 0; i < _numEstudiantes; i++)
    {
        if (_notas[i] < min)
            min = _notas[i];
    }
    
    return min;
}

int LibroCalificaciones::maxNota()
{
    int max = 0;

    for (size_t i = 0; i < _numEstudiantes; i++)
    {
        if (_notas[i] > max)
            max = _notas[i];
    }
    return max;
}
void LibroCalificaciones::frecNotasBarras() const
{
    for (size_t i = 0; i < _frecuencias.size(); i++)
    {
        std::cout.width(4);std::cout<< std::left <<i;   // alineación L
        for (size_t j = 0; j < _frecuencias[i]; j++)
            std::cout<<"*";
        std::cout<<std::endl; 
    }
    
}


// Destructor
LibroCalificaciones::~LibroCalificaciones()
{
    delete [] _notas;
    _notas = NULL;
}