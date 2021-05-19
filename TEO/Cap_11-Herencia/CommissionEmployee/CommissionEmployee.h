// Fig. 11.12: CommissionEmployee.h
// CommissionEmployee class definition with protected data.
// * Definición de clase CommissionEmployee que declara datos protegidos para permitir el acceso de clases derivadas.

#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ standard string class

class CommissionEmployee
{
    public:
        CommissionEmployee(const std::string &, const std::string &,
                        const std::string &, double = 0.0, double = 0.0);
        void setFirstName(const std::string &);            // set first name
        std::string getFirstName() const;                  // return first name
        void setLastName(const std::string &);             // set last name
        std::string getLastName() const;                   // return last name
        void setSocialSecurityNumber(const std::string &); // set SSN
        std::string getSocialSecurityNumber() const;       // return SSN
        void setGrossSales(double);                        // set gross sales amount
        double getGrossSales() const;                      // return gross sales amount
        void setCommissionRate(double);                    // set commission rate
        double getCommissionRate() const;                  // return commission rate
        double earnings() const;                           // calculate earnings
        std::string toString() const;                      // return string representation

    protected: // Datos protegidos
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
        double grossSales;     // gross weekly sales
        double commissionRate; // commission percentage
};
#endif