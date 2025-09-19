//Week 3: Arrays, Strings, and Basic Data StructuresGoal : Use arrays and strings to manage game data like maps or inventories.Key Concepts :
//•	Arrays(1D and 2D).
//•	std::string manipulation.
//•	std::vector for dynamic arrays.
//•	Basic string parsing.
//Exercises :
//	•	Create a 1D array to store 5 enemy health values and print them in a loop.
//	•	Use a 2D array(char[5][5]) to represent a game map with walls(#) and a player(@), then print it.
//	•	Write a program to store a player’s inventory as a std::vector<std::string> and add / remove items.
//	•	Create a function to search a std::vector<std::string> for an item(e.g., “sword”) and return its index(or -1 if not found).
//	•	Parse a string input(e.g., “move north”) to extract the command and direction using std::string methods.
//	Mini - Project: Text - Based Maze Game
//	•	Represent a 5x5 maze as a 2D array(char maze[5][5]) with walls(#), empty spaces(), and a player(@).
//	•	Allow movement with WASD keys(input as std::cin).
//	•	Check for valid moves(no walking through walls).
//	•	Display the maze after each move.


// create a 1d array to store 5 enemy health values and print them in a loop.


//#include <iostream>

//int main() {
//	int enemyHp[5];
//
//	for (int i = 0; i <= 4; i++) {
//		std::cout << "Enter the hp :\n";
//		std::cin >> enemyHp[i];
//	}
//
//	std::cout << "Enemy Hp: ";
//	for (int i = 0; i <= 4; i++) {
//		std::cout << enemyHp[i] << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}


// Use a 2D array (char[5][5]) to represent a game map with wall (#) and a player (@), then print it.

//int main() {
//	char map[5][5] = { {'.', '.', '.', '.', '.'},
//					   {'.', '.', '.', '.', '.'},
//					   {'.', '.', '.', '.', '.'},
//					   {'.', '.', '.', '.', '.'},
//					   {'.', '.', '.', '.', '.'}};
//	char player = '@';
//
//	for (int i = 0; i <= 4; i++) {
//		for (int j = 0; j <= 4; j++) {
//
//			if (i == 0 || i == 4 || j == 0 || j == 4) {
//				map[i][j] = '#';
//			}
//			else if (i == 2 && j == 2) {
//				map[i][j] = player;
//			}
//
//			std::cout << map[i][j] << ' ';
//		}
//		std::cout << "\n";
//	}
//	return 0;
//}


// write a program to store a player's inventory as a std::vector<std::string> and add/ remove items.

//#include<vector>
//
//void addItems(std::vector<std::string> &invent,std::string item) {
//	invent.push_back(item);
//}
//
//void removeItems(std::vector<std::string> &invent, std::string item) {
//	for (int i = 0; i < invent.size(); i++) {
//		if (invent[i] == item) {
//			invent.erase(invent.begin() + i);
//		}
//	}
//}
//
//
//int main() {
//	std::vector<std::string> inventory;
//	std::string ans;
//	std::string item;
//	bool running = true;
//
//	while (running) {
//		std::cout << "do you want to add or remove to inventory, or leave?";
//		std::cin >> ans;
//
//		if (ans == "add") {
//			std::cout << "enter what you want to add to the inventory";
//			std::cin >> item;
//			addItems(inventory, item);
//		}
//		else if (ans == "remove") {
//			std::cout << "enter what you want to remove from the inventory";
//			std::cin >> item;
//			removeItems(inventory, item);
//		}
//		else if(ans == "leave") {
//			running = false;
//		}
//		else {
//			std::cout << "\n try again! \n";
//		}
//		for (int i = 0; i < inventory.size(); i++) {
//			std::cout << inventory[i] << std::endl;
//		}
//	}
//}


//// create a fucntion to search a std::vector<std::string> for an item (e.g., "sword") and return its index (or -1 if not found).
//#include <vector>
//
//int search(std::vector<std::string> &bag,std::string &item) {
//	for (int i = 0; i < bag.size(); i++) {
//		if (item == bag[i]) {
//			return i;
//		}
//	}
//	return -1;
//	
//}
//
//
//int main() {
//	std::vector<std::string> bag = { "sword", "knife" , "gun", "gems" };
//	std::string item;
//
//	std::cout << "Enter the name of the item you want to search: ";
//	std::cin >> item;
//
//	std::cout << search(bag, item);
//
//}


 //parse a stirng input (e.g., "move north") to extract the command and direction using std::stirng methods.
//#include <sstream>
//int main() {
//	std::string input;
//
//	std::cout << "where do you want to go?";
//	std::getline(std::cin, input);
//
//	std::istringstream ss(input);
//	std::string state, direction;
//
//	ss >> state >> direction;
//	std::cout << "State: " << state << "\n";
//	std::cout << "Direction: " << direction << "\n";
//
//	return 0;
//}


//Mini - Project: Text - Based Maze Game
//•	Represent a 5x5 maze as a 2D array(char maze[5][5]) with walls(#), empty spaces(), and a player(@).
//•	Allow movement with WASD keys(input as std::cin).
//•	Check for valid moves(no walking through walls).
//•	Display he maze after each move.


//void map(char maze[5][5]) {
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            std::cout << maze[i][j] << " ";
//        }
//        std::cout << "\n";
//    }
//}
//
//int main() {
//	char maze[5][5] = {
//    {'#', '#', '#', '#', '#'},
//    {'#', ' ', ' ', ' ', '#'},
//    {'#', ' ', '#', ' ', '#'},
//    {'#', '@', ' ', ' ', '#'},
//    {'#', '#', '#', '#', '#'}
//    };
//    map(maze);
//    char input;
//    int posX, posY;
//    bool running = true;
//  
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            if (maze[i][j] == '@') {
//                posX = i;
//                posY = j;
//            }
//        }
//    }
//
//    while (running) {
//        std::cout << "Where do you want to move? ";
//        std::cin >> input;
//
//        if (input == 'w' && maze[posX - 1][posY] != '#') {
//            maze[posX][posY] = ' ';
//            posX--;
//            maze[posX][posY] = '@';
//            system("cls");
//            map(maze);
//        }
//        
//        else if (input == 'a' && maze[posX][posY - 1] != '#') {
//            maze[posX][posY] = ' ';
//            posY--;
//            maze[posX][posY] = '@';
//            system("cls");
//            map(maze);
//        }
//        else if (input == 's' && maze[posX + 1][posY] != '#') {
//            maze[posX][posY] = ' ';
//            posX++;
//            maze[posX][posY] = '@';
//            system("cls");
//            map(maze);
//        }
//        else if (input == 'd' && maze[posX][posY + 1] != '#') {
//            maze[posX][posY] = ' ';
//            posY++;
//            maze[posX][posY] = '@';
//            system("cls");
//            map(maze);
//        }
//        else if  (input == 'q') running = false;
//        else {
//            std::cout << "Can't go through walls \n";
//        }
//    }
//}