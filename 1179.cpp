#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

bool is_full(vector<int>* vec) {
	return vec->size() == 5;
}

void clear(string out_str, vector<int>* vec) {
	for (int i = 0; i < (int)vec->size(); ++i) {
		printf("%s[%d] = %d\n", out_str.c_str(), i, vec->at(i));
	}
	vec->clear();
}

int main() {
	vector<int> pares, impares;
	
	for (int i = 0; i < 15; ++i) {
		int novo_valor;
		cin >> novo_valor;
		
		vector<int>* modified_vector = nullptr;
		string out_str = "";

		if (novo_valor % 2 == 0) {
			modified_vector = &pares;
			out_str = "par";
		}
		else {
			modified_vector = &impares;
			out_str = "impar";
		}

		if (modified_vector) {
			if (is_full(modified_vector)) {
				clear(out_str, modified_vector);
			}
			modified_vector->push_back(novo_valor);
		}
	}
	
	clear("impar", &impares);
	clear("par", &pares);
	
	return 0;
}