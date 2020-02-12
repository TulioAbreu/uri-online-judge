#include <iostream>
#include <vector>
using namespace std;

const int FIB_ARR_SIZE = 61;

uint64_t fib_arr[FIB_ARR_SIZE];

void start_fib_arr() {
	fib_arr[0] = 0;
	fib_arr[1] = 1;
	for (int i = 2; i < FIB_ARR_SIZE; ++i) {
		fib_arr[i] = fib_arr[i-1] + fib_arr[i-2];
	}
}


int main() {
	start_fib_arr();

	int n_tests;
	cin >> n_tests;
	
	for (int i = 0; i < n_tests; ++i) {
		int current_number;
		cin >> current_number;
		
		cout << "Fib(" << current_number << ") = "<< fib_arr[current_number] << endl;
	}
	return 0;
}