#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	string name;
	double salary, sale;
	cin >> name >> salary >> sale;
	double total;
	total = salary + 0.15 * sale;
	cout << fixed << setprecision(2) <<  "TOTAL = R$ " << total << endl;
	return 0;
}