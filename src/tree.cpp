#include "../include/tree.h"

tree::tree() {

}
tree::~tree() {}

void tree::insert(int value){
    if(root == nullptr){
        root = new node2;
        root->data = value;
        root->left = nullptr;
        root->right = nullptr;
    }else{
        node2* Root = root; 
        insert_(value ,Root);
    }
}


void tree::insert_(int value,node2* &pnode){

    if(pnode->data > value){
        pnode = pnode->left;
    }else{
         pnode = pnode->right;     
    }

    if(pnode == nullptr){
        node2* node = new node2;
        node->data = value;
        node->left = nullptr;
        node->right = nullptr;
        pnode = node;
    }else{
        insert_(value ,pnode);
    }

}