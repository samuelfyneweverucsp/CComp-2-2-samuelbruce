#ifndef __COMMISSION_H__
#define __COMMISSION_H__

#include <string>

class CommissionEmployee {
public:
    CommissionEmployee(const std::string&, 
    const std::string&, const std::string&,
    double = 0.0, double = 0.0);

    void setFirstName(const std::string&);
    std::string getFirstName() const;

    void setLastName(const std::string&);
    std::string getLastName() const;

    void setSocialSecurityNumber(const std::string&); // set SSN
    std::string getSocialSecurityNumber() const; // return SSN 
    
    void setGrossSales(double); // set gross sales amount
    double getGrossSales() const; // return gross sales amount 
    
    void setCommissionRate(double); // set commission rate (percentage)
    double getCommissionRate() const; // return commission rate 
    
    virtual double earnings() const; // calculate earnings
    virtual std::string toString() const; // create string representation 
protected:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage
};

#endif