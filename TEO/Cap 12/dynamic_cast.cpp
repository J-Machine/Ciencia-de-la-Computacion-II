// Dynamic_cast -> dynamic_cast<Type *>(ptr)

#include <iostream>
using namespace std;

class Base { virtual void vf(){} };

class Derived : public Base { void show(){cout<<"Hello"<<endl;} };

int main() 
{
	Base *pBDerived = new Derived;
	Base *pBBase = new Base;
	Derived *pd;

	pd = dynamic_cast<Derived*>(pBDerived);	//#1
	pd = dynamic_cast<Derived*>(pBBase);	//#2 

	return 0;
}