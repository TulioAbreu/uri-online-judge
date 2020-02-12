#include <iostream>
#include <map>
using namespace std;

int main() {
	map<char, int> values;
	int runes_qt, win_score;
	
	cin >> runes_qt >> win_score;
	
	for (int i = 0; i < runes_qt; ++i) {
		char c;
		int in;
		cin >> c >> in;
		values[c] = in;
	}
	
	int r;
	int current_score = 0;
	cin >> r;
	for (int i = 0; i < r; ++i) {
		char c;
		cin >> c;
		
		current_score += values[c];
	}
	cout << current_score << endl;
	if (current_score >= win_score) {
		cout << "You shall pass!" << endl;
	}
	else {
		cout << "My precioooous" << endl;
	}
	
	return 0;
}