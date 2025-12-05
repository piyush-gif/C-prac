#include<iostream>
#include<vector>

class Matrix{
public:
	std::vector<std::vector<int>> mat;

	void add(Matrix* mat) {

	}
	
};

std::vector<std::vector<int>> addMatrix(std::vector<std::vector<int>> mat1, std::vector<std::vector<int>> mat2) {
	std::vector<std::vector<int>> mat3;
	for (int i = 0; i < mat1.size(); i++) {
		std::vector<int> tot;
		for (int j = 0; j < mat1.size(); j++) {
			int total = 0;
			for (int k = 0; k < mat2.size(); k++) {
				total += mat1[i][k] + mat2[k][j];
				
			}
			tot.push_back(total);
		}
		mat3.push_back(tot);
	}
	return mat3;
}

std::vector<std::vector<int>> scaleMatrix(std::vector<std::vector<int>> mat3, int scale) {
	std::vector<std::vector<int>> scaled;
	for (int i = 0; i < mat3.size(); i++) {
		std::vector<int> scaling;
		for (int j = 0; j < mat3[i].size(); j++) {
			scaling.push_back(mat3[i][j] * scale);
		}
		scaled.push_back(scaling);
	}
	return scaled;
}

void printMatrix(std::vector<std::vector<int>> mat3) {
	for (int i = 0; i < mat3.size(); i++) {
		for (int j = 0; j < mat3[i].size(); j++) {
			std::cout << mat3[i][j] << " ";
		}
		std::cout << std::endl;
	}
}



int main() {
	/*Matrix* mat = new Matrix();
	mat->add(mat);*/
	std::vector<std::vector<int>> mat1 = { {1, 2, 3},
										   {2, 3, 4} };
	std::vector<std::vector<int>> mat2 = { {1, 2},
										   {2, 3},
										   {4, 5} };

	std::vector<std::vector<int>> vec = addMatrix(mat1, mat2);
	printMatrix(vec);
	printMatrix(scaleMatrix(vec, 3));
}