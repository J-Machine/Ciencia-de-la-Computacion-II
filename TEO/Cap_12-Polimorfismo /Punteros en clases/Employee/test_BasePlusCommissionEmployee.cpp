// Fig. 11.9: fig11_09.cpp
// BasePlusCommissionEmployee class test program.

//  * Para ejecutar correctamente: 
//    g++ test_BasePlusCommissionEmployee.cpp BasePlusCommissionEmployee.cpp CommissionEmployee.cpp

#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main()
{
    cout << "BasePlusCommissionEmployee test: \n\n";

    // instantiate BasePlusCommissionEmployee object
    BasePlusCommissionEmployee employee{"Bob", "Lewis", "333-33-3333",
                                        5000, .04, 300};
    // get commission employee data
    cout << fixed << setprecision(2); // set floating-point formatting
    cout << "Employee information obtained by get functions: \n"
         << "\nFirst name is " << employee.getFirstName()
         << "\nLast name is " << employee.getLastName()
         << "\nSocial security number is " << employee.getSocialSecurityNumber()
         << "\nGross sales is " << employee.getGrossSales()
         << "\nCommission rate is " << employee.getCommissionRate()
         << "\nBase salary is " << employee.getBaseSalary() << endl;
    employee.setBaseSalary(1000); // set base salary
    cout << "\nUpdated employee information from function toString: \n\n" << employee.toString();
    
    // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}