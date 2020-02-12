#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int distance;
	double fuel, media;
	cin >> distance >> fuel;
	media = distance / fuel;
	cout << fixed << setprecision(3)  << media << " km/l" << endl;
	return 0;
}