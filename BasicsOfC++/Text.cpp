//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//class Player {
//public:
//	int health, attack;
//	string name;
//
//	Player(int hp, int atck, string na) {
//		this->health = hp;
//		this->attack = atck;
//		this->name = na;
//	}
//	
//	void stats() {
//		cout << "Name : " << name << endl << "Health : "<< health << endl <<"Attack :" << attack <<endl;
//	}
//
//	Player* slap(Player* P2) {
//		P2->health -= this->attack;
//		return this;
//	}
//
//	Player* fight(Player* P2) {
//		this->health -= P2->attack;
//		P2->health -= this->health;
//		return this;
//	}
//
//};
//
//int main() {
//	Player* P1 = new Player(100, 11, "piyush");
//	Player* P2 = new Player(100, 5, "Nirmal");
//	P1->stats();
//	P2->stats();
//	P1->slap(P2)->slap(P2);
//	P1->fight(P2);
//	P2->stats();
//	P1->stats();
//}


//#include<iostream>
//
//#include<vector>
//using namespace std;
//
//
//struct Node {
//	int data;
//	Node* next;
//	Node* prev;
//};
//
//void display(Node*& head) {
//	if (head == nullptr) return;
//	Node* temp = head;
//
//	while (temp != nullptr) {
//		cout << temp->data << endl;
//		temp = temp->next;
//	}	
//}
//void deleted(Node*& head, int num) {
//	if (head == nullptr) return;
//	Node* temp = head;
//	if (num == temp->data) {
//		head = head->next;
//		head->prev = nullptr;
//		delete temp;
//	}
//
//	while (temp->next != nullptr && temp->data != num) {
//		temp = temp->next;
//	}
//
//	if (temp == nullptr) return;
//	if (temp->next != nullptr) {
//		temp->prev->next = temp->next;
//	}
//	if (temp->prev != nullptr) {
//		temp->next->prev = temp->prev;
//	}
//	delete temp;
//}
//
//
//
//int main() {
//	Node* head = new Node{ 1, nullptr, nullptr };
//	Node* second = new Node{ 2, nullptr, head };
//	head->next = second;
//	Node* third = new Node{ 3, nullptr, second };
//	second->next = third;
//	int a = 2;
//	deleted(head, a);
//	display(head);
//}