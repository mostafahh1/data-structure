#pragma once
#include <iostream>
using namespace std;


struct node2
{
    node2* left;
    int data;
    node2* right;
};

class tree {
private:
    node2* root = nullptr;
    void insert_(int value,node2* &pnode);
    void breadth_first_(node2* node);
    void inorder_(node2* node);
    void preorder_(node2* node);
    void postorder_(node2* node);
    node2* search_(int value , node2* pnode);
public:
    tree();
    

    
    ~tree();
    void insert(int value);
    void breadth_first();
    void inorder();
    void preorder();
    void postorder();
    void deleteTree(node2* node);
    node2* search(int value);
};
