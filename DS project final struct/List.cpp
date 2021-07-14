//
// Created by ibrahim on 7/14/2021.
//

#include "List.h"
List::List() {

}
void login(List** head,users user){
    List* new_node = new List();
    List *last = *head;
    new_node->user=user;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head= new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;

}
void printList(List*node){
    while (node != NULL)
    {
        cout<<" "<<node->user.getname()<<" "<<node->user.getemail()<<" "<<node->user.getusername()<<endl;
        node = node->next;
    }
}