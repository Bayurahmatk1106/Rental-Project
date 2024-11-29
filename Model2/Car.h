/**
 * Project Untitled
 */

#ifndef _CAR_H
#define _CAR_H
#include <string>
using namespace std;

class Car {
public:
    void setType(std::string tipe);

    void setPoliceNumber(std::string plnumber);

    void setColor(std::string color);

    void setSeat(int seat);

    void setPrice(double price);

    Car(std::string ty, std::string plc, std::string clr, int st, double prc);

private: 
    std::string Type;
    std::string PoliceNumber;
    std::string Color;
    int Seat;
    double Price;
};

#endif //_CAR_H