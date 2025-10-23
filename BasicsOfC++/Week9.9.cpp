// Binary Search Tree

// left nodes for the lesser and right nodes for the greater than
//#include<iostream>
//// next day
//
//
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//};
//
//void add(Node*& root, int data) {
//    if (root == nullptr) {
//        root = new Node{ data, nullptr, nullptr };
//        return;
//    }
//    if (data < root->data)
//        add(root->left, data);
//    else if (data > root->data)
//        add(root->right, data);
//}
//
//// Simple BST search
//bool search(Node* root, int data) {
//    if (root == nullptr) return false;
//    if (root->data == data) return true;
//    if (data < root->data) return search(root->left, data);
//    else return search(root->right, data);
//}
//
//// Find minimum node (used in delete)
//Node* findMin(Node* root) {
//    while (root && root->left != nullptr)
//        root = root->left;
//    return root;
//}
//
//// Delete node from BST
//Node* Delete(Node* root, int data) {
//    if (root == nullptr) return root;
//
//    if (data < root->data)
//        root->left = Delete(root->left, data);
//    else if (data > root->data)
//        root->right = Delete(root->right, data);
//    else {
//        // Case 1: No child
//        if (root->left == nullptr && root->right == nullptr) {
//            delete root;
//            return nullptr;
//        }
//        // Case 2: One child
//        else if (root->left == nullptr) {
//            Node* temp = root->right;
//            delete root;
//            return temp;
//        }
//        else if (root->right == nullptr) {
//            Node* temp = root->left;
//            delete root;
//            return temp;
//        }
//        // Case 3: Two children
//        Node* temp = findMin(root->right);
//        root->data = temp->data;
//        root->right = Delete(root->right, temp->data);
//    }
//    return root;
//}
//
//int main() {
//    Node* root = nullptr;
//    add(root, 10);
//    add(root, 20);
//    add(root, 15);
//
//    int num;
//    std::cout << "Enter a number: ";
//    std::cin >> num;
//
//    if (search(root, num))
//        std::cout << "Found!\n";
//    else
//        std::cout << "Not found!\n";
//
//    root = Delete(root, num);
//    return 0;
//}




/*
mini project
Core Features to Implement
Feature	Description
Add Student	Insert a new record into the BST (by ID).
Search Student	Find a student by ID and show their info.
Display All Students	Inorder traversal → shows students sorted by ID.
Delete Student	Remove a record by ID.
Find Topper	Find the student with the highest marks (custom traversal).

*/
#include<iostream>

struct Node {
	int id;
	std::string name;
	int score;
	Node* left;
	Node* right;
};

void add(Node* root,int& id,std::string& name,int& score) {
	if (root == nullptr) {
		root == new Node{ id , name, score, nullptr , nullptr };


	}

	
}

void search() {

}

void displayAll() {

}

void Delete() {

}

void topper() {

}


int main() {
	Node* root = nullptr;
	bool running = true;
	int score, id, choose;
	std::string name;
	while (running) {
		while (running) {
			std::cout << "1. Add \n2. Display all \n3. Delete.\n4. Search a Student. \n5. Find the topper \n6. Exit! \n";
			std::cin >> choose;
			switch (choose) {
			case 1:
				system("cls");
				std::cout << "Enter the name of the student" << std::endl;
				std::cin >> name;
				std::cout << "Enter the id" << std::endl;
				std::cin >> id;
				std::cout << "Enter the score:" << std::endl;
				std::cin >> score;
				add(root, id, name , score);
				break;
			
			case 2:
				system("cls");
				break;
			
			case 3:
				system("cls");
				std::cout << "Enter the id of the one to be kicked!" << std::endl;
				std::cin >> id;
				//deleted(root, id);
				break;
			
			case 4:
				system("cls");
				std::cout << "Enter the id of student to search for" << std::endl;
				std::cin >> id;
			
			case 5:
				system("cls");
				std::cout << "finding the topper..." << std::endl;

			case 6:
				running = false;
				break;

			default:
				std::cout << "Invalid Choices!";
			}
		}
	}
	return 0;
}