//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<vector<string>> createMap(int mrow, int mcol, vector<vector<string>>& map) {
//	
//	for (int i = 0; i < mrow; i++) {
//		vector<string> array;
//		for (int j = 0; j < mcol; j++) {
//			if (i == 0 || i == mrow - 1) {
//				array.push_back("#");
//			}
//			else if (j == 0 || j == mcol - 1) {
//				array.push_back("#");
//			}
//			else {
//				array.push_back(" ");
//			}
//		}
//		map.push_back(array);
//	}
//	return map;
//}
//
//void show(vector<vector<string>> map) {
//	for (int i = 0; i < map.size(); i++) {
//		for (int j = 0; j < map[i].size(); j++) {
//			std::cout << map[i][j];
//		}
//		std::cout << endl;
//	}
//}
//
//
//int main() {
//	vector<vector<string>> map;
//	string keys;
//	bool game = true;
//	createMap(20,10, map);
//	int x = 1;
//	int y = 1;
//
//	while (game) {
//		map[x][y] = "@";
//		show(map);
//
//		std::cin >> keys;
//		if (keys == "w") {
//			y -= 1;
//			system("cls");
//		}
//		else if (keys == "s") {
//			y += 1;
//			system("cls");
//		}
//		else if (keys == "a") {
//			x -= 1;
//
//			system("cls");
//		}
//		else if (keys == "d") {
//			x += 1;
//			system("cls");
//		}
//	}
//	
//
//}


#include<iostream>
#include<vector>
using namespace std;
bool check(vector<vector<string>>& board) {
	string x = "X";
	string o = "O";

	for (int i = 0; i < board.size(); i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
			if (board[i][0] == x || board[i][0] == o) {
				cout << board[i][0] << " is the winner!";
				return true;
			}
		}
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
			if (board[0][i] == x || board[0][i] == o) {
				cout << board[0][i] << " is the winner!";
				return true;
			}
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
		if (board[0][0] == o || board[0][0] == x) {
			cout << board[0][0] << " is the winner!";
			return true;
		}
		
	}
	if ( board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
		if (board[0][2] == o || board[0][2] == x) {
			cout << board[0][2] << " is the winner!";
			return true;
		}
	}
	return false;
}
vector<vector<string>> move(vector<vector<string>>& board, string& playerMove, string& sign) {
	int x = playerMove[0] - '0';
	int y = playerMove[1] - '0';
	if (board[x][y] == "_") {
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board.size(); j++) {
				if (i == x && j == y) {
					board[i][j] = sign;
				}
			}
		}
	}
	else {
		std::cout << "wrong input" <<endl;
	}
	
	return board;
}



void displayBoard(vector<vector<string>> board) {
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}


int main() {
	vector<vector<string>> board = { {"_", "_","_"},
									 {"_", "_","_"},
									 {"_", "_","_"} };
	string playerMove;
	bool playing = true;
	vector<string> symbol = { "X", "O" };
	int sign = 0;
	while (playing) {
		cout << "Player Move:";
		cin >> playerMove;

		move(board, playerMove, symbol[1 - sign]);
		displayBoard(board);
		
		sign = 1 - sign;
		if (check(board)) {
			playing = false;
		};
	}
}
