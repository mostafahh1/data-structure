#pragma once
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
class linked_list {
private:
    node* head = nullptr;
public:
    int length = 0;
    void front_insert(int value);
    void back_insert(int value);
    void delete_value_index(int value,int index);

    void front_delete();
    void back_delete();
    void delete_index(int index);
    void delete_value(int value);

    void display();

    linked_list();
    ~linked_list();
};
