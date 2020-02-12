#include <iostream>
using namespace std;
int main(){
	int days, ano, mes, dia, aux;
	cin >> days;
	ano = days / 365;
	aux = days % 365;
	mes = aux / 30;
	dia = aux % 30;
	cout << ano <<" ano(s)" << endl;
	cout << mes <<" mes(es)" << endl;
	cout << dia <<" dia(s)" << endl;
	return 0;
	
}