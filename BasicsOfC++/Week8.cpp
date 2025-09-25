//Week 8: Algorithms and Logic for GamesGoal : Implement game - specific algorithms like state machines and AI.Key Concepts :
//•	Random numbers(std::rand, <random>).
//•	State machines for game states.
//•	Basic algorithms(searching, sorting).
//•	Simple AI logic.
//Exercises :
//	•	Use <random> to generate random enemy stats(e.g., health between 50–100).
//	•	Create a state machine using enum (e.g., Menu, Playing, GameOver) to manage game flow.
//	•	Write a function to sort a std::vector<int> of scores using std::sort.
//	•	Implement a linear search to find an enemy by name in a std::vector.
//	•	Create a simple AI that picks a random valid move in Tic - Tac - Toe.
//	Mini - Project : Hangman with AI
//	•	Build a Hangman game where the computer picks a random word from a std::vector<std::string>.
//	•	Use a state machine to switch between menu, guessing, and game over.
//	•	Track wrong guesses and display an ASCII hangman(6 tries max).

//#include<iostream>
//#include<vector>
//#include<random>
//
//enum class Gamestate{ Menu, Playing , GameOver};
//
//
//void randomstats(int& health) {
//	std::random_device rd;
//	std::mt19937 gen(rd());
//	std::uniform_int_distribution<> dist(50, 100);
//	int num = dist(gen);
//	health = num;
//	std::cout << "The health is : " << health << std::endl;
//
//}
//
//void sorting(std::vector<int>& score) {
//	std::sort(score.begin(), score.end());
//}
//
//void searching(std::vector<std::string> name) {
//
//	std::string enemy;
//	std::cout << "Which player do you want to find?" << std::endl;
//	std::cin >> enemy;
//
//	bool found = false;
//	for (size_t i = 0; i < name.size(); i++) {
//		if (enemy == name[i]) {
//			std::cout << "We found the enemy "<< enemy << std::endl;
//			found = true;
//			break;
//		}
//	}
//	if (!found) {
//		std::cout << "The enemy ran!" << std::endl;
//	}
//
//}
//
//bool checking(std::vector<std::vector<char>>& board, char player) {
//
//	for (int i = 0; i < 3; i++) {
//		if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
//			return true;
//	}
//
//	for (int j = 0; j < 3; j++) {
//		if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
//			return true;
//	}
//	
//	if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
//	if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;
//
//	return false;
//	
//}
//
//void aiPlaying(std::vector<std::vector<char>>& board) {
//	bool playing = true;
//	char move[2] = { 'X' , 'O' };
//	int currentPlayer = 0;
//
//	while (playing) {
//		std::random_device rd;
//		std::mt19937 gen(rd());
//		std::uniform_int_distribution<> dist(0, 2);
//		int x = dist(gen);
//		int y = dist(gen);
//
//
//		while (board[x][y] != ' ') {
//			x = dist(gen);
//			y = dist(gen);
//		}
//
//		board[x][y] = move[currentPlayer];
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				std::cout << board[i][j] << " ";
//			}
//			std::cout << std::endl;
//		}
//		std::cout << " ------ \n";
//		if (checking(board, move[currentPlayer])){
//			std::cout << move[currentPlayer] << " Wins !" << std::endl;
//			playing = false;
//			break;
//		}
//		currentPlayer = 1 - currentPlayer;
//	}
//
//}
//
//int main() {
//
//	Gamestate state = Gamestate::Menu;
//	std::vector<int> scores = { 20, 40, 30, 25, 50 };
//	std::vector<std::string> names = { "james", "steph", "klay", "saka" };
//	std::vector<std::vector<char>> board = { { ' ', ' ', ' ' },
//										   { ' ', ' ', ' ' },
//										   { ' ', ' ', ' ' } };
//	int health;
//	sorting(scores);
//	searching(names);
//	aiPlaying(board);
//	randomstats(health);
//
//	for (int s : scores) std::cout << s << " ";
//
//	return 0;
//}