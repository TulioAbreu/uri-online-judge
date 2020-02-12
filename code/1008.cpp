#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int number, hours;
	float received_per_hour, salary;
	cin >> number >> hours >> received_per_hour;
	salary = received_per_hour * hours;
	cout << "NUMBER = "<< number << endl;
	cout << "SALARY = U$ "<<fixed << setprecision(2)<<salary<<endl;
	return 0;
}