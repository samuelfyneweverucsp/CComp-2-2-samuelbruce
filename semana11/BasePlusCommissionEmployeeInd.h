#ifndef __BASEPLUSIND_H__
#define __BASEPLUSIND_H__

#include <string>

class BasePlusCommissionEmployeeInd {
    public:
        BasePlusCommissionEmployeeInd(const std::string& first, 
        const std::string& last,
        const std::string& ssn);

        void setFirstName(const std::string&);
        std::string getFirstName() const;

        void setLastName(const std::string&); // set last name
        std::string getLastName() const; // return last name 19
        void setSocialSecurityNumber(const std::string&); // set SSN
        std::string getSocialSecurityNumber() const; // return SSN 22
        void setGrossSales(double); // set gross sales amount
        double getGrossSales() const; // return gross sales amount 25
        void setCommissionRate(double); // set commission rate
        double getCommissionRate() const; // return commission rate 28

        void setBaseSalary(double); // set base salary
        double getBaseSalary() const; // return base salary

        double earnings() const; // calculate earnings
        std::string toString() const; // create string representation 
    private:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;

        double grossSales; // gross weekly sales
        double commissionRate; // commission percentage 40
 
};


#endif