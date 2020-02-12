#include <iostream>
#include <cstring>
using namespace std;

int main () {
	char sMatring [4][100];
	for(int i = 0; i < 4; i ++) {
		cin >> sMatring [i];
	}
	int iMatring [4][100];
	int strLen = strlen (sMatring[0]);
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < strLen; j++) {
			iMatring[i][j] = sMatring[i][j] - '0';
		}
	}
	int F = iMatring[0][0] * 1000 + iMatring[1][0] * 100 + iMatring [2][0] * 10 + iMatring [3][0];
	int L = iMatring[0][strLen - 1] * 1000 + iMatring[1][strLen - 1] * 100 + iMatring [2][strLen - 1] * 10 + iMatring [3][strLen - 1];
	int vetorColunas [strLen - 2];
	int divisor;
	for (int i = 1; i < strLen - 1; i ++) {
		vetorColunas[i-1] = 0;
		divisor = 1000;
		for(int j = 0; j < 4; j++) {
			vetorColunas[i-1] += iMatring[j][i] * divisor;
			divisor = divisor / 10;
		}
	}
	for(int i = 0; i < strLen - 2; i ++) {
		cout << char ((F * vetorColunas[i] + L) % 257);
	}	
	cout <<  endl;
	return 0;
}