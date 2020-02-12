#include<iostream>
using namespace std;
int main(){
	int i, quantidade;
	int x2 = 0, x3 = 0, x4 = 0, x5 = 0;
	cin >> quantidade;
	int numeros[quantidade];
	for(i=0; i<quantidade; i++){
		cin >> numeros[i];
	}
	for(i=0; i<quantidade; i++){
		if (numeros[i] % 2 == 0){
			x2++;
		}
		if(numeros[i] % 3 == 0){
			x3++;
		}
		if(numeros[i] % 4 == 0){
			x4++;
		}
		if(numeros[i] % 5 == 0){
			x5++;
		}
	}
	cout << x2 <<" Multiplo(s) de 2"<<endl;
	cout << x3 <<" Multiplo(s) de 3"<<endl;
	cout << x4 <<" Multiplo(s) de 4"<<endl;
	cout << x5 <<" Multiplo(s) de 5";
	cout <<endl;
	return 0;
}