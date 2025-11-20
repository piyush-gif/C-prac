//#include <cstdlib>
//#include <ctime>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//vector<int> shiftArr(vector<int> array, int shift) {
//	vector<int> array2;
//	int size = array.size() - shift;
//	for (int i = size; i < array.size(); i++) {
//		array2.push_back(array[i]);
//
//	}
//	for (int i = 0; i < size; i++) {
//		array2.push_back(array[i]);
//	}
//	return array2;
//}
//
//vector<vector<int>> sudoku(vector<int> array) {
//	vector<vector<int>> sudo;
//	vector<int> array1 = array;
//	for (int i = 0; i < array.size(); i++) {
//		if (i == 0) {
//			sudo.push_back(array);
//		}
//		else if (i == 2 || i == 5) {
//			array1 = shiftArr(array1, 1);
//			sudo.push_back(array1);
//		}
//		else {
//			array1 = shiftArr(array1, 3);
//			sudo.push_back(array1);
//		}
//	}
//	return sudo;
//}
//
//void print(vector<vector<int>> array, int flag) {
//
//	for (int i = 0; i < array.size(); i++) {
//		for (int j = 0; j < array[i].size(); j++) {
//			int random_num = rand() % 9 + 1;
//			if (flag == 0) {
//				random_num = 10;
//			}
//			if (random_num > 7) {
//				std::cout << array[i][j] << " ";
//			}
//			else {
//				std::cout << " " << " ";
//			}
//		}
//		std::cout << std::endl;
//	}
//}
//
//
//int main() {
//	srand(time(0));
//
//	vector<int> array = { 1,2,3,4,5,6,7,8,9 };
//
//	print(sudoku(array), 0);
//	print(sudoku(array), 1);
//
//}