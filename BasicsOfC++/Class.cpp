//#include<iostream>
//#include<vector>
//using namespace std;
//class Matrix {
//public:
//	vector<vector<int>> mat;
//
//	Matrix(vector<vector<int>> matrix) {
//		this->mat = matrix;
//	}
//	Matrix* addMatrix(Matrix* mat2) {
//		for (int i = 0; i < this->mat.size(); i++) {
//			for (int j = 0; j < this->mat[i].size(); j++) {
//				this->mat[i][j] += mat2->mat[i][j];
//			}
//		}
//		return this;
//	}
//
//	Matrix* subMatrix(Matrix* mat2) {
//		for (int i = 0; i < this->mat.size(); i++) {
//			for (int j = 0; j < this->mat[i].size(); j++) {
//				this->mat[i][j] -= mat2->mat[i][j];
//			}
//		}
//		return this;
//	}
//
//	Matrix* scaling(int scale) {
//		for (int i = 0; i < this->mat.size(); i++) {
//			for (int j = 0; j < this->mat[i].size(); j++) {
//				this->mat[i][j] *= scale;
//			}
//		}
//		return this;
//	}
//
//	Matrix* mulMatrix(Matrix* mat2) {
//		vector<vector<int>> vec;
//		for (int i = 0; i < this->mat.size(); i++) {
//			vector<int> vec1;
//			for (int j = 0; j < this->mat.size(); j++) {
//				int total = 0;
//				for (int k = 0; k < mat2->mat.size(); k++) {
//					
//					total += this->mat[i][k] * mat2->mat[k][j];
//					
//				}
//				vec1.push_back(total);
//				
//			}
//			vec.push_back(vec1);
//		}
//		Matrix* mulmat = new Matrix(vec);
//		return mulmat;
//	}
//
//
//	void printMatrix() {
//		for (int i = 0; i < this->mat.size(); i++) {
//			for (int j = 0; j < this->mat[i].size(); j++) {
//				cout << this->mat[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//};
//
//int main() {
//	vector<vector<int>> mat1 = { {1, 1, 1},
//								 {1, 1, 1} };
//	vector<vector<int>> mat2 = { {1, 2, 3},
//							     {2, 3, 4},};
//	
//	vector<vector<int>> mat3 = { {1, 2},
//								 {3, 4},
//								 {5, 6} };
//
//	Matrix* mat = new Matrix(mat1);
//	Matrix* mattrix = new Matrix(mat2);
//	Matrix* multiMatrix = new Matrix(mat3);
//	mat->addMatrix(mat)->scaling(5);
//	mat->subMatrix(mattrix);
//	mat->mulMatrix(multiMatrix)->printMatrix();
//}