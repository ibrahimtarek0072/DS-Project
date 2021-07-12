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
    UserName(){
    }
    UserName(string username,string name,string email){
        this->name=name;
        this->Email=email;
        this->userName=username;
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
        if(node->user.userName!=name){
            return;
        }
        else{
            cout<<"the user name must be unique \n";
            exit(1);
        }
    }

}
void login_new_user(List** head_ref,UserName user)
{
    string name,username,email;
    List* new_node = new List();

    List *last = *head_ref;
    new_node->user=user;
    cout<<"Enter your name \n";
    cin>>name;
    new_node->user.name=name;
    cout<<"Enter Your Email \n";
    cin>>email;
    new_node->user.Email=email;
    cout<<"Enter User naem \n";
    cin>>username;
    new_node->user.userName=username;
    unique(new_node,new_node->user.userName);
    cout<<"Your info has been stored \n ===================== \n";
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
void login(List** head_ref,UserName user)
{
    List* new_node = new List();
    List *last = *head_ref;
    new_node->user=user;
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
    UserName u1("soad91","Soad Saber","soad91@gmail.com"),u2("olaa100","Ola Kamel","olaa100@yahoo.com"),
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
    /*List* head=NULL;
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
    login(&head,user3);*/

}
