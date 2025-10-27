//Week 5: OOP Advanced - Inheritance and PolymorphismGoal : Use inheritance and polymorphism to model complex game entities.Key Concepts :
//•	Inheritance(base and derived classes).
//•	Virtual functions and polymorphism.
//•	Abstract classes.
//•	Composition vs.inheritance.
//Exercises :
//	•	Create a base Entity class with health and move() method, and derive Player and Enemy classes.
//	•	Use a virtual attack() function to give different attack behaviors for Player and Enemy.
//	•	Write a function that takes a std::vector<Entity*> and calls move() on each(demonstrating polymorphism).
//	•	Create a Weapon class and compose it into Player(e.g., Player has - a Weapon instead of inheriting).
//	•	Make an abstract Character class with a pure virtual getDescription() method.
//	Mini - Project : Text RPG with Multiple Enemies
//	•	Extend your Week 4 RPG : create a base Character class and derive Player, Goblin, and Dragon with unique attack behaviors.
//	•	Store enemies in a std::vector<Character*> and simulate a battle loop.
//	•	Use polymorphism to call each character’s attack() method.


//#include <iostream>
//#include <vector>

//class Character {
//public:
//	virtual std::string getDescription() = 0;
//};
//class Entity : public Character{
//public:
//	void health() {
//		std::cout << "Character " << 100 << "\n";
//	}
//	virtual void move() {
//		std::cout << "The Character moves.\n";
//	}
//	virtual void attack() {
//		std::cout << "The Character attacks \n";
//	}
//};
//
//class Weapon {
//public:
//	std::string weapon = "Sword";
//	int damage = 50;
//};
//
//class Player : public Entity {
//private:
//	Weapon weap;
//public:
//
//	std::string getDescription() override{
//		return "I am a Player in the game. \n";
//	}
//	void health() {
//		std::cout <<"Player " <<  100 << "\n";
//	}
//	void move() override  {
//		std::cout << "The Player moves\n";
//	}
//	void attack() override{
//		std::cout << "The Player attacks with " << weap.weapon << " causing " << weap.damage << " damage.\n";
//	}
//};
//
//class Enemy : public Entity {
//public:
//	std::string getDescription() override {
//		return "I am a Enemy in the game. \n";
//	}
//	void health() {
//		std::cout << "Enemy " << 100 << "\n";
//	}
//	void move() override{
//		std::cout << "The Enemy moves.\n";
//	}
//	void attack() override {
//		std::cout << "The Enemy attacks \n";
//	}
//};
//
//void moveall(const std::vector<Entity*>& vec) {
//	for (auto x : vec) {
//		x -> move();
//	}
//}
//
//int main() {
//	Entity* enty;
//	Player p;
//	Enemy e;
//	
//	std::vector<Entity*> entyvec;
//	e.move();
//	e.health();
//	std::cout << e.getDescription() << "\n";
//	p.move();
//	p.health();
//	std::cout << p.getDescription() << "\n";;
//	enty = &p;
//	enty->attack();
//	enty = &e;
//	enty->attack();
//	
//
//	entyvec.push_back(&p);
//	entyvec.push_back(&e);
//	moveall(entyvec);
//	return 0;
//};

// pointers and refrences =>> pointers -> for pointing to different memory addresses and references -> used where we dont need to point to different memory addresses.
//int main() {
//	int	b = 10;
//	int* a = &b;
//	int& r = b;
//	std::cout << a << "\n";
//	std::cout << *a << "\n";
//	*a = 30;
//	std::cout << b << "\n";
//	std::cout << &b << "\n";
//	std::cout << &a << "\n";
//	std::cout << r << "\n";
//	r = 20;
//	std::cout << b << " \n";
//	std::cout << &r << "\n";
//
//}


//	Mini - Project : Text RPG with Multiple Enemies
//	•	Extend your Week 4 RPG : create a base Character class and derive Player, Goblin, and Dragon with unique attack behaviors.
//	•	Store enemies in a std::vector<Character*> and simulate a battle loop.
//	•	Use polymorphism to call each character’s attack() method.

//class Character {
//public:
//	int health;
//	int damage;
//
//	Character(int h, int d) {
//		health = h;
//		damage = d;
//	}
//
//	virtual int attack(int& hp) {
//		return 0;
//	};
//};
//
//class Player : public Character {
//private:
//	int* point;
//	
//public:
//	std::string name= "Player";
//	Player(int h, int d) : Character(h,d){}
//	int attack(int& hp) override {
//		point = &hp;
//		*point = *point - damage;
//		std::cout << name << " hits for " << damage << "\n";
//		return *point;
//	}
//};
//class Goblin : public Character {
//public:
//	std::string name= "Goblin";
//	Goblin(int h, int d) : Character(h, d) {}
//	int attack(int& hp) override {
//		std::cout << name << " hits for " << damage << "\n";
//		return 0;
//	}
//};
//
//class Dragon : public Character {
//private: 
//	int* point;
//public:
//	std::string name = "Dragon";
//	Dragon(int h, int d) : Character(h, d) {}
//	int attack(int& hp) override{
//
//		point = &hp;
//		*point = *point - damage;
//		std::cout << name <<  " hits for " << damage<<"\n";
//		return *point;
//	}
//};
//
//void attackall(std::vector<Character*>& vec, int& targetHealth) {
//	for (auto* attacker : vec) {
//		std::cout << "The Goblin's health => "<< targetHealth << "\n";
//		std::cout  << "The remaining health " << attacker->attack(targetHealth) << "\n";
//		
//	}
//}
//
//int main() {
//
//	Character chars(90, 20);
//	Player player(100, 30);
//	Dragon drag(110, 40);
//	Goblin gob(120, 50);
//	//std::cout << "The Goblin's Health = " << gob.health << "\n";
//	//std::cout << "The Dragon attacks The Goblin with " << drag.damage << "\nGoblin's Health = " << drag.attack(gob.health) << "\n";
//	//std::cout << "The Player attacks The Goblin with "<< player.damage<< "\nGoblin's Health = " << player.attack(gob.health) ;
//
//
//	std::vector<Character*> charsvec;
//
//	charsvec.push_back(&player);
//	charsvec.push_back(&drag);
//	charsvec.push_back(&gob);
//	
//
//	attackall(charsvec, gob.health);
//	return 0;
//}