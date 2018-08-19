//#include "stdafx.h"
#include <iostream>

using namespace std;

struct Node {
	long data;
	Node* left;
	Node* right;
};

Node* insert(Node* root, long value) {
	// Add your code here
	if (root == NULL) {
		Node* newItem = new Node();
		newItem->data = value;
		newItem->left = NULL;
		newItem->right = NULL;
		root = newItem;
	}
	else {
		if (value <= root->data) {
			root->left = insert(root->left, value);
		}
		else {
			root->right = insert(root->right, value);
		}
	}
	return root;
}

void print(Node* root) {
	// Add your code here
	if (root != NULL) {
		print(root->left);
		cout << root->data << " ";
		print(root->right);
	}
}

int main(int argc, const char * argv[]) {

	Node* tree = NULL;
	tree = insert(tree, 5);
	tree = insert(tree, 3);
	tree = insert(tree, 8);
	tree = insert(tree, 1);
	tree = insert(tree, 6);
	tree = insert(tree, 4);
	tree = insert(tree, 7);

	print(tree);

	//Result should be: 1 3 4 5 6 7 8

	return 0;
}
