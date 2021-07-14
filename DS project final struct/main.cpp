#include <iostream>
#include "users.h"
#include "List.h"
#include "treap.h"
using namespace std;


int main() {
    users u1("soad91","Soad Saber","soad91@gmail.com"),u2("olaa100","Ola Kamel","olaa100@yahoo.com"),
            u3("emadsalem1","Emad Salem","emadsalem1@gmail.com"),u4("abdoamr","Abdelkarim Amr","abdoamr@gmail.com"),
            u5("fatoom","Fatma Omar","fatoom@yahoo.com"),u6("mony34","Mona Hamed","mony34@gmail.com"),
            u7("emy2000","Iman Kareem","emy2000@gmail.com"),u8("talaat3000","Talaat Mahmoud","talaat3000@gmail.com"),
            u9("samir22","Samir Abdelshakoor","samir22@gmail.com");
    List* head=NULL;
    login(&head,u1);
    login(&head,u2);
    login(&head,u3);
    login(&head,u4);
    login(&head,u5);
    login(&head,u6);
    login(&head,u7);
    login(&head,u8);
    login(&head,u9);
    printList(head);
    treap* node=NULL;
    node=insert(node,1,"emadsalem1",&u8);
    node=insert(node,2,"olaa100",&u5);
    node=insert(node,3,"mony34",&u2);
    node=insert(node,4,"abdoamr",&u3);
    node=insert(node,5,"mony34",&u7);
    node=insert(node,6,"talaat3000",&u9);
    inorder(node);

}
