#include <iostream>
#include <string>
using namespace std;

int main() {
	int n_people;
	cin >> n_people;
	
	int anoes = 0, elfos = 0, humanos = 0, magos = 0, hobbits = 0;
	
	for (int i = 0; i < n_people; ++i) {
		string nothing;
		cin >> nothing;
		
		char type;
		cin >> type;
		
		switch (type) {
		case 'A': {
			anoes++;
		} break;
		case 'E': {
			elfos++;
		} break;
		case 'H': {
			humanos++;
		} break;
		case 'M': {
			magos++;
		} break;
		case 'X': {
			hobbits++;
		} break;
		default: {}
		}
	}
	
	cout << hobbits << " Hobbit(s)" << endl;
	cout << humanos << " Humano(s)" << endl;
	cout << elfos << " Elfo(s)" << endl;
	cout << anoes << " Anao(s)" << endl;
	cout << magos << " Mago(s)" << endl;
	return 0;
}