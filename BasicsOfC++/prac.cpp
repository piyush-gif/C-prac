#include<iostream>
#include<vector>
using namespace std;

vector<vector<string>> createMap(int mrow, int mcol, vector<vector<string>>& map) {
	
	for (int i = 0; i < mrow; i++) {
		vector<string> array;
		for (int j = 0; j < mcol; j++) {
			if (i == 0 || i == mrow - 1) {
				array.push_back("#");
			}
			else if (j == 0 || j == mcol - 1) {
				array.push_back("#");
			}
			else {
				array.push_back(" ");
			}
		}
		map.push_back(array);
	}
	return map;
}

void show(vector<vector<string>> map) {
	for (int i = 0; i < map.size(); i++) {
		for (int j = 0; j < map[i].size(); j++) {
			std::cout << map[i][j];
		}
		std::cout << endl;
	}
}


int main() {
	vector<vector<string>> map;
	string keys;
	bool game = true;
	createMap(20,10, map);
	int x = 1;
	int y = 1;

	while (game) {
		map[x][y] = "@";
		show(map);

		std::cin >> keys;
		if (keys == "w") {
			y -= 1;
			system("cls");
		}
		else if (keys == "s") {
			y += 1;
			system("cls");
		}
		else if (keys == "a") {
			x -= 1;

			system("cls");
		}
		else if (keys == "d") {
			x += 1;
			system("cls");
		}
	}
	

}