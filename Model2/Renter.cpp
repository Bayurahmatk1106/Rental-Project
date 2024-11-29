/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include "Renter.h"

using namespace std;
/**
 * Renter implementation
 */


/**
 * @param name
 */
void Renter::setName(string name) {
    Name = name;
}

/**
 * @param id
 */
void Renter::setIdCard(string id) {
    IdCard = id;
}

/**
 * @param phone
 */
void Renter::setPhoneNumber(string phone) {
    PhoneNumber = phone;
}

/**
 * @param mail
 */
void Renter::setEmail(string mail) {
    Email = mail;
}

/**
 * @param gender
 */
void Renter::setGender(bool gender) {
    Gender = gender;
}

/**
 * @param address
 */
void Renter::setAddress(string address) {
    Address = address;
}

/**
 * @param license
 */
void Renter::setDrivingLicense(string license) {
    DrivingLicense = license;
}

string Renter::getName() {
    return Name;
}

string Renter::getIdCard() {
    return IdCard;
}

string Renter::getPhoneNumber() {
    return PhoneNumber;
}

string Renter::getEmail() {
    return Email;
}

string Renter::getGender() {
    if (Gender == true){
        return "Laki - laki";
    } else {
        return "Perempuan";
    }
}

string Renter::getAddress() {
    return Address;
}

string Renter::getDrivingLicense() {
    return DrivingLicense;
}

void Renter::showProfile() {
    cout << "Name : \t" << getName() << '\n';
    cout << "Id Card Number : " << getIdCard() << '\n';
    cout << "E - Mail : \t" << getEmail() << '\n';
    cout << "Phone Number : " << getPhoneNumber() << '\n';
    cout << "Gender: \t" << getGender() << '\n';
    cout << "Adress : \t" << getAddress() << '\n';
    cout << "Driving License : " << getDrivingLicense() << '\n';
}

void Renter::askRent() {
    
}

Renter::Renter(string n, string I, string p, string e, bool g, string adrs, string dl){
    Name = n;
    IdCard = I;
    PhoneNumber = p;
    Email = e;
    Gender = g;
    Address = adrs;
    DrivingLicense = dl;
}