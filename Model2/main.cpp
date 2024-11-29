#include <bits/stdc++.h>
#include <fstream>
#include "Renter.h"


using namespace std;

void menuPage(char& m);
void returnToMenu(bool& exit);

int main(){
    vector<Renter> renter;
    
    
    
    bool exit = true;
    cout << "Menu :\n";
    while (exit){
        char menu;
        menuPage(menu);
        if (menu == '1'){
            renter1.showProfile();
            returnToMenu(exit);
        } else if (menu == '2'){
            cout << "Innova";
            returnToMenu(exit);
        } else if (menu == '3'){
            exit = false;
        }
    }
    return 0;
}

void menuPage(char& m){
    cout << "1. Show Account Profile\n";
    cout << "2. View Available Cars\n";
    cout << "3. Exit\n";
    cout << "Your choice : "; cin >> m;
}

void returnToMenu(bool& exit){
    char back;
        cout << "\n1.Back to Main Menu\n 2.Exit\n";
        cout << "Your choice : ";  cin >> back;
        if (back == '2'){
            exit = false;
        } else if (back == '1'){
            cout << "Menu :\n";
            exit = true;
        }
}

void loginPage(){
    string nama, key;
    cout << "Name : "; cin >> nama;
    cout << "Password : "; cin >> key;
}

void registPage(){
    ofstream Myfile;
}

