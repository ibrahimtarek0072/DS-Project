#include <iostream>

using namespace std ;
class UserName{
public:
    string name,Email,userName,FriendBST;
    string getname(){
        return name;
    }
    string getEmail(){
    return Email;
    }
    string getuserName(){
        return userName;
    }
    string getfriend(){
        return FriendBST;
    }

};
class List{
    public:
    UserName user;
    List* next;

};
class treap{
public:
    treap* left;
    treap*right;
    string userName;
    int key;
    List** list;
    treap();
    treap(int key){
        this->key=key;
        left=right=NULL;
    }
    treap(int key,string name);
};
treap* insert(treap* node,int key,string name){
    if(!node){
        return new treap(key);
    }
    if(key>node->key){
        node->right=insert(node->right,key,name);
    }
    else{
        node->left=insert(node->left,key,name);
    }
    return node;

}


void unique(List* node,string name){
    while (node != NULL)
    {
        if(node->user.userName==name){
            cout<<"the user name must be unique \n";
            return;
        }
    }

}
void login(List** head_ref,UserName user)
{
    List* new_node = new List();

    List *last = *head_ref;
    new_node->user=user;
    unique(new_node,new_node->user.userName);
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

void printList(List *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->user.getname()<<" "<<node->user.getEmail()<<" "<<node->user.getuserName()<<" "<<node->user.getfriend()<<endl;
        node = node->next;
    }
}

int main()
{
    List* head=NULL;
    UserName user;
    user.name="ibrahim";
    user.Email="Ibrahim@gmail.com";
    user.userName="ibra0007";
    user.FriendBST="mostafa";
    UserName user2;
    user2.name="mohamed";
    user2.Email="mohamed@gmail.com";
    user2.userName="mohamed 21";
    user2.FriendBST="ihabe";
    login(&head,user);
    login(&head,user2);
    printList(head);
    UserName user3;
    user3.userName="ibrahim";
    login(&head,user3);

}
