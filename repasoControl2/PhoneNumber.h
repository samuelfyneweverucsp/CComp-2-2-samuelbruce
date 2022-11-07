#ifndef __PHONENUM_H__
#define __PHONENUM_H__

#include <iostream>
#include <string>

class PhoneNumber {
    friend std::ostream& operator << (std::ostream&, const PhoneNumber);
    friend std::ostream& operator >> (std::ostream&, const PhoneNumber);

public:
    PhoneNumber(std::string areaCode = "616", std::string exchange = "802", std::string line = "2489");
    void setAreaCode(std::string);
    void setExchange(std::string);
    void setLine(std::string);

    std::string getAreaCode();
    std::string getExchange();
    std::string getLine();

private:
    std::string areaCode;
    std::string exchange;
    std::string line;


};


#endif