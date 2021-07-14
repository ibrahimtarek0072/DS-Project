//
// Created by ibrahim on 7/14/2021.
//

#include "users.h"
users::users(){

}
users::users(string username,string name,string email){
    this->name=name;
    this->Email=email;
    this->userName=username;
}
string users::getname() {
    return name;
}
string users::getemail() {
    return Email;
}
string users::getusername() {
    return userName;
}
void users::print() {
    cout<<"Name: "<<getname()<<" ";
}

