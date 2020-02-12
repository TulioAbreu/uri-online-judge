#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++){
		//char palavra[10000];
		string palavra;
		if(i == 1){
		getline(cin, palavra);
		getline(cin, palavra);
		}
		else{
			getline(cin, palavra);
		}
		double counter = 0;
		//counter = strlen(palavra);
		//cout << strlen(palavra) << endl;
		while(palavra[counter] != '\0'){
			counter++;
		}
		double time;
		time = counter / 100;
		cout << fixed << setprecision(2) << time << endl;
	}
	return 0;
}