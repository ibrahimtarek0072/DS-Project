//
// Created by ibrahim on 7/14/2021.
//

#include "treap.h"
treap::treap() {

}

treap::treap(int key) {
    this->key=key;
    left=right=NULL;
}
treap* newNode(string name)
{
    treap* temp = new treap;
    temp->userName = name;
    temp->left = temp->right = NULL;
    return temp;
}
treap* rightrotet(treap* node){
    treap* x=node->left;
    treap* t=x->right;
    x->right=node;
    node->left=t;
}
treap* leftrotet(treap* node){
    treap*x=node->right;
    treap*t=x->left;
    x->left=node;
    node->right=t;
}

treap* insert(treap* root,int key,string name,users* user){
    if (!root)
        return newNode(name);
    if (key <= root->key)
    {
        root->left = insert(root->left, key,name,user);

        if (root->left->key > root->key)
            root = rightrotet(root);
    }
    else
    {
        root->right = insert(root->right, key,name,user);

        if (root->right->key > root->key)
            root = leftrotet(root);
    }
    return root;
}
void inorder(treap* root)
{
    if (root)
    {
        inorder(root->left);
        cout << "user name: "<< root->userName << " | priority: %d "
             << root->key;
        if (root->left)
            cout << " | left child: " << root->left->userName;
        if (root->right)
            cout << " | right child: " << root->right->userName;
        cout << endl;
        inorder(root->right);
    }
}
