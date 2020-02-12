#include <iostream>
using namespace std;
int main(){
	int limit;
	cin >> limit;
	for(int i = 2; i <= limit; i += 2){
		cout << i << "^2 = " <<i*i << endl;
	}
	return 0;
}