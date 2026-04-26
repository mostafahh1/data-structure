#include <iostream>
#include "../include/linked_list.h"
#include "../include/doubly_linked_list.h"
#include "../include/stack.h"
#include "../include/queue.h"
#include "../include/dqueue.h"
#include "../include/tree.h"
using namespace std;

int main() {
	tree x;
	x.insert(11);
	x.insert(5);
	x.insert(20);
	x.insert(3);
	x.insert(6);
	x.insert(4);
	x.insert(8);
	x.insert(30);
	x.insert(22);
	x.inorder();
	cout << endl;
	x.preorder();
	cout << endl;
	x.postorder();
	cout << endl;

	x.insert(1);
	x.insert(3);
	x.inorder();
	cout << endl;
	x.preorder();
	cout << endl;
	x.postorder();
	cout << endl;

	node2* y = x.search(30);
	cout << y->left << y->data << y->right << endl;
	node2* z = x.search(10);
	cout << z->left << z->data << z->right << endl;
	return 0;
};