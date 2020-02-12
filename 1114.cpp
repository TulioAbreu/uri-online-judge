#include <iostream>
using namespace std;
int main(){
	const int key = 2002;
	int insert;
	do{
		cin >> insert;
		if(insert != key){
			cout << "Senha Invalida" << endl;
		}
	}while(insert != key);
	cout << "Acesso Permitido" << endl;
	return 0;
}