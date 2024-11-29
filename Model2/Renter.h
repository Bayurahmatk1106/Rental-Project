/**
 * Project Untitled
 */


#ifndef _RENTER_H
#define _RENTER_H
#include <string>
using namespace std;

class Renter {
public: 
    
/**
 * @param name
 */
void setName(string name);
    
/**
 * @param id
 */
void setIdCard(string id);
    
/**
 * @param phone
 */
void setPhoneNumber(string phone);
    
/**
 * @param mail
 */
void setEmail(string mail);
    
/**
 * @param date
 */
void setBirthDate(string date);
    
/**
 * @param gender
 */
void setGender(bool gender);
    
/**
 * @param address
 */
void setAddress(string address);
    
/**
 * @param license
 */
void setDrivingLicense(string license);
    
string getName();
    
string getIdCard();
    
string getPhoneNumber();
    
string getEmail();
        
string getGender();
    
string getAddress();
    
string getDrivingLicense();
    
void showProfile();
    
void askRent();

Renter(string n, string I, string p, string e, bool g, string adrs, string dl);

renter

private: 
    string Name;
    string IdCard;
    string PhoneNumber;
    string Email;
    bool Gender;
    string Address;
    string DrivingLicense;
};

#endif //_RENTER_H