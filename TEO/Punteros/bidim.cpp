#include <iostream> 
using namespace std;

int main()
{
    // Regla de un arreglo bidimensional
    // 
    int c[3][2][2]={0,0,0};
    cout << "c[0] = " << c[0] << endl;
    cout << "&c = " << &c << endl;
    cout << "c = " << c << endl;
    return 0;
}