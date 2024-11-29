/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

class User {
public: 
    
/**
 * @param name
 */
void setName(string name);
    
/**
 * @param password
 */
void setPassword(string password);
    
void register();
    
void login();
    
void getName();
private: 
    string Name;
    string Password;
};

#endif //_USER_H