// Binary Search Tree

// left nodes for the lesser and right nodes for the greater than
#include<iostream>
// next day


struct Node {
    int data;
    Node* left;
    Node* right;
};

void add(Node*& root, int data) {
    if (root == nullptr) {
        root = new Node{ data, nullptr, nullptr };
        return;
    }
    if (data < root->data)
        add(root->left, data);
    else if (data > root->data)
        add(root->right, data);
}

// Simple BST search
bool search(Node* root, int data) {
    if (root == nullptr) return false;
    if (root->data == data) return true;
    if (data < root->data) return search(root->left, data);
    else return search(root->right, data);
}

// Find minimum node (used in delete)
Node* findMin(Node* root) {
    while (root && root->left != nullptr)
        root = root->left;
    return root;
}

// Delete node from BST
Node* Delete(Node* root, int data) {
    if (root == nullptr) return root;

    if (data < root->data)
        root->left = Delete(root->left, data);
    else if (data > root->data)
        root->right = Delete(root->right, data);
    else {
        // Case 1: No child
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        // Case 2: One child
        else if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = Delete(root->right, temp->data);
    }
    return root;
}

int main() {
    Node* root = nullptr;
    add(root, 10);
    add(root, 20);
    add(root, 15);

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (search(root, num))
        std::cout << "Found!\n";
    else
        std::cout << "Not found!\n";

    root = Delete(root, num);
    return 0;
}
