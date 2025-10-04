//🔹 Project 2: Music Playlist Manager(Doubly Linked List)
//
//Concept : Build a playlist app where each node represents a song with :
//
//SongID(int)
//
//Title(string)
//
//Artist(string)
//
//Features:
//
//Add a song to playlist(at start, end, or after a given song).
//
//Delete a song by ID.
//
//Play songs forward(next) and backward(previous).
//
//Search for a song by title or artist.
//
//Shuffle option(pick random node and traverse forward).

#include<iostream>

struct Node {
	int songId;
	std::string title;
	std::string artist;
	Node* next;
	Node* prev;
};
void add(Node*& head, int id, std::string artist, std::string title, int pos) {
	
	Node* temp = head;
	Node* newNode = new Node{ id, title, artist, nullptr, nullptr };

	if (head == nullptr) {
		head = newNode;
		return;
	}

	if (pos == 1) {
		newNode->next = temp;
		temp->prev = newNode;
		head = newNode;
		return;
	}

	for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	newNode->prev = temp;

	if (temp->next != nullptr) {
		temp->next->prev = newNode;
	}

	temp->next = newNode;
}

void deleted(Node*& head, int id) {
	if (head == nullptr) return;

	Node* temp = head;
	if (temp->songId == id) {
		head = head->next;
		if (head != nullptr) {
			head->prev = nullptr;
			
		}
		delete temp;
		return;
	}

	while (temp != nullptr && temp->songId != id) {
		temp = temp->next;
	}

	if (temp == nullptr) return;

	if (temp->next != nullptr) {
		temp->next->prev = temp->prev;
	}
	
	if (temp->prev != nullptr) {
		temp->prev->next = temp->next;
	}
	delete temp;
}

void search(Node*& head, int id) {
	if (head == nullptr) return;
	Node* temp = head;

	while (temp != nullptr && temp->songId != id) {
		temp = temp->next;
	}
	if (temp != nullptr) {
		std::cout << head->songId << std::endl << head->artist << std::endl << head->title << std::endl;
	}
}

void play() {

	
}
void print(Node*& head) {

	if (head == nullptr) return;
	Node* temp = head;

	while (temp != nullptr) {
		std::cout << temp->songId << std::endl << temp->artist << std::endl << temp->title << std::endl;
		std::cout << "-------" << std::endl;
		temp = temp->next;
	}
}

int main() {
	Node* head = new Node{ 1, "ew", "joji", nullptr, nullptr };
	Node* second = new Node{ 2, "gimme love", "joji", nullptr, head };
	head->next = second;
	Node* third = new Node{ 3, "glimse of us", "joji", nullptr, second };
	second->next = third;
	bool running = true;
	int options;
	int id, pos;
	std::string title, artist;
	while (running) {
		std::cout << "What do you want to do?" << std::endl;
		std::cout << "1. Add a song \n2. Remove the song from the playlist \n3. Look for a song  \n5. Display all the songs \n6.Exit" << std::endl;
		std::cin >> options;

		switch (options) {
		case 1:
			std::cout << "Enter the Id for the song" << std::endl;
			std::cin >> id;
			std::cout << "Enter the title of the song" << std::endl;
			std::cin >> title;
			std::cout << "Enter the artist of the song" << std::endl;
			std::cin >> artist;
			std::cout << "Enter the position that you want the song to be at in the list" << std::endl;
			std::cin >> pos;
			system("cls");
			add(head, id, artist , title, pos);
			break;

		case 2:
			std::cout << "Enter the Id of the song you want to remove from the list" << std::endl;
			std::cin >> id;
			system("cls");
			deleted(head, id);
			break;

		case 3:
			std::cout << "Enter the Id of the song you want to look for. " << std::endl;
			std::cin >> id;
			system("cls");
			search(head, id);
			break;

		case 4:
			break;

		case 5:
			system("cls");
			print(head);
			break;

		case 6:
			system("cls");
			std::cout << "Thank for using double linked list" << std::endl;
			running = false;
			break;
		}
	}
}

