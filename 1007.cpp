#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a[5];
	cin >> a[1] >> a[2] >> a[3] >> a[4];
	a[5] = a[1] * a[2] - a[3] * a[4];
	cout << fixed << setprecision(1) << "DIFERENCA = "<< a[5] <<endl;
	return 0;
}