#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a[3];
	cin >> a[1] >> a[2];
	a[3] = (3.5 * a[1] + 7.5 * a[2])/11;
	cout << fixed << setprecision(5) << "MEDIA = "<< a[3] <<endl;
	return 0;
}