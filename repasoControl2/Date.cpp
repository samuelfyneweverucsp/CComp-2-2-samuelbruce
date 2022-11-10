#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

const array<unsigned int, 13> Date::days{
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date(int m, int d, int y) {
    setDate(m, d, y);
    /* malo porque no averigua:
    this->month = month;
    this->day = day;
    this->year = year;
    */
}

void Date::setDate(int m, int d, int y) {
    if(m > 0 && m < 13) {month = m;} else {throw invalid_argument{"Month must be 01-12"};} 
    if(y >= 1900 && y <= 2100) {year = y;} else {throw invalid_argument{"Year must be 1900-2100 in this implementation"};}
    if(d >= 1 && d <= days[m]) {day = d;} else {throw invalid_argument{"Day is out of range for current month"};}
}
/*
Date& Date::operator++() { // prefixo
    helpIncrement();
    return *this;
}
*/

Date Date::operator++(int) { // posfixo
    /* Date temp{*this};
    temp.helpIncrement();

    return temp; */
    helpIncrement();
    return *this;
}


Date& Date::operator+=(unsigned int addDays) {
    for (unsigned int i = 0; i < addDays; i++) {
        helpIncrement();
    }

    return *this;
}

bool Date::endOfMonth(int testDay) const {
    return testDay == days[month];
}

void Date::helpIncrement() {
    if(!endOfMonth(day)) {
        day++;
    } else {
        if (month < 12) {
            month++;
        } else {
            month = 1;
            year++;
        }
        day = 1;
    }
}

std::ostream& operator <<(std::ostream& output, const Date fecha) {
    output << to_string(fecha.month) << "/" << to_string(fecha.day) << "/" << to_string(fecha.year) << endl;
    return output;
}
