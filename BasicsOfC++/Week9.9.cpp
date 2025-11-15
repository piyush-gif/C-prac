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
//#include<iostream>
//
//struct Node {
//	int id;
//	std::string name;
//	int score;
//	Node* left;
//	Node* right;
//};
//
//void add(Node*& root,int id,std::string name,int score) {
//	if (root == nullptr) {
//		root = new Node{ id , name, score, nullptr , nullptr };
//		return;
//	}
//
//	if (id < root->id) add(root->left, id, name, score);
//	else if (id > root->id) add(root->right, id, name, score);
//	else std::cout << "ID already exists!\n";
//}
//
//void search(Node*& root, int& id) {
//	if (root == nullptr) return;
//
//	if (id > root->id) search(root->right, id);
//	if (id < root->id) search(root->left, id);
//
//	if (id == root->id) {
//		std::cout << "name of the student of that id is " << root->name << std::endl;
//	}
//}
//
//void displayAll(Node* root) {
//	if (root == nullptr) return;
//
//	displayAll(root->left);  // left subtree
//	std::cout << "ID: " << root->id
//		<< ", Name: " << root->name
//		<< ", Score: " << root->score << std::endl;
//	displayAll(root->right); // right subtree
//}
//
//
//Node* Delete(Node* root, int& id) {
//	if (root == nullptr) return nullptr;
//
//	if (id < root->id) root->left =  Delete(root->left, id);
//	else if (id > root->id) root->right = Delete(root->right, id);
//
//	else { 
//		if (root->left == nullptr  && root->right == nullptr) {
//			delete root;
//			root = nullptr;
//		}
//		else if (root->left == nullptr) {
//			Node* temp = root;
//			root = root->right;
//			delete temp;
//		}
//		else if (root->right == nullptr) {
//			Node* temp = root;
//			root = root->left;
//			delete temp;
//		}
//		else {
//			Node* temp = root->right;
//
//			while (temp->left != nullptr) {
//				temp = temp->left;
//			}
//
//			root->id = temp->id;
//			root->name = temp->name;
//			root->score = temp->score;
//				
//			root->right = Delete(root->right, temp->id);// root->right is the root in delete
//		}
//	}
//	return root;
//}
//
//Node* topper(Node* root) {
//	if (root == nullptr) return nullptr;
//
//	Node* lefttopper = topper(root->left);
//	Node* righttopper = topper(root->right);
//
//	Node* maxNode = root;
//
//	if (lefttopper != nullptr && lefttopper->score > maxNode->score)
//		maxNode = lefttopper;
//
//	if (righttopper != nullptr && righttopper->score > maxNode->score)
//		maxNode = righttopper;
//
//	return maxNode;
//}
//
//
//int main() {
//	Node* root = nullptr;
//	bool running = true;
//	Node* final = nullptr;
//	int score, id, choose;
//	std::string name;
//
//	add(root, 5, "piyush", 50);
//	add(root, 2, "prachi", 80);
//	add(root, 1, "luna", 100);
//
//	while (running) {
//		while (running) {
//			std::cout << "1. Add \n2. Display all \n3. Delete.\n4. Search a Student. \n5. Find the topper \n6. Exit! \n";
//			std::cin >> choose;
//			switch (choose) {
//			case 1:
//				system("cls");
//				std::cout << "Enter the name of the student" << std::endl;
//				std::cin >> name;
//				std::cout << "Enter the id" << std::endl;
//				std::cin >> id;
//				std::cout << "Enter the score:" << std::endl;
//				std::cin >> score;
//				add(root, id, name , score);
//				break;
//			
//			case 2:
//				system("cls");
//				displayAll(root);
//				break;
//			
//			case 3:
//				system("cls");
//				std::cout << "Enter the id of the one to be Deleted!" << std::endl;
//				std::cin >> id;
//				Delete(root, id);
//				break;
//			
//			case 4:
//				system("cls");
//				std::cout << "Enter the id of student to search for" << std::endl;
//				std::cin >> id;
//				search(root, id);
//				break;
//
//			case 5:
//				system("cls");
//				std::cout << "finding the topper..." << std::endl;
//				final = topper(root);
//				std::cout << "The student with the highest score is " << final->id << " - " << final->name << " - " << final->score << std::endl;
//				break;
//
//			case 6:
//				running = false;
//				break;
//
//			default:
//				std::cout << "Invalid Choices!" << std::endl;
//				break;
//				
//			}
//		}
//	}
//	return 0;
//}


//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...


//#include<iostream>
//
//int fibo(int num) {
//
//	if (num == 1) {
//		return 0;
//	}
//	if (num == 2)
//		return 1;
//
//	for (int i = 0; i < num; i++) {
//
//	}
//}
//
//
//
//int main() {
//	std::cout << fibo(5);
//	return 0;
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
//#include<iostream>
//
//struct Node {
//	int data;
//	Node* left;
//	Node* right;
//};
//
//
//Node* add(Node*& root, int num) {
//	if (root == nullptr) {
//		root = new Node{ num, nullptr, nullptr };
//		return root;
//	} 
//
//	if (num > root->data) return add(root->right, num);
//	else if (num < root->data) return add(root->left, num);
//	
//	return root;
//}
//
//void find(Node*& root, int num) {
//	if (root == nullptr) return; 
//
//	if(num < root->data) find(root->left, num);
//	
//	else if(num > root->data) find(root->right, num);
//
//	if (root->data == num) {
//		std::cout << "found num!" << root->data<< std::endl;
//	}
//}
//
//void display(Node*& root) {
//	if (root == nullptr) return;
//
//	display(root->left);
//	std::cout << root->data << std::endl;
//
//	display(root->right);
//}
//
//Node* deleted(Node*& root, int num) {
//	if (root == nullptr) return nullptr;
//
//	if (num > root->data) root->right = deleted(root->right, num);
//	else if (num < root->data) root->left = deleted(root->left, num);
//	else {
//		if (root->left == nullptr && root->right == nullptr) {
//			delete root;
//			root = nullptr;
//		}
//		else if (root->left == nullptr) {
//			Node* temp = root;
//			root = root->right;
//			delete temp;
//		}
//		else if (root->right == nullptr) {
//			Node* temp = root;
//			root = root->left;
//			delete temp;
//		}
//		else {
//			Node* temp = root->right;
//			while (temp->left != nullptr) {
//				temp = temp->left;
//			}
//
//			temp->data = root->data;
//
//			root->right = deleted(root->right, temp->data);
//		}
//	}
//	return root;
//}
//
//Node* topper(Node*& root) {
//	if (root == nullptr) return nullptr;
//
//	Node* left = topper(root->left);
//	Node* right = topper(root->right);
//
//	Node* max = root;
//
//	if (left != nullptr && left->data > max->data) max = left;
//	if (right != nullptr && right->data > max->data)  max = right;
//
//	return max;
//}
//
//int main() {
//	Node* root = nullptr;
//
//	add(root, 5);
//	add(root, 4);
//	add(root, 7);
//
//	/*display(root);
//	find(root, 4);*/
//	deleted(root, 4);
//	display(root);
//	std::cout << topper(root)->data;
//}
#include<iostream>
#include<vector>
#include<map>
using namespace std;

//vector<int> topKFrequent(vector<int>& nums, int k) {
//
//    map<int, int> mymap;
//    for (int x : nums) {
//        mymap[x] += 1;
//    }
//
//    map<int, int> second;
//    for (int i = 0; i < mymap.size(); i++) {
//        second[mymap[i]] = mymap[i];
//    }
//    vector<int> arr;
//    for (int i = 1; i <= k; i++) {
//        arr.push_back(second[-i]);
//    }
//    return arr;
//
//}


//void shape() {
//
//    int n = 4;
//    string a;
//    for (int i = 0; i < n; i++) {
//        a = "";
//        for (int j = i + 1; j < n; j++) {
//            a += " ";
//        }
//
//        for (int k = -1; k < i; k++) {
//            a += "*";
//        }
//        std::cout << a;
//        std::cout << "\n";
//    }
//}



//int main() {
//    
//    int k = 2;
//    vector<int>  nums = { 1, 2, 2, 3, 3 };
//    vector<int> store;
//    map<int, int> mymap;
//
//    for (int x : nums) {
//        mymap[x] += 1;
//    }
//    for (auto& y : mymap) {
//        store.push_back(y.second);
//    }
//    for (int i = 0; i < store.size() - 1; i++) {
//        for (int j = i + 1; j < store.size(); j++) {
//            if (store[i] < store[j]) {
//                int temp = store[i];
//                store[i] = store[j];
//                store[j] = temp;
//            }
//        }
//    }
//    vector<int> shor;
//    for (int i = 0; i < k; i++) {
//        shor.push_back(store[i]);
//    }
//
//    //for (int i = 0; i < shor.size(); i++) {
//    //    cout << shor[i];
//    //}
//
//    vector<int> arr;
//    for (int i = 0; i < k; i++) {
//        for (const auto& [key, value] : mymap) {
//            if (store[i] == value) {
//                arr.push_back(key); 
//                mymap[key] = 0;
//                break;
//            }
//        }
//    }
//    for (int i = 0; i < arr.size(); i++) {
//        cout << arr[i];
//    }
//
//    
//	return 0;
//}
//#include <string>
//
//map<char, string>  mymap;
//
//string encode(vector<string>& strs) {
//
//	string ecode;
//	for (int i = 0; i < strs.size(); i++) {
//		char s = i;
//		mymap[s] = strs[i];
//		ecode += s;
//	}
//	cout << ecode;
//	return ecode;
//}
//
//vector<string> decode(string s) {
//	vector<char> strs;
//	vector<string> dcode;
//	for (char x : s) {
//		strs.push_back(x);
//	}
//	for (int i = 0; i < strs.size(); i++) {
//		for (const auto [key, value] : mymap) {
//			if (strs[i] == key) {
//				dcode.push_back(value);
//			}
//		}
//	}
//	return dcode;
//}


//int main() {
//	//int n = 4;
//	//
//	//for (int i = 0; i < n; i++) {
//	//	string a = "";
//	//	for (int j = i; j < n; j++) {
//	//		a += "-";
//	//	}
//	//	for (int k = 0; k < i + 1; k++) {
//	//		a += '*';
//	//	}
//
//	//	std::cout << a;
//	//	std::cout << '\n';
//	//}
//
//	//for (int i = 0; i < n; i++) {
//	//	string a = "";
//	//	for (int j = 0; j < i+ 1; j++) {
//	//		a += "*";
//	//	}
//	//	std::cout << a;
//	//	std::cout << endl;
//
//	//}
//
//	//for (int i = 0; i < n; i++) {
//	//	string a = "";
//	//	for (int j = i; j < n; j++) {
//	//		a += "*";
//	//	}
//	//	std::cout << a;
//	//	cout << endl;
//	//}
//
//	//for (int i = 0; i < n; i++) {
//	//	string a = "";
//	//	for (int k = 0; k < i; k++) {
//	//		a += "-";
//	//	}
//	//	for (int j = i; j < n; j++) {
//	//		a += "*";
//	//	}
//	//	
//	//	cout << a;
//	//	cout << endl;
//	//}
//	vector<string> strs = { "neet", "code", "love", "you" };
//	encode(strs);
//
//	return 0;
//}


int main() {

	for (int i = 0; i < 5; i++) {
		std::cout << i;
	}
}