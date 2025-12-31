// ttt
#include<iostream>
#include<vector>
using namespace std;
bool check(vector<vector<string>>& board) {
	string x = "X";
	string o = "O";
	string symbol;
	for (int i = 0; i < board.size(); i++) {
		if (!(board[i][i] == x || board[i][i] == o)) {
			continue;
		}
		symbol = board[i][i];
		int count = 0;
		int count2 = 0;
		int count3 = 0;
		for (int j = 0; j < board[i].size(); j++) {
			if (symbol == board[i][j]) {
				count++;
			}
			if (symbol == board[j][i]) {
				count2++;
			}
			if (symbol == board[j][j]) {
				count3++;
			}
		}
		if (count == 3 || count2 == 3 || count3 == 3) {
			cout << symbol << " is the winner!";
			return true;
		} 
		count = 0;
	}
	int lin = board.size() - 1;
	if (board[0][lin] == x || board[0][lin] == o) {
		int count = 0;
		symbol = board[0][lin];
		for (int k = lin; k >= 0; k--) {
			if (symbol == board[lin - k][k]) {
				count++;
			}
		}
		if (count == 3) {
			cout << symbol << " is the winner!";
			return true;
		}
	}
	return false;
}

vector<vector<string>> move(vector<vector<string>>& board, string& playerMove, string& symbol, int& sign) {
	int x = playerMove[0] - '0';
	int y = playerMove[1] - '0';
	if (board[x][y] == "_") {
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board.size(); j++) {
				if (i == x && j == y) {
					board[i][j] = symbol;
				}
			}
		}
	}
	else {
		sign = 0;
		std::cout << "wrong input" << endl;
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
	vector<vector<string>> board = { {"_", "_", "_"},
									 {"_", "_", "_"},
									 {"_", "_", "_"} };
	string playerMove;
	bool playing = true;
	vector<string> symbol = { "X", "O" };
	int sign = 0;
	while (playing) {
		cout << "Player Move:";
		cin >> playerMove;

		if (playerMove[0] - '0' >= 0 && playerMove[1] - '0' <= 2){
			move(board, playerMove, symbol[1 - sign], sign);
			displayBoard(board);

			sign = 1 - sign;
			if (check(board)) {
				playing = false;
			};
		}
		else {
			cout << "try numbers between 0 to 2" << endl;
		}
	}
}
