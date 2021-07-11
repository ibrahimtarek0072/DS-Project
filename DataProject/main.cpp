#include <iostream>

using namespace std ;
class treap{
public:
    treap** node;
    treap* left;
    treap*right;
    string userName;
    int key;
};

/*treap* insert(treap* node,int key){

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;


    node->hight = 1 + max(hight(node->left),
                           hight(node->right));

    int b = balance(node);



    if (b > 1 && key < node->left->key)
        return right_rotate(node);


    if (b < -1 && key > node->right->key)
        return left_rotate(node);


    if (b > 1 && key > node->left->key)
    {
        node->left = left_rotate(node->left);
        return right_rotate(node);
    }


    if (b< -1 && key < node->right->key)
    {
        node->right = right_rotate(node->right);
        return left_rotate(node);
    }

    return node;
}*/
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
        cout<<" "<<node->user.getname()<<" "<<node->user.getEmail()<<" "<<node->user.getuserName()<<" "<<node->user.getfriend()<<endl;
        node = node->next;
    }
}

int main()
{
    List* head=NULL;
    cout<<"Without friend \n";
    /*
    login(&head,"Soad Saber","soad91@gmail.com","soad91");
    login(&head,"Olaa Kamel","Olaa100@Yahoo.com","Olaa100");
    login(&head,"Emad Salem,","emadsalem@gmail.com","emadsalem1");
    login(&head,"abdoamr","Abdelkarim Amr","abdoamr@gmail.com");
    login(&head,"fatoom","Fatma Omar","fatoom@yahoo.com");
    login(&head,"mony34","Mona Hamed","mony34@gmail.com");
    login(&head,"emy2000","Iman Kareem","emy2000@gmail.com");
    login(&head,"talaat3000","Talaat Mahmoud","talaat3000@gmail.com");
    login(&head,"samir22","Samir Abdelshakoor","samir22@gmail.com");
    */
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
