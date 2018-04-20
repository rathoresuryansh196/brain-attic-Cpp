#include<vector>

using namespace std;

void reflect(vector<vector<char>>& matrix) {
   	for (unsigned short i = 0; i < matrix.size() / 2; ++i) {
		for (unsigned short j = 0; j < matrix.size(); ++j) {
	   		swap(matrix[i][j], matrix[matrix.size() - 1 - i][j]);
		}
	}
}
