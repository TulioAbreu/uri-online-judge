#include <iostream>
 
using namespace std;
int produto(int x, int y);
int main() {
    int x, y;
    cin >> x >> y;
    cout << "PROD = " << produto(x,y) << endl;
 
    return 0;
}
int produto(int x, int y){
    return x * y;
}