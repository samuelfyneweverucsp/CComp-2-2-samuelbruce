#ifndef __BUILDING_H__
#define __BUILDING_H__

#include "CarbonFootprint.h"

class Building : public CarbonFootprint {

public:
    Building(double elec, double gas) : electricityKWh(elec), gasKg(gas) {}
    virtual double getCarbonFootprint();

private:
    double electricityKWh;
    double gasKg;

};

double Building::getCarbonFootprint() {
    return (electricityKWh * 10) + (gasKg * 100);
}


#endif
