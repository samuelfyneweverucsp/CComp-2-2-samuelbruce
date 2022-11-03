#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <string>

class Employee {
    public:
        Employee(const std::string&, const std::string&, const std::string &);
        virtual ~Employee() = default; // compiler generates virtual destructor

        void setFirstName(const std::string&); // set first name
        std::string getFirstName() const; // return first name

        void setLastName(const std::string&); // set last name
        std::string getLastName() const; // return last name

        void setSocialSecurityNumber(const std::string&); // set SSN
        std::string getSocialSecurityNumber() const; // return SSN

        // pure virtual function makes Employee an abstract base class
        virtual double earnings() const = 0; // pure virtual POR el "= 0"
        virtual std::string toString() const; // virtual
    private:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
};

#endif // __EMPLOYEE_H__
