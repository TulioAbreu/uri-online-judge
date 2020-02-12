#include <iostream>
using namespace std;

struct Ponto {
	float x, y;
};

int main() {
	struct Ponto ponto;
	cin >> ponto.x >> ponto.y;
	
	if (ponto.x == 0 && ponto.y == 0) {
		cout << "Origem" << endl;
	} else if (ponto.x == 0) {
		cout << "Eixo Y" << endl;
	} else if (ponto.y == 0) {
		cout << "Eixo X" << endl;
	} else if (ponto.x > 0 && ponto.y > 0) {
		cout << "Q1" << endl;
	} else if (ponto.x > 0 && ponto.y < 0) {
		cout << "Q4" << endl;
	} else if (ponto.x < 0 && ponto.y > 0) {
		cout << "Q2" << endl;
	} else if (ponto.x < 0 && ponto.y < 0) {
		cout << "Q3" << endl;
	}
	
	return 0;
}