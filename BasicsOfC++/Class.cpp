#include<iostream>
#include<vector>

class Character {
public:
	int health;
	int damage;
	std::string weapon;

	Character (int hp, int dmg, std::string wep) {
		health = hp;
		damage = dmg;
		weapon = wep;
		std::cout << "\nHealth -> " << dmg << "\nDamage -> " << hp << "\nweapon -> " << wep << std::endl;
	}

	void stats(std::string faction , int spellpower, int defence, int melee) {
		std::cout << "\nfaction -> " << faction << "\nspellpower -> " << spellpower << "\nmelee -> " << melee;
	}
	
};

class Hero : public Character {
public:

};

class Enemy : public Character {

};

int main() {
	Character chars(100, 50, "sword");
	chars.stats("horde", 100, 50, 5);
}