#include <iostream>

using namespace std;

class List{
    public:
    string name,Email,userName,FriendBST;
    List* next;

};
void login(List** head_ref,string userName,string Email,string name)
{
    List* new_node = new List();

    List *last = *head_ref;

    new_node->name = name;
    new_node->Email=Email;
    new_node->userName=userName;


    new_node->next = NULL;


    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}
/**
login function if we suppose that the friend will sorted in linked list and the tree will be for search only
void login(List** head_ref,string userName,string Email,string name,string FriendBST)
{
    List* new_node = new List();

    List *last = *head_ref;

    new_node->name = name;
    new_node->Email=Email;
    new_node->userName=userName;
    new_node->FriendBST=FriendBST;


    new_node->next = NULL;


    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}*/

/**
print function may used like People may know in this project
**/
void printList(List *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->name<<" "<<node->Email<<" "<<node->userName<<" "<<node->FriendBST<<endl;
        node = node->next;
    }
}

int main()
{
    List* head=NULL;
    cout<<"Without friend \n";
    login(&head,"Soad Saber","soad91@gmail.com","soad91");
    login(&head,"Olaa Kamel","Olaa100@Yahoo.com","Olaa100");
    login(&head,"Emad Salem,","emadsalem@gmail.com","emadsalem1");
    login(&head,"abdoamr","Abdelkarim Amr","abdoamr@gmail.com");
    login(&head,"fatoom","Fatma Omar","fatoom@yahoo.com");
    login(&head,"mony34","Mona Hamed","mony34@gmail.com");
    login(&head,"emy2000","Iman Kareem","emy2000@gmail.com");
    login(&head,"talaat3000","Talaat Mahmoud","talaat3000@gmail.com");
    login(&head,"samir22","Samir Abdelshakoor","samir22@gmail.com");
    printList(head);
    /**
    cout<<"With Friend \n";
    List* head1=NULL;
    login(&head1,"Soad Saber","soad91@gmail.com","soad91");
    login(&head1,"Olaa Kamel","Olaa100@Yahoo.com","Olaa100","mony34");
    login(&head1,"Emad Salem,","emadsalem@gmail.com","emadsalem1","abdoamr");
    login(&head1,"abdoamr","Abdelkarim Amr","abdoamr@gmail.com");
    login(&head1,"fatoom","Fatma Omar","fatoom@yahoo.com","olaa100");
    login(&head1,"mony34","Mona Hamed","mony34@gmail.com");
    login(&head1,"emy2000","Iman Kareem","emy2000@gmail.com","mony34");
    login(&head1,"talaat3000","Talaat Mahmoud","talaat3000@gmail.com","emadsalem1");
    login(&head1,"samir22","Samir Abdelshakoor","samir22@gmail.com","talaat3000");
    printList(head1);**/

}
