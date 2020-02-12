#include <iostream>
using namespace std;
int main(){
	int maior, inter, menor, aux;
	cin >> menor >> inter >> maior;
	if (menor > inter){
		aux = menor;
		menor = inter;
		inter = aux;
	}
	if (menor > maior){
		aux = menor;
		menor = maior;
		maior = aux;
	}
	if (inter > maior){
		aux = inter;
		inter = maior;
		maior = aux;
	}
	cout << maior << " eh o maior" << endl;
	return 0;

}