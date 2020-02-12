#include <iostream>
#include <cstdio>
using namespace std;

bool is_valid(int i, int j) {
	if (i < j) {
		if (i+j < 11) {
			return true;
		}
	}
	return false;
}

int main() {
	double M[12][12];
	char operation;
	
	cin >> operation;
	for (int i = 0; i < 12; ++i) {
		for(int j = 0; j < 12; ++j) {
			cin >> M[i][j];
		}
	}

	double sum = 0;
	int terms = 0;
	for (int i = 0; i < 12; ++i) {
		for(int j = 0; j < 12; ++j) {
			if (is_valid(i, j)) {
				sum += M[i][j];
				terms++;
			}
		}
	}
	
	switch(operation) {
	case 'S': {
		printf("%.1f\n", sum);
	} break;
	case 'M': {
		printf("%.1f\n", sum/terms);
	} break;
	}
	
	return 0;
}