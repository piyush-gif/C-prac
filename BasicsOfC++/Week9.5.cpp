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

/* insert a int into a nth positon in the linked list and reverse the linked list using rec*/

//#include<iostream>
//struct Node {
//	int data;
//	Node* next;
//};
//
//void nth(int& pos, Node*& head, int& num) {
//
//	Node* newNode = new Node{ num, nullptr };
//
//	if (pos == 1) {
//		newNode->next = head;
//		head = newNode;
//		return;
//	}
//	Node* prev = nullptr;
//	Node* curr = head;
//	
//
//	for (int i = 1; i < pos && curr!= nullptr ; i++) {
//		prev = curr;
//		curr = curr->next;
//	}
//
//	if (prev != nullptr) {
//		prev->next = newNode;
//		newNode->next = curr;
//	}
//}
//Node* reverseList(Node* head) {
//	if (head == nullptr || head->next == nullptr) {
//		return head;
//	}
//
//	Node* rest = reverseList(head->next);
//
//	head->next->next = head;
//	head->next = nullptr;
//
//	return rest;
//}
//
//void revprint(Node* head) {
//	if (head == nullptr) {
//		return;
//	}
//	revprint(head->next);
//	std::cout << head->data;
//}
//
//void print(Node*& head) {
//	while (head != nullptr) {
//		std::cout << head->data << " ";
//		head = head->next;
//	}
//	std::cout << std::endl;
//}
//
//int main() {
//	Node* head = new Node{ 1, nullptr };
//	head->next = new Node{ 2, nullptr };
//	head->next->next = new Node{ 3, nullptr };
//
//	/*int pos, num;
//	std::cout << "Enter the nth position you want the int to be at" << std::endl;
//	std::cin >> pos;
//	std::cout << "Enter the number that you want to add" << std::endl;
//	std::cin >> num;
//
//	nth(pos, head, num);
//
//	std::cout << "updated list...";
//	print(head);*/
//
//	revprint(head);
//	return 0;
//
//}

//🔹 Project 1: Student Record Manager(Singly Linked List)
//
//Concept : Manage a list of students where each student has :
//
//ID(int)
//
//Name(string)
//
//Grade(float)
//
//Features:
//
//Add a student(insert at end or specific position).
//
//Delete a student by ID.
//
//Search a student by ID.
//
//Update student grade.
//
//Display all students in order.
//
//Count total students.
struct Node {
	int id;
	std::string name;
	float grade;
	Node* next;
};

void add(Node*& head, int& id, std::string& name, int& grade, int& pos) {

}

void deleteId(Node*& head , int& id) {

}

void searchId(Node*& head, int& id) {

}

void updateGrade(Node*& head, int& id, int& grade) {

}

void display(Node*& head) {
	Node* temp = head;
	while (temp != nullptr) {
		std::cout << temp->id << "\n" << temp->name << "\n" << temp->grade << "\n";
		std::cout << "-------" << "\n";
		temp = temp->next;
	}
}


int main() {

	Node* head = new Node{ 1, "piyush", 50, nullptr };
	head->next = new Node{ 2, "oana", 80, nullptr };
	head->next->next = new Node{ 3, "rachel", 70, nullptr };
	bool running = true;
	int options;
	int id, grade, pos;
	std::string name;
	while (running) {
		std::cout << "What do you want to do?" << std::endl;
		std::cout << "1. Add a student. \n2. Remove the student \n3. Look for a student. \n4. Update the Grade of a student? \n5. Display all the records \n6.Exit" << std::endl;
		std::cin >> options;

		switch(options) {
		case 1:
			std::cout << "Enter the Id for the student" << std::endl;;
			std::cin >> id;
			std::cout << "Enter the name of the student" << std::endl;;
			std::cin >> name;
			std::cout << "Enter the Grade the student got" << std::endl;;
			std::cin >> grade;
			std::cout << "Enter the position that you want the student to be at in the list" << std::endl;
			std::cin >> pos;
			system("cls");
			add(head, id, name, grade, pos);
			break;

		case 2:
			std::cout << "Enter the Id of the student you want to remove from the list" << std::endl;
			std::cin >> id;
			system("cls");
			deleteId(head, id);
			break;

		case 3:
			std::cout << "Enter the Id of the student you want to look for. " << std::endl;
			std::cin >> id;
			system("cls");
			searchId(head, id);
			break;

		case 4:
			std::cout << "Enter the id of the student you want to update the grade" << std::endl;
			std::cout << id;
			std::cout << "Enter the grade you want to give." << std::endl;
			std::cout << grade;
			system("cls");
			updateGrade(head, id, grade);
			break;

		case 5:
			system("cls");
			display(head);
			break;

		case 6:
			std::cout << "Thank for using single linked list" << std::endl;
			system("cls");
			running = false;
			break;
		}
	}
};

