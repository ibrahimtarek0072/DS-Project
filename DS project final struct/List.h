//
// Created by ibrahim on 7/14/2021.
//

#ifndef UNTITLED_LIST_H
#define UNTITLED_LIST_H
#include "users.h"

class List {
public:
    users user;
    List* next;
    List();
};
void login(List**head,users user);
void printList(List* head);

#endif //UNTITLED_LIST_H
