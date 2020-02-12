#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	double N[100];
	double X;
	cin >> X;
	
	N[0] = X;
	for (int i = 1; i < 100; ++i) {
		N[i] = N[i-1]/2.f;
	}	

	for (int i = 0; i < 100; ++i) {
		printf("N[%d] = %.4f\n", i, N[i]);
	}
	
	return 0;
}