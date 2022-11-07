#ifndef __CAR_H__
#define __CAR_H__

#include "CarbonFootprint.h"

class Car : public CarbonFootprint {

public:
    Car(double r, double k, double d) : annualRepairCosts(r), kpl(k), annualKilometersDriven(d) {}
    virtual double getCarbonFootprint();

private:
    double annualRepairCosts;
    double kpl;
    double annualKilometersDriven;


};

double Car::getCarbonFootprint() {
    return this->annualRepairCosts + this->annualKilometersDriven/this->kpl;
}



#endif