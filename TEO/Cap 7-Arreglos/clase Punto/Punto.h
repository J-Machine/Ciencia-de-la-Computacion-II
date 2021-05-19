#ifndef __PUNTO_H__
#define __PUNTO_H__ ;

#include <iostream>

class Punto
{
    private:
        int x;
        int y;
    public:
        // constructor 
        Punto(int _x = 0, int _y = 0) : x(_x), y(_y) {}; // esta notacion solo se usa en el constructor
        void setX(int _x){
            x = _x;
        }
        void setY(int _y){
            y = _y;
        }
        int getX() const{  // const garantiza que solo sea de lectura la funcion
            return x;
        }
        int getY() const {
            return y;
        }
        void print() const {
            std::cout <<"("<<x<<","<<y<<")"<<std::endl;
        }
};

#endif