#include <iostream>

using namespace std;
class List{
    public:
    string name,Email,userName,FriendBST;
    List* next;

};
void addfriend(List *node){
    cout<<"Enter your friend name"<<endl;
string name;
cin>>name;
node->FriendBST=name;
}
void login(List** head_ref)
{
    List* new_node = new List();

    List *last = *head_ref;
    cout<<"Enter User Name to login"<<endl;
    string user;
    cin>>user;
    new_node->userName=user;
    cout<<"Enter you Name"<<endl;
    string name;
    cin>>name;
    new_node->name=name;
    cout<<"Enter your Email"<<endl;
    string Email;
    cin>>Email;
    new_node->Email=Email;
    addfriend(new_node);
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

void peopleYouMayKnow(List *node)
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
    cout<<"Welcome to our Application"<<endl;
    cout<<"\t created by Ibrahim tarek Mohamed"<<endl;
    cout<<"=================================="<<endl;
    cout<<endl;
    cout<<"1-login \n2-logout \n3-Exit \n";
    int choice;
    cin>>choice;
    switch(choice){
     case 1:{
    login(&head);
    break;
     }
    }

}
