#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int x, y;
    char z;

    // información de tipo usando operador typeid 
    const type_info &ti1 = typeid(x);
    const type_info &ti2 = typeid(y);
    const type_info &ti3 = typeid(z);

    // Imprimir los tipos
    cout << "ti1 es de tipo "
         << ti1.name() << endl;
 
    cout << "ti2 es de tipo "
         << ti2.name() << endl;
 
    cout << "ti3 es de tipo "
         << ti3.name() << endl;
    
    return 0;
}