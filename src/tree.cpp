#include "../include/tree.h"

tree::tree() {

}
tree::~tree() {
    deleteTree(root);
}

void tree::insert(int value){
    insert_(value,root);
}


void tree::insert_(int value,node2* &pnode){

    if(pnode == nullptr){

        node2* node = new node2;
        node->data = value;
        node->left = nullptr;
        node->right = nullptr;
        pnode = node;
        return;
    }



    if(pnode->data > value){
        // pnode = pnode->left;
        // insert_(value ,nodel);
        insert_(value ,pnode->left);
    }else{
        // pnode = pnode->right;
        // insert_(value ,noder);
        insert_(value ,pnode->right);
    }

}

void tree::inorder(){
    inorder_(root);
}

void tree::inorder_(node2* node){
    if (node !=nullptr){
        inorder_(node->left);
        cout << node->data << " ";
        inorder_(node->right);
    }
}

void tree::preorder(){
        preorder_(root);
}

void tree::preorder_(node2* node){
    if (node !=nullptr){
        cout << node->data << " ";
        preorder_(node->left);
        preorder_(node->right);
    }
}

void tree::postorder(){
    postorder_(root);
}

void tree::postorder_(node2* node){
    if (node !=nullptr){
        postorder_(node->left);
        postorder_(node->right);
        cout << node->data << " ";
    }
}


void tree::deleteTree(node2* node){
    if (node !=nullptr){
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }
}

