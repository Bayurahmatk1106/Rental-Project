/**
 * Project Untitled
 */


#ifndef _ADMIN_H
#define _ADMIN_H

class Admin {
public: 
    
/**
 * @param adminid
 */
void setAdminId(string adminid);
    
void getAdminId();
    
void acceptRent();
private: 
    string AdminId;
};

#endif //_ADMIN_H