#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double a, r;
    cin >> r;
    a = 3.14159 * r * r;
    cout << fixed << setprecision(4)<< "A="<<a<<endl;
 
    return 0;
}