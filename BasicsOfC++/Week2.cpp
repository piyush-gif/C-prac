//Week 2: Functions and ModularityGoal : Organize code into reusable functions to improve readability and structure game logic.Key Concepts :
//•	Function declarations and definitions.
//•	Parameters(pass - by - value, pass - by - reference).
//•	Return types.
//•	Function overloading.
//•	Scope and lifetime of variables.
//Exercises :
//	•	Write a function printHealthBar(int health, int maxHealth) that prints a text - based health bar(e.g., [####] for 4 / 10 health).
//	•	Create a function calculateDamage(int attack, int defense) that returns damage dealt and handles edge cases(e.g., negative damage returns 0).
//	•	Write a function getValidInput(int min, int max) that prompts for input and loops until a valid number in the range is entered.
//	•	Overload a function movePlayer to handle movement by either a fixed amount(int steps) or to a specific position(int x, int y).
//	•	Create a function to print a game board(e.g., 3x3 grid) using a 2D array as a parameter.
//	Mini - Project: Tic - Tac - Toe(Basic)
//	•	Use functions to separate logic : drawBoard, makeMove, checkWin.
//	•	Store the board as a char[3][3](e.g., 'X', 'O', ' ').
//	•	Let two players take turns entering moves(row, column).
//	•	Check for wins or draws after each move.




// write a function printHealthBar (int health, int maxhealth) that prints a text-based healthbar (e.g [###] for 4/10 health)
//#include<iostream>

//void printHealthBar(int health, int maxHealth){
//
//	int barWidth = 10;
//	int filled = (health * barWidth) / maxHealth;
//
//	std::cout << "[";
//	for (int i = 0; i < barWidth; i++) {
//		if (i < filled) std::cout << "#";
//		else std::cout << " ";
//	}
//	std::cout << "]" << health << "/" << maxHealth;
//
//};
//
//
//int main() {
//	printHealthBar(4, 10);
//};
//
//


// create a funciton calculateDamage( int attack , int defence) that returns damafge dealt and handles edge cases ( e.g., negative damage returns 0) .

//int calculateDamage(int attack, int defence) {
//	int damage = attack - defence;
//
//	if (damage > 0) return damage;
//	else return 0;
//
//};
//
//
//int main() {
//	std::cout << calculateDamage(20, 15);
//}



// write a function getValidInput (int min, int max) that prompts for input and loops until a valid number in the range is entered.

//int getValidInput(int min, int max) {
//	int input;
//
//	while (true) {
//		std::cout << "Enter a valid input : \n";
//		std::cin >> input;
//
//		if (input <= max && input >= min) {
//			break;
//		}
//		
//	}
//	return input;
//};
//
//int main() {
//	std::cout << getValidInput(1, 10);
//}


////Overload a function movePlayer ot handle movement by either a fixed amount(int steps) or to a specific postion ( int x, int y).
//int position = 0;
//int posX = 0;
//int posY = 0;
//
//void movePlayer(int x, int y) {
//	posX += x;
//	posY += y;
//}
//
//int movePlayer(int steps) {
//	position += steps;
//	return position;
//}
//
//int main() {
//	movePlayer(5, 5);
//	std::cout << posY << posX << std::endl;
//	std::cout << movePlayer(5);
//}
//



// Create a function to print a game board(e.g., 3x3 grid) using a 2D array as a parameter.

//void gameBoard(int grid[3][3]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			std::cout << grid[i][j] << " ";
//		}
//		std::cout << "\n";
//	}
//}
//
//
//int main() {
//	int grid[3][3] = { {1, 2, 3},
//					   {2, 3, 4},
//					   {5, 6, 7}};
//	gameBoard(grid);
//	return 0;
//}



//Mini project
// TIC- TAC -TOE

//•	Use functions to separate logic : drawBoard, makeMove, checkWin.
//•	Store the board as a char[3][3](e.g., 'X', 'O', ' ').
//•	Let two players take turns entering moves(row, column).
//•	Check for wins or draws after each move.


//void drawBoard(char board[3][3]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			std::cout << board[i][j] << " ";
//		}
//		std::cout << "\n";
//	}
//};
//
//void makeMove(int& row, int& col, char (&board)[3][3], char playerSymbol) {
//
//	board[row][col] = playerSymbol;
//};
//
//char checkWins(char board[3][3]) {
//
//	for (int i = 0; i < 3; i++)
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '_')
//			return board[i][0];
//	
//
//	for (int j = 0; j < 3; j++)
//		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != '_')
//			return board[0][j];
//
//
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '_')
//		return board[0][0];
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '_')
//		return board[0][2];
//	
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 3; j++)
//			if (board[i][j] == '_')
//				return ' '; 
//	return 'D'; 
//}
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    char grid[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
//    char player[2] = { 'X', 'O' };
//    int currentPlayer = 0, row, col;
//    bool gameRunning = true;
//
//    while (gameRunning) {
//        drawBoard(grid);
//        cout << "Player " << player[currentPlayer] << "'s turn. Enter row (0-2): ";
//        while (!(cin >> row) || row < 0 || row > 2) {
//            cout << "Invalid row, try again: ";
//            cin.clear();
//            cin.ignore(10000, '\n');
//        }
//        cout << "Enter column (0-2): ";
//        while (!(cin >> col) || col < 0 || col > 2) {
//            cout << "Invalid column, try again: ";
//            cin.clear();
//            cin.ignore(10000, '\n');
//        }
//
//        if (grid[row][col] == ' ') {
//            makeMove(row, col, grid, player[currentPlayer]);
//            char result = checkWins(grid);
//            if (result == 'X' || result == 'O') {
//                drawBoard(grid);
//                cout << "Player " << result << " wins!\n";
//                gameRunning = false;
//            }
//            else if (result == 'D') {
//                drawBoard(grid);
//                cout << "It's a draw!\n";
//                gameRunning = false;
//            }
//            else {
//                currentPlayer = 1 - currentPlayer;
//            }
//        }
//        else {
//            cout << "Cell already taken!\n";
//        }
//    }
//    return 0;
//}