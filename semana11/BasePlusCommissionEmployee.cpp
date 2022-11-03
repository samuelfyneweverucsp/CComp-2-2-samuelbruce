#include <iomanip>
#include <sstream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std; 
// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string& first, const string& last, const string& ssn,
    double sales, double rate, double salary)

// explicitly call base-class constructor
  : CommissionEmployee(first, last, ssn, sales, rate) {
 
setBaseSalary(salary); // validate and store base salary
}
// set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary) { 
    if (salary < 0.0) {
    throw invalid_argument("Salary must be >= 0.0");
    }
    baseSalary = salary;
}

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary; 
}

// calculate earnings
double BasePlusCommissionEmployee::earnings() const {
    // derived class cannot access base class' private data
    return baseSalary + (getCommissionRate() * getGrossSales());
}

string BasePlusCommissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);

    output << "base-salaried commission employee: " <<
    getFirstName() << ' ' 
    << getLastName() << "\nsocial security number: " 
    << getSocialSecurityNumber() 
    << "\ngross sales: " << getGrossSales() <<
    "\ncommission rate: "  << getCommissionRate()
    << "\nbase salary: " << getBaseSalary();

    return output.str();
}
