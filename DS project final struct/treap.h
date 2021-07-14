//
// Created by ibrahim on 7/14/2021.
//

#ifndef UNTITLED_TREAP_H
#define UNTITLED_TREAP_H
#include "users.h"
#include "List.h"

class treap {
public:
    treap* left;
    treap* right;
    string userName;
    int key;
    users * user;
    treap();
    treap(int);
};
treap* insert(treap* node,int key,string name,users* user);
treap* rightrotet(treap*node);
treap* leftrotet(treap*node);
void inorder(treap* root);



#endif //UNTITLED_TREAP_H
