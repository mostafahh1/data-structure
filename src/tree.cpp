#include "../include/tree.h"
#include <queue>

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

void tree::breadth_first(){
    breadth_first_(root);
}

void tree::breadth_first_(node2* node){
    if (node == nullptr){
        return;
    }

    queue<node2*> q;
    q.push(node);

    while (!q.empty()){
        node2* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != nullptr){
            q.push(current->left);
        }

        if (current->right != nullptr){
            q.push(current->right);
        }
    }
}



// Depth_First_Traversal
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

node2* tree::search(int value){
    return search_(value,root);
}

node2* tree::search_(int value , node2* pnode){
    if (pnode == nullptr){
        return nullptr;
    }

    if(pnode->data == value){
        return pnode;
    }else if(pnode->data > value){
        return search_(value ,pnode->left);
    }else{
        return search_(value ,pnode->right);
    }
    
}