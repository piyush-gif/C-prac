//Week 4: Object - Oriented Programming(OOP) BasicsGoal : Use classes to model game entities and organize code.Key Concepts :
//•	Classes and structs.
//•	Member variables and methods.
//•	Constructors and destructors.
//•	Access specifiers(public, private).
//•	Encapsulation.
//Exercises :
//	•	Create a Player class with health, maxHealth, and name members, and a method to print stats.
//	•	Write a Weapon struct with damage and name, and a method to display its details.
//	•	Make a Game class with a bool isRunning member and methods to start() and end() the game.
//	•	Create a Point class for 2D coordinates(x, y) with a method to calculate distance to another Point.
//	•	Refactor your Week 2 Tic - Tac - Toe to use a Board class with methods for drawing and updating.
//	Mini - Project : Text RPG(Basic)
//	•	Create a Player class (health, attack, position) and an Enemy class (similar attributes).
//	•	Simulate a simple battle : player and enemy take turns dealing damage(use std::rand for variation).
//	•	Display results after each turn and end when someone’s health reaches 0.


/*include<iostream>
#include<string>*/
//// Create a Player class with health, maxHealth, and name members, and a method to print stats.
//
//
//
//class Player {
//private:
//	int health = 100;
//	int maxHealth = 200;
//	std::string name = "Piyush";
//
//public:
//	void print() {
//		std::cout << "Hp: "<< health << "\nMax HP: " << maxHealth << "\nPlayer's name: "<< name;
//	}
//};
//
//
//int main() {
//
//	Player player;
//	player.print();
//
//	return 0;
//}

// Write a Weapon struct with damage and name, and a method to display its details.

//struct Weapon {
//private:
//	std::string name = "Piyush";
//	int damage = -10;
//
//public:
//	void display() {
//		std::cout << name << "\n" << damage;
//	}
//};
//
//
//int main() {
//	Weapon weapon;
//	weapon.display();
//	return 0;
//}

// Make a Game class with bool isRunning member and methods to start() and end() the game.

//class Game {
//	bool isRunning = true;
//public:
//	void start() {
//		isRunning = true;
//		std::cout << "The game has started.";
//		
//	}
//	void end() {
//		isRunning = false;
//		std::cout << "Then game ended.";
//	}
//};
//
//int main() {
//	Game game;
//	std::string input;
//
//	std::cout << "start or end the game?";
//	std::cin >> input;
//
//	if (input == "start") {
//		game.start();
//	}
//	else if (input == "end") {
//		game.end();
//	}
//}


 //Create a Point class for 2D coordinates (x,y) with a method to calculate distance to another Point.
//#include <cmath>
//
//class Point {
//public:
//	int x, y;
//	Point(int X, int Y) {
//		x = X;
//		y = Y;
//	}
//
//	double distance(int X, int Y) {
//		int dx = x - X;
//		int dy = y - Y;
//
//		return std::sqrt(dx * dx + dy * dy);
//	}
//
//};
//
//int main() {
//	Point p1(3, 4);
//
//	std:: cout << p1.distance(5, 6);
//}

// Refactor your week 2 tic-tac-toe to use Board class with methods for drawing and updating.

//class Board {
//
//public:
//
//	void place(char grid[3][3]) {
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				std::cout << grid[i][j] << ' ';
//			}
//			std::cout << "\n";
//		}
//	}
//	void write(int row, int col, char(&grid)[3][3], char current) {
//		grid[row][col] = current;
//	}
//
//	char checker(char(&grid)[3][3]) {
//		char first = grid[0][0];
//		char second = grid[0][2];
//		if (grid[0][0] != ' ' &&
//			grid[0][0] == grid[1][1] &&
//			grid[1][1] == grid[2][2]) {
//			return grid[0][0];
//		}
//
//		if (grid[0][2] != ' ' &&
//			grid[0][2] == grid[1][1] &&
//			grid[1][1] == grid[2][0]) {
//			return grid[0][2];
//		}
//		
//		for (int i = 0; i < 3; i++) {
//			if (grid[i][0] != ' ' &&
//				grid[i][0] == grid[i][1] &&
//				grid[i][1] == grid[i][2]) {
//				return grid[i][0];
//			}
//		}
//
//		for (int j = 0; j < 3; j++) {
//			if (grid[0][j] != ' ' &&
//				grid[0][j] == grid[1][j] &&
//				grid[1][j] == grid[2][j]) {
//				return grid[0][j];
//			}
//		}
//		return ' ';
//	}
//};
//
//int main() {
//	Board board;
//	char grid[3][3] = { { ' ', ' ', ' ' },
//						{ ' ', ' ', ' ' },
//						{ ' ', ' ', ' ' } };
//
//	board.place(grid);
//	int currentPlayer = 0, row, col;
//	int playing = true;
//	char player[2] = { 'X', 'O' };
//	int moves = 9;
//	while (playing) {
//		board.place(grid);
//		std::cout << "Player " << player[currentPlayer] << ", enter row (0-2): ";
//		std::cin >> row;
//		std:: cout << "Enter column (0-2): ";
//		std::cin >> col;
//
//		if (row < 0 || row > 2 || col < 0 || col > 2) {
//			std::cout << "Invalid position. Try again.\n";
//			continue;
//		}
//
//		if (grid[row][col] != ' ') {
//			std::cout << "Cell already taken. Try again.\n";
//			continue;
//		}
//		board.write(row, col, grid, player[currentPlayer]);
//		moves++;
//		char winner = board.checker(grid);
//
//		if (winner != ' ') {
//			board.place(grid);
//			std::cout << "Player " << winner << " wins!\n";
//			break;
//		}
//
//		if (moves == 9) {
//			board.place(grid);
//			std::cout << "It's a draw!\n";
//			break;
//		}
//		currentPlayer = 1 - currentPlayer;
//
//		system("cls");
//	}
//	return 0;
//}


//Mini - Project: Text RPG(Basic)
//•	Create a Player class (health, attack, position) and an Enemy class (similar attributes).
//•	Simulate a simple battle : player and enemy take turns dealing damage(use std::rand for variation).
//•	Display results after each turn and end when someone’s health reaches 0.

//#include <cstdlib>
//#include <ctime>
//class Player {
//public:
//	std::string name;
//	int health, attack;
//	int position[2] = { 1, 1 };
//
//	Player(std::string n, int h, int a) {
//		name = n;
//		health = h;
//		attack = a;
//	}
//	void attackTarget(int& hp, std::string& names){
//		int num = 5 + (rand() % 10);
//		hp -= num;
//		std::cout << "\n" << name << " attacks " << "\n" << names << " New Hp! = " << hp;
//	}
//};
//
//
//class Enemy {
//public:
//	std::string name;
//	int health, attack;
//	int position[2] = {0, 0};
//
//	Enemy(std::string n, int h, int a) {
//		name = n;
//		health = h;
//		attack = a;
//	}
//	void attackTarget(int &hp, std::string &names) {
//		int num = 5 + (rand() % 10);
//		hp -= num;
//		std::cout << "\n" << name << " attacks " << "\n" << names << " New Hp! = " << hp;
//	}
//};
//
//int main() {
//	std::srand(std::time(0));
//	Player player("player", 100, 10);
//	Enemy enemy("enemy", 100, 11);
//	bool running = true;
//
//	while (running) {
//		player.attackTarget(enemy.health, enemy.name);
//		if (enemy.health <= 0 ) {
//			std::cout << "\nPlayer wins!";
//			break;
//			
//		}
//		enemy.attackTarget(player.health, player.name);
//		if ( player.health <= 0) {
//			std::cout << "\nEnemy wins!";
//			break;
//		}
//	}
//}