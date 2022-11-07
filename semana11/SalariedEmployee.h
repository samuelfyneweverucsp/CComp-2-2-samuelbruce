// Fig. 12.11: SalariedEmployee.h
// SalariedEmployee class derived from Employee.
#ifndef __SALARIED_H__
#define __SALARIED_H__

#include <string> // C++ standard string class
#include "Employee.h" // Employee class definition

class SalariedEmployee : public Employee {
public:
    SalariedEmployee(const std::string&,
    const std::string&,
    const std::string&, 
    double = 0.0);
    virtual ~SalariedEmployee() = default; // destructor virtual

    void setWeeklySalary(double); // establecer sueldo semanal
    double getWeeklySalary() const; // retornar sueldo semanal

    // keyword virtual señala que vamos a usar override

    virtual double earnings() const override; // calcular earnings
    virtual std::string toString() const override; // representación de string

private:
    double weeklySalary; // sueldo semanal

};

    SalariedEmployee operator++(SalariedEmployee persona) {
        persona.setWeeklySalary(persona.getWeeklySalary() + 1);
    }

#endif // __SALARIED_H__

