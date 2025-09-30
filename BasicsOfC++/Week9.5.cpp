//🔹 Mini Project 1: Singly Linked List — Student Record Manager
//
//Goal : Store student names in a linked list.Add, display, and delete by name.
//
//Features
//
//Add a new student(at the end).
//
//Display all students.
//
//Delete a student by name.



//#include<iostream>
//
//struct Node {
//	std::string data;
//	Node* next;
//};
//
//void display(Node* temp) {
//	while (temp != nullptr) {
//		std::cout << temp->data << " " << std::endl;
//		std::cout << "----------------"<< std::endl;
//		temp = temp->next;
//	}
//}
//void add(Node*& head, std::string& name) {
//	Node* temp = head;
//	Node* newNode = new Node{ name , nullptr };
//
//	while (temp->next != nullptr) { // until temp is the last next value as it needs to point to the new node
//		temp = temp->next;
//	}
//	temp->next = newNode; // temp.next == newNode
//	std::cout << "added to the memory" << std::endl;
//}
//
//void deleted(Node*& head, std::string& name) {
//
//	if (head == nullptr) {
//		return;
//	}
//
//	if (head->data == name) {
//		Node* temp = head;
//		head = head->next;
//		delete temp;
//	}
//
//	Node* prev = head;
//	Node* curr = head->next;
//
//
//	while (curr != nullptr && curr->data != name ){
//		prev = curr;
//		curr = curr->next;
//	}
//
//	if (curr != nullptr) {
//		prev->next = curr->next; // joining the previous next to current before  deleted next --> beautiful
//		delete curr;
//	}
//}
//int main() {
//
//	Node* head;
//	head = new Node{ "Piyush", nullptr };
//	head->next = new Node{ "Oana", nullptr };
//	head->next->next = new Node{ "Rachel", nullptr };
//
//	int record;
//	std::string name;
//	bool running = true;
//	std::string fired;
//
//	while (running) {
//		std::cout << "1. Add \n2. Display \n3. Delete.\n4.Exit \n";
//		std::cout << "Do you want to add/ display or delete student record? " << std::endl;
//		std::cin >> record;
//		switch (record) {
//		case 1:
//			system("cls");
//			std::cout << "Enter the name of the student" << std::endl;
//			std::cin >> name;
//			add(head, name);
//			break;
//
//		case 2:
//			system("cls");
//			display(head);
//			break;
//
//		case 3:
//			system("cls");
//			std::cout << "Enter the name of the one to be fired!!" << std::endl;
//			std::cin >> fired;
//			deleted(head, fired);
//			break;
//
//		case 4:
//			running = false;
//			break;
//
//		default:
//			std::cout << "Invalid Choices!";
//		}
//	}
//		
//
//	return 0;
//
//}

#include<iostream>



//struct Node {
//	std::string data;
//	Node* next;
//};

//void add(std::string& name, Node*& head) {
//	Node* temp = head;
//	Node* newNode = new Node{ name, nullptr };
//
//	if (head == nullptr) {
//		return;
//	}
//
//	while (temp->next != nullptr) {
//		temp = temp->next;
//	}
//	temp->next = newNode;
//};
//
//void Delete(std::string& name, Node* head) {
//	
//	if (head == nullptr) {
//		return;
//	}
//
//	if (head->data == name) {
//		Node* temp = head;
//		head = head->next;
//		delete temp;
//	}
//
//	Node* prev = head;
//	Node* curr = head->next;
//
//	while (curr->next != nullptr && curr->data != name) {
//		prev = curr;
//		curr = curr->next;
//	}
//
//	if (curr != nullptr) {
//		prev->next = curr->next;
//		delete curr;
//	}
//
//}

//int main() {
//	Node* head;
//	head = new Node{ "piyush", nullptr };
//	head->next = new Node{ "Oana", nullptr };
//	head->next->next = new Node{ "Rachel", nullptr };
//
//	Node* prev = nullptr;
//	Node* curr = head;
//	Node* next = nullptr;
//
//	while (curr != nullptr) {
//		next = curr->next;
//		curr->next = prev;
//		prev = curr;
//		curr = next;
//	}
//
//	while (prev != nullptr) {
//		std::cout << prev->data;
//		prev = prev->next;
//	}

	/*std::string ask;
	std::cout << "add at start of the node" << std::endl;
	std::cin >> ask;

	Node* temp = new Node{ ask, nullptr };
	temp->next = head;

	std::cout << temp->data;

	while (temp != nullptr) {
		std::cout << temp->data;
		temp = temp->next;
	}*/
	

	/*std::string record;
	std::string name;*/
	/*std::cout << "Choose" << std::endl;
	std::cin >> record;*/

	/*if (record == "1") {
		std::cout << "Enter the name" << std::endl;
		std::cin >> name;
		add(name, head);
	}
	else if (record == "2") {
		std::cout << "Enter the name" << std::endl;
		std::cin >> name;
		Delete(name , head);
	}*/

	

//}

/* insert a int into a nth positon in the linked list*/

#include<iostream>
struct Node {
	int data;
	Node* next;
};

void nth(int& pos, Node*& head, int& num) {

	Node* newNode = new Node{ num, nullptr };

	if (pos == 1) {
		newNode->next = head;
		head = newNode;
		return;
	}
	Node* prev = nullptr;
	Node* curr = head;
	

	for (int i = 1; i < pos && curr!= nullptr ; i++) {
		prev = curr;
		curr = curr->next;
	}

	if (prev != nullptr) {
		prev->next = newNode;
		newNode->next = curr;
	}
}

void print(Node* head) {
	while (head != nullptr) {
		std::cout << head->data << " ";
		head = head->next;
	}
	std::cout << std::endl;
}

int main() {
	Node* head = new Node{ 1, nullptr };
	head->next = new Node{ 2, nullptr };
	head->next->next = new Node{ 3, nullptr };

	int pos, num;
	std::cout << "Enter the nth position you want the int to be at" << std::endl;
	std::cin >> pos;
	std::cout << "Enter the number that you want to add" << std::endl;
	std::cin >> num;

	nth(pos, head, num);

	std::cout << "updated list...";
	print(head);
	return 0;

}