#include <iostream>
using namespace std;

bool even(int number) {
	return (number % 2 == 0);
}

void program()
{
	int number;
	cin >> number;
	
	if (number == 0) {
		cout << "NULL" << endl;
	} else if (number > 0) {
		if (even(number)) {
			cout << "EVEN POSITIVE" << endl;
		} else {
			cout << "ODD POSITIVE" << endl;
		}
	} else if (number < 0) {
		if (even(number)) {
			cout << "EVEN NEGATIVE" << endl;
		} else {
			cout << "ODD NEGATIVE" << endl;
		}
	}
}

int main() 
{
	int execTimes;
	cin >> execTimes;

	for (int i = 0; i < execTimes; i++) {
		program();
	}
	
	return 0;
}