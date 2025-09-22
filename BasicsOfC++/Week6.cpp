//Week 6: Memory ManagementGoal : Understand pointers and memory to manage game resources safely.Key Concepts :
//•	Pointers and references.
//•	Dynamic memory(new, delete).
//•	Smart pointers(std::unique_ptr, std::shared_ptr).
//•	Memory leaks and debugging.
//Exercises :
//	•	Create a dynamic array of int using new and delete it properly.
//	•	Write a function that takes a Player* pointer and modifies its health.
//	•	Use std::unique_ptr to manage a dynamically allocated Enemy object.
//	•	Create a std::vector<std::unique_ptr<Character>> to store enemies and test adding / removing.
//	•	Write a program that demonstrates a memory leak(e.g., forgetting to delete) and fix it.
//	Mini - Project: Dynamic Text RPG
//	•	Refactor your Week 5 RPG to use std::unique_ptr for all Character objects.
//	•	Allow the player to fight a random number of enemies(use std::rand).
//	•	Ensure no memory leaks by using smart pointers.
#include<iostream>  
#include<vector>
//
//class Player {
//public:
//	int health;
//
//	Player(int h) {
//		health = h;
//	}
//};
//
//
//class Enemy {
//public:
//	void move() {
//		std::cout << "The Enemy moves" << "\n";
//	}
//};
//void modify(Player* p, int newHealth) {
//	p->health = newHealth;
//}
//
//class Character {
//public:
//	std::string name;
//	int count = 0;
//	Character(std::string n) {
//		name = n;
//	};
//
//	void add() {
//		count++;
//		std::cout << "The "<< name <<" is used for the " << count << " object of the class."<< std::endl;
//	}
//
//	void remove() {
//
//	}
//};
//
//int main() {
//	Player* player = new Player(100);
//	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();
//	
//	std::string option;
//	std::vector<std::unique_ptr<Character>> vchars;
//	vchars.push_back(std::make_unique<Character>("Hiro"));
//	vchars.push_back(std::make_unique<Character>("Helena"));
//
//	//vchars[0]->add();
//	//vchars[1]->add();
//	for (auto& x: vchars) {
//		x->add();
//	}
//	std::cout << "Enter if you want to remove";
//	std::cin >> option;
//
//	if (option == "remove") {
//		vchars.clear();
//	}
//
//
//	// basicallly the std::vector is the stl with having a unique pointer a class and we just push_back
//	// the values in the vector which is the memory address of the class in the heap memory cause of make_unique which wraps 
//	// class to that i can perform smart pointer actions <automatic memory management>.\
//
//	// vchars is a vector which takes in pointers to the class object
//	
//	enemy->move();
//	std::cout << "Currnet health is : " << player->health << std::endl;
//
//	modify(player, 50);
//
//	std::cout << "new health is :" << player->health<< std::endl;
//
//	delete player;
//
//}


//	•	Write a program that demonstrates a memory leak(e.g., forgetting to delete) and fix it.

//class Character {
//public:
//	int health, age;
//	Character(int h, int a) {
//		health = h;
//		age = a;
//	}
//};
//int main() {
//	
//	Character chas(100, 20);
//	Character* point = new Character(120, 10);
//
//	delete point; // << if this is not written then there's a memory leak in the memory
//	// another way of fixing memory leak is by using smart pointers 
//
//	std::unique_ptr<Character> points = std::make_unique<Character>(130, 11); // dont need write delete later as it deletes itself after the required scope
//	  
//	return 0;
//}



/*Mini - Project: Dynamic Text RPG
•	Refactor your Week 5 RPG to use std::unique_ptr for all Character objects.
•	Allow the player to fight a random number of enemies(use std::rand).
•	Ensure no memory leaks by using smart pointers.*/


//class Character {
//public:
//	int health,  damage;
//	std::string name;
//
//	Character(int h, std::string n, int dmg) {
//		health = h;
//		name = n;
//		damage = dmg;
//	}
//
//	virtual void attack(int& helth, bool& gameRun, std::string na) = 0;
//};
//
//class Player : public Character {
//public:
//	Player(int h, std::string n, int dmg) : Character(h, n, dmg) {}
//
//	void attack(int& helth, bool& gameRun, std::string na) override {
//		helth = helth - damage;
//		if (helth <= 0) {
//			std::cout << "The player wins the battle!.";
//		}
//		else {
//			std::cout << "The Player  : " << name << " swings the sword and is fighting against The Goblin and The Dragon "
//				<< na << " health is " << helth << std::endl;
//		}
//	}
//};
//
//
//class Dragon : public Character{
//public:
//	Dragon(int h, std::string n, int dmg) : Character(h, n, dmg) {};
//
//	void attack(int& helth, bool& gameRun, std::string na) override {
//
//		helth = helth - damage;
//		if (helth <= 0) {
//			std::cout << "The Goblin and The Dragon prevails!";
//			
//		}
//		else {
//			std::cout << "The Dragon : " << name << " used dragon's breath on to the player." << "The player health is " << helth << std::endl;
//		}
//	}
//};
//
//class Goblin : public Character {
//public:
//	Goblin(int h, std::string n, int dmg) :Character(h, n, dmg) {};
//
//	void attack(int& helth, bool& gameRun, std::string na) override {
//		helth = helth - damage;
//		if (helth <= 0) {
//			std::cout << "The Goblin and The Dragon prevails!";
//		}
//		else {
//			std::cout << "The Goblin  : " << name << " swings the club at the player." << "The player health is " << helth << std::endl;
//		}
//	}
//};
//
//int main() {
//
//	srand(time(0));
//	int num = 1 + rand() % 5;
//	bool running = true;
//	std::vector<std::unique_ptr<Character>> classPointer;
//	std::unique_ptr<Character> playerPointer = std::make_unique<Player>(500, "hiro", 40);
//
//	for (int i = 0; i < num; i++) {
//		classPointer.push_back(std::make_unique<Dragon>(200, "Darcarys", 10));
//		classPointer.push_back(std::make_unique<Goblin>(150, "gobgob", 10));
//	}
//	
//	std::cout << "Total enemies : " << num*2 <<std::endl;
//
//	while (running) {
//
//
//		for (int i = classPointer.size() - 1; i >= 0; i--) {
//	
//			classPointer[i]->attack(playerPointer->health, running, playerPointer->name);
//			playerPointer->attack(classPointer[i]->health, running, classPointer[i]->name);
//
//
//			if (classPointer[i]->health <= 0) {
//				classPointer.erase(classPointer.begin() + i);
//			}
//			if (playerPointer->health <= 0) {
//				running = false;
//				break; 
//			}
//			if (classPointer.empty()) {
//				running = false;
//			}
//		}
//	}
//	return 0;
//}
