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
void check(vector<vector<string>>& board) {
	string x = "X";
	string o = "O";
	int count;
	
	for (int i = 0; i < board.size(); i++) {
		count = 0;
		for (int j = 0; j < board.size(); j++) {
			if (board[i][j] == x) {
				count += 1;
			}
		}
		if (count == 3) {
			cout << "X wins";
		}

	}
	for (int i = 0; i < board.size(); i++) {
		count = 0;
		for (int j = 0; j < board.size(); j++) {
			if (board[i][j] == o) {
				count += 1;
			}
		}
		if (count == 3) {
			cout << "O wins";
		}

	}
	for (int i = 0; i < board.size(); i++) {
		count = 0;
		if (board[i][i] == x) {
			count += 1;
		}
		if (count == 3) {
			cout << "X wins";
		}
	}
	for (int i = 0; i < board.size(); i++) {
		count = 0;
		if (board[i][i] == o) {
			count += 1;
		}
		if (count == 3) {
			cout << "O wins";
		}
	}

	for (int i = 0; i < board.size(); i++) {
		for (int j = board.size() - 1; j > 0; j--) {
			count = 0;
			if (board[i][i] == o) {
				count += 1;
			}
			if (count == 3) {
				cout << "X wins";
			}
		}
	}
	for (int i = 0; i < board.size(); i++) {
		for (int j = board.size() - 1; j > 0; j--) {
			count = 0;
			if (board[i][i] == o) {
				count += 1;
			}
			if (count == 3) {
				cout << "O wins";
			}
		}
	}

}
vector<vector<string>> move(vector<vector<string>>& board, string& playerMove, string& sign) {
	int x = playerMove[0] - '0';
	int y = playerMove[1] - '0';
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			if (i == x && j == y) {
				board[i][j] = sign;
			}
		}
	}
	return board;
	check(board);
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

		if (playerMove == "exit") {
			playing = false;
			break;
		}
	}

	displayBoard(board);
}
