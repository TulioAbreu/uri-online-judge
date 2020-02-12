#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main(){
	string acao;
	int i, n_abas, n_acoes;
	cin >> n_abas >> n_acoes;
	for(i=0; i<n_acoes; i++){
		cin >> acao;
		if(acao == "clicou"){
			n_abas--;
		}
		if(acao == "fechou"){
			n_abas++;
		}
	}
	cout << n_abas << endl;
	return 0;
}