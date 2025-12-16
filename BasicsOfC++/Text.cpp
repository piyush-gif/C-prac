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
//
//
