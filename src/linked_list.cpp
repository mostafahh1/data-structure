#include "../include/linked_list.h"

linked_list::linked_list() {};
linked_list::~linked_list() {
    delete[] head;
};


void linked_list::front_insert(int value){
    node* newnode = new node;
    newnode->data = value;
    newnode->next = nullptr;
    head = newnode;
}
void back_insert(int value){}


void delete_value_index(int value,int index){}
void front_delete(){}
void back_delete(){}
void delete_index(int index){}
void delete_value(int value){}
