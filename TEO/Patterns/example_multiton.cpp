#include <iostream>
#include <vector>

const int LIMIT = 5;

class Multiton
{
    private:
        static std::vector<Multiton *> listOfInstancePtrs; // lista de punteros de instancia
        // Límite de objetos que esta clase devolverá en ciclo
        static int limit;
        // Índice actual de la llamada a la función getInstance ()
        static int currentIndex;
        // ID de cada objeto
        int mId;
        Multiton()
        {
            mId = currentIndex + 1;
        }
    public:
        int getId()
        {
            return mId;
        }
        // Tamaño inicial del reservador
        static int reserverSize()
        {
            Multiton::listOfInstancePtrs.reserve(LIMIT);
            for(int i = 0; i < LIMIT; i++)
            {
                Multiton::listOfInstancePtrs[i] = NULL;
            }
            return LIMIT;
        }
        static Multiton *getInstance()
        {
            currentIndex = currentIndex % LIMIT;
            if(!Multiton::listOfInstancePtrs[currentIndex % limit])
            {
                Multiton::listOfInstancePtrs[currentIndex % limit] = new Multiton();
            }
            return Multiton::listOfInstancePtrs[currentIndex++ % limit];
        }
};

std::vector<Multiton *> Multiton::listOfInstancePtrs;
int Multiton::limit = Multiton::reserverSize();
int Multiton::currentIndex =  0;

int main()
{
    std::cout<<Multiton::getInstance()->getId()<<std::endl;
    std::cout<<Multiton::getInstance()->getId()<<std::endl;
    std::cout<<Multiton::getInstance()->getId()<<std::endl;
    std::cout<<Multiton::getInstance()->getId()<<std::endl;
    std::cout<<Multiton::getInstance()->getId()<<std::endl;
    std::cout<<Multiton::getInstance()->getId()<<std::endl;
    std::cout<<Multiton::getInstance()->getId()<<std::endl;
    
    return 0;
}