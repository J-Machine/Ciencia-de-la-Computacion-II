#ifndef __JUGADOR_H__
#define __JUGADOR_H__

#include <iostream>
#include <string>

class Jugador
{
    private:
        std::string nombre;
        int numero;
        std::string equipo;
        std::string posicion;

    public:
        // constructores
        Jugador(std::string nombre, int numero, std::string equipo, std::string posicion);
        Jugador( Jugador &jugador);
        // getters
        std::string getNombre()const;
        int getNumero() const;
        std::string getEquipo() const;
        std::string getPosicion() const;
        // setters
        void setNombre(std::string _nombre);
        void setNumero(int _numero);
        void setEquipo(std::string _equipo);
        void setPosicion(std::string _posicion);
        // destructor
        ~Jugador();

        friend std::ostream& operator<<(std::ostream &out, const Jugador &j);
};      

// constructores
Jugador::Jugador(std::string nombre ="", int numero=0, std::string equipo="", std::string posicion=""){
    this->nombre = nombre;
    this->numero = numero;
    this->equipo = equipo;
    this->posicion = posicion;
}
Jugador::Jugador( Jugador &jugador){
    this->nombre = jugador.nombre;
    this->numero = jugador.numero;
    this->equipo = jugador.equipo;
    this->posicion = jugador.posicion;
}


// getters
std::string Jugador::getNombre()const{
    return nombre;
}
int Jugador::getNumero() const{
    return numero;
}
std::string Jugador::getEquipo() const{
    return equipo;
}
std::string Jugador::getPosicion() const{
    return posicion;
}

// setters
void Jugador::setNombre(std::string _nombre){
    this->nombre = _nombre;
}
void Jugador::setNumero(int _numero){
    this->numero = _numero;
}
void Jugador::setEquipo(std::string _equipo){
    this->equipo = _equipo;
}
void Jugador::setPosicion(std::string _posicion){
    this->posicion = _posicion;
}

std::ostream& operator<<(std::ostream &out, const Jugador &j){
    out << "Nombre: " << j.nombre << std::endl;
    out << "Número: " << j.numero << std::endl;
    out << "Equipo: " << j.equipo << std::endl;
    out << "Posicion: " << j.posicion << std::endl;
    return out;
}

// destructor
Jugador::~Jugador(){
}


#endif