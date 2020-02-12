#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int code, quantity1, quantity2;
	float price1, price2, total;
	cin >> code >> quantity1 >> price1;
	cin >> code >> quantity2 >> price2;
	total = (quantity1 * price1) + (quantity2 * price2);
	cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ "<<total<< endl;
	return 0;
}