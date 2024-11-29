/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

void Car::setType(string tipe){
    Type = tipe;
}
void Car::setPoliceNumber(string plnumber){
    PoliceNumber = plnumber;
}
void Car::setColor(string color){
    Color = color;
}
void Car::setSeat(int seat){
    Seat = seat;
}
void Car::setPrice(double price){
    Price = price;
}
Car::Car(string tip, string plc, string clr, int st, double prc){
    Type = tip; PoliceNumber = plc; Color = clr; Seat = st;Price = prc;
}