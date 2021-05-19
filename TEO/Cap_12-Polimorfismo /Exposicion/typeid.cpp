#include <iostream>
#include <typeinfo>
using namespace std;
 
int main()
{
    int i, j;
    char c;
 
    // Obtener la información del tipo usando el operador typeid
    const type_info& ti1 = typeid(i);
    const type_info& ti2 = typeid(j);
    const type_info& ti3 = typeid(c);
 
    // Comprobar si ambos tipos son iguales
    if (ti1 == ti2)
        cout << "i y j son de"
             << " tipo similar" << endl;
    else
        cout << "i y j son de"
             << " tipo diferente" << endl;
 
    // Comprobar si ambos tipos son iguales
    if (ti2 == ti3)
        cout << "j y c son de"
             << " tipo similar" << endl;
    else
        cout << "j y c son de"
             << " tipo diferente" << endl;
 
    return 0;
}