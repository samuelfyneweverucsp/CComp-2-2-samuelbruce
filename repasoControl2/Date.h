#ifndef __DATE_H__
#define __DATE_H__

#include <array>
#include <iostream>

class Date {
    friend std::ostream& operator <<(std::ostream&, const Date);
public:
    Date(int m = 1, int d = 1, int y = 2000);
    void setDate(int, int, int);
    Date& operator++();   // prefixo
    // Date operator++(int); // posfixo
    Date& operator+=(unsigned int);
    static bool leapYear(int yr);
    bool endOfMonth(int d) const;
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;

    static const std::array<unsigned int, 13> days;
    void helpIncrement();

};


#endif