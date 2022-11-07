#ifndef __BICYCLE_H__
#define __BICYCLE_H__

#include <iostream>
#include "CarbonFootprint.h"

class Bicycle : public CarbonFootprint {

public:
    Bicycle(double r) : annualRepairCosts(r) {}
    virtual double getCarbonFootprint();


private:
    double annualRepairCosts;

};

double Bicycle::getCarbonFootprint() {
    return annualRepairCosts;
}

#endif