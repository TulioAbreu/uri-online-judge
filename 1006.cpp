#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a[4];
	cin >> a[1] >> a[2] >> a[4];
	a[3] = (2 * a[1] + 3 * a[2] + a[4] * 5)/10;
	cout << fixed << setprecision(1) << "MEDIA = "<< a[3] <<endl;
	return 0;
}