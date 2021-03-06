#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	while (true) {
		
		int matrix_size;
		cin >> matrix_size;
		
		if (matrix_size == 0) {
			break;
		}
		else {
			
			// Allocate
			int** matrix = new int*[matrix_size];
			for(int i = 0; i < matrix_size; ++i)
				matrix[i] = new int[matrix_size];
			
			// Solve problem
			for (int k = 0; k < matrix_size+1; ++k) {		
				for (int i = k; i < matrix_size-k; ++i) {
					for (int j = k; j < matrix_size-k; ++j) {
						matrix[i][j] = k+1;
					}
				}
			}

			// Print result
			for (int i = 0; i < matrix_size; ++i) {
				for (int j = 0; j < matrix_size-1; ++j) {
					cout << setw(3) << right << matrix[i][j] << " ";
				}
				cout << setw(3) << right << matrix[i][matrix_size-1];
				cout << endl;
			}
			cout <<endl;
			// Deallocate
			for(int i = 0; i < matrix_size; ++i)
				delete matrix[i];
			delete matrix;
		}
	}
	return 0;
}