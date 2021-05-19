// Fig. 12.19: fig12_19.cpp
// Demostrar información de tipo downcasting y runtime.
// NOTA: Es posible que deba habilitar RTTI en su compilador antes de poder compilar esta aplicación.

// * g++ ejemplo_downcasting_runtime_type.cpp Employee/SalariedEmployee.cpp  Employee/CommissionEmployee.cpp Employee/BasePlusCommissionEmployee.cpp Employee/Employee.cpp

#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>

#include "Employee/Employee.h"
#include "Employee/SalariedEmployee.h"
#include "Employee/CommissionEmployee.h"
#include "Employee/BasePlusCommissionEmployee.h"

using namespace std;

int main()
{
    // set floating-point output formatting
    cout << fixed << setprecision(2);
   
    // create and initialize vector of three base-class pointers
    vector<Employee *> employees{
        new SalariedEmployee("John", "Smith", "111-11-1111", 800),
        new CommissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06),
        new BasePlusCommissionEmployee(
            "Bob", "Lewis", "444-44-4444", 5000, .04, 300)};
 
    // polymorphically process each element in vector employees
    for (Employee *employeePtr : employees)
    {
        cout << employeePtr->toString() << endl; // output employee
        // attempt to downcast pointer
        BasePlusCommissionEmployee *derivedPtr =
            dynamic_cast<BasePlusCommissionEmployee *>(employeePtr);
        // determine whether element points to a BasePlusCommissionEmployee
        if (derivedPtr != nullptr)
        { // true for "is a" relationship
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout << "old base salary: $" << oldBaseSalary << endl;
            derivedPtr->setBaseSalary(1.10 * oldBaseSalary);
            cout << "new base salary with 10% increase is: $"
                 << derivedPtr->getBaseSalary() << endl;
        }
        cout << "earned $" << employeePtr->earnings() << "\n\n";
    }
 
    // release objects pointed to by vector’s elements
    for (const Employee *employeePtr : employees)
    {
        // output class name
        cout << "deleting object of "
             << typeid(*employeePtr).name() << endl;
        delete employeePtr;
    }
}