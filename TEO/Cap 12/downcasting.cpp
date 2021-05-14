#include <iostream>
using namespace std;

class Employee
{
    private:
        string FirstName;
        string LastName;
        double salary; 

    public:

        Employee(string fName, string lName, double sal) : FirstName(fName), LastName(lName), salary(sal){};
        string getFirstName() const { return FirstName;}
        string getLastName() const { return LastName;}
        double getSalary() const { return salary;}

        void show() { cout << "\nNombre: " << getFirstName() << "\nApellido: " << getLastName() << "\nSalario: " << getSalary() << endl; }
        void addBonus(double bonus) { salary += bonus;}
        virtual void extra(){};
};
class Manager : public Employee
{
    private:
        double commision;

    public:
        Manager(string fName, string lName, double sal, double comm) : Employee(fName, lName, sal), commision(comm){};
        double getComm() { return commision;}
};

class Clerk : public Employee
{
    private:
        Manager *manager = nullptr;

    public:
        Clerk(string fName, string lName, double sal, Manager *man) : Employee(fName, lName, sal), manager(man){};
        Manager *getManager() { return manager;}
        ~Clerk(){};
};
void congratulate(Employee *emp)
{
    cout << "Happy Birthday!!!" << endl;
    emp->addBonus(200);
    emp->show();
};

int main()
{
    // Puntero a objeto de clase base.
    Employee *empPtr = nullptr;

    //Objetos de clases derivadas
    Manager gerente01("Steve", "Kent", 3000, 0.2);
    Clerk empleado01("Kevin", "Jones", 1000, &gerente01);

    // upcasting implícito
    empPtr = &gerente01;

    // No presenta errores
    cout << empPtr->getFirstName() << endl;
    cout << empPtr->getSalary() << endl;

    // Falla porque se usa upcasting
    //cout<<empPtr->getComm(); //error: ‘class Employee’ has no member named ‘getComm’

    // Funcion de felicitación
    congratulate(&empleado01);
    congratulate(&gerente01);
    cout << "El gerente de " << empleado01.getFirstName() << " es " << empleado01.getManager()->getFirstName()<<endl;

    return 0;

}