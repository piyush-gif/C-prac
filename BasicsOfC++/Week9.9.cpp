// Binary Search Tree

// left nodes for the lesser and right nodes for the greater than
#include<iostream>
// next day

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* newNode(int data) {
	Node* newNode = new Node{data, nullptr, nullptr};
	return newNode;
}

void add(Node*& root, int data) {
	if (root == nullptr) {
		root = new Node{ data, nullptr, nullptr };
	}
	if (data < root->data)
		add(root->left, data);
	else if (data > root->data)
		add(root->right, data);

}


int main() {
	Node* root = nullptr;

	add(root, 10);
	add(root, 20);
	add(root, 15);
	return 0;
}