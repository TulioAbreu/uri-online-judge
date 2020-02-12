#include <iostream>
using namespace std;

int main() {
    int year;
    while (cin >> year) {
        if (year == 0) {
            cout << "vai ter copa!" << endl;
        }
        else {
            cout << "vai ter duas!" << endl;
        }
    }
    return 0;
}