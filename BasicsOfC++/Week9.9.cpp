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

bool search(Node*& root, int data) {
	if (root == nullptr) return false;
	else if (root->data == data) return true;
	else if (data < root->data) return search(root->left, data);
	else if (data > root->data) return search(root->right, data);
}


int main() {
	Node* root = nullptr;
	int num;
	
	add(root, 10);
	add(root, 20);
	add(root, 15);
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;

	if (search(root, num) == true) std::cout << "found!" << std::endl;
	else std::cout << "Not found!" << std::endl;
	return 0;
}