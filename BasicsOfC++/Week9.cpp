//Week 9: Advanced Data StructuresGoal : Use advanced data structures for efficient game logic.Key Concepts :
//•	std::map and std::unordered_map for key - value data.
//•	Linked lists(basic implementation or std::list).
//•	Stack / queue(std::stack, std::queue) for game mechanics.
//Exercises :
//	•	Use a std::map<std::string, int> to store player stats(e.g., “strength” → 10).
//	•	Implement a simple linked list to store a sequence of game events.
//	•	Use a std::stack to track player moves for an undo feature.
//	•	Create a std::queue to manage a turn order for multiple characters.
//	•	Store game settings(e.g., difficulty, volume) in a std::unordered_map.
//	Mini - Project: Turn - Based RPG
//	•	Create a turn - based combat system with a std::queue for turn order.
//	•	Use a std::map to store character stats.
//	•	Allow saving / loading the battle state to a file.


//#include<iostream>
//#include<vector>
//#include<map>
//#include<stack>
//struct Node {
//	std::string data;
//	Node* next;
//};
//
//int main() {
//
//	std::map<std::string, int> playerStats;
//	std::stack<int> undo;
//
//	undo.push(10);
//	undo.push(20);
//	undo.push(30);
//
//	while (!undo.empty()) {
//		std::cout << undo.top() << " ";
//		undo.pop();
//	}
//
//	playerStats["health"] = 100;
//	playerStats["mana"] = 100;
//	playerStats["spell power"] = 20;
//
//	//std::cout << "health = " << playerStats["health"];
//
//
//	Node* head = new Node{ "the world is created", nullptr};
//	head->next = new Node{ "the player is on the new world", nullptr};
//	head->next->next = new Node{ "enemies are coming fromt the north!", nullptr};
//
//	Node* temp = head;
//	while (temp != nullptr) {
//		std::cout << temp->data << " ";
//		temp = temp->next;
//	}
//
//	for (auto& stats : playerStats) {
//		std::cout << stats.first << " = " << stats.second << std::endl;
//	}
//
//	return 0;
//}

