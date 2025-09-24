//Week 7: File I / O and Data PersistenceGoal : Save and load game data to make games persistent.Key Concepts :
//•	File streams(std::ifstream, std::ofstream).
//•	Reading / writing text files.
//•	Basic data serialization(e.g., CSV format).
//Exercises :
//	•	Write a program to save a player’s name and score to a text file.
//	•	Read a text file containing a 5x5 maze and load it into a 2D array.
//	•	Create a function to save a std::vector<std::string>(inventory) to a file.
//	•	Load a high score table from a file and display it sorted.
//	•	Write a program to log game events(e.g., “Player attacked Goblin”) to a file.
//	Mini - Project: Tic - Tac - Toe with Save / Load
//	•	Extend your Week 2 Tic - Tac - Toe to save the board state to a file after each move.
//	•	Allow loading a saved game to resume play.
//	•	Store the board as a simple text format(e.g., “X O _ _ X _ _ _ O”).
#include <fstream>
#include <string>

//int main() {
//    std::ofstream out("player.txt");
//    std::string name = "Alice";
//    int score = 150;
//
//    if (out.is_open()) {
//        out << name << " " << score << "\n";
//    }
//}

//#include <iostream>
//
//
//int main() {
//    char maze[5][5];
//    std::ifstream in("maze.txt");
//
//    for (int i = 0; i < 5; i++) {
//        std::string line;
//        std::getline(in, line);
//        for (int j = 0; j < 5; j++) {
//            maze[i][j] = line[j];
//        }
//    }
//
//    // Print loaded maze
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) std::cout << maze[i][j];
//        std::cout << "\n";
//    }
//}


// • Create a function to save a std::vector<std::string>(inventory) to a file.


// ifstream is for reading and ofstream is for writing
//#include<iostream>
//#include<vector>
//
//void save(std::vector <std::string> word) {
//	std::ofstream out("save.txt");
//
//
//	
//
//}
//
//int main() {
//	
//	std::vector<std::string> sentence ;
//
//
//	return 0;
//}