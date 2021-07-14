//
// Created by ibrahim on 7/14/2021.
//

#ifndef UNTITLED_USERS_H
#define UNTITLED_USERS_H
#include <iostream>
using namespace std;
class users {
public:
    string name,Email,userName;
    users(string username,string name,string email);
    users();
    string getname();
    string getemail();
    string getusername();
    void print();

};


#endif //UNTITLED_USERS_H
