#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;
	int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0, input_rest;
	cout << input << endl;
	input_rest = input;
	cem = input / 100;
	input_rest = input_rest % 100;
	cinquenta = input_rest / 50;
	input_rest = input_rest % 50;
	vinte = input_rest / 20;
	input_rest = input_rest % 20;
	dez = input_rest / 10;
	input_rest = input_rest % 10;
	cinco = input_rest / 5;
	input_rest = input_rest % 5;
	dois = input_rest / 2;
	input_rest %= 2;
	um = input_rest;
	
	// results
	cout << cem << " nota(s) de R$ 100,00" << endl;
	cout << cinquenta << " nota(s) de R$ 50,00" << endl;
	cout << vinte << " nota(s) de R$ 20,00" << endl;
	cout << dez << " nota(s) de R$ 10,00" << endl;
	cout << cinco << " nota(s) de R$ 5,00" << endl;
	cout << dois << " nota(s) de R$ 2,00" << endl;
	cout << um << " nota(s) de R$ 1,00" << endl;
	return 0;
}