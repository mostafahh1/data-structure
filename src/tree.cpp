#include "../include/tree.h"

tree::tree() {

}
tree::~tree() {}

void tree::insert(int value){
    if(root == nullptr){
        node2* fristnode = new node2; 
        root = fristnode;
        root->data = value;
        root->left = nullptr;
        root->right = nullptr;
    }else{
        node2* Root = root; 
        insert_(value ,Root);
    }
}


void tree::insert_(int value,node2* pnode){

    if(pnode->data > value){
        pnode = pnode->left;
    }else{
         pnode = pnode->right;     
    }

    if(pnode == nullptr){
        pnode->data = value;
        pnode->left = nullptr;
        pnode->right = nullptr;
    }else{
        insert_(value ,pnode);
    }

}