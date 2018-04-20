#include <vector>;

using namespace std;

void matrixRotateC(vector<vector<char>>& matrix) {
	int currentLevel = 0;
	int last = matrix.size() -1;
	int totalLevel = matrix.size()/ 2;

	while (currentLevel < totalLevel) {
		for (unsigned short i = 0; i < last; ++i) {
			swap(matrix[currentLevel][i], matrix[i][last]);
			swap(matrix[currentLevel][i], matrix[last][last - i + currentLevel]);
			swap(matrix[currentLevel][i], matrix[last - i + currentLevel][currentLevel]);
		}
		++currentLevel;
		--last;
	}
}
