#include <iostream>
#include <string>
using namespace std;

void test();

int main() {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; ++i) {
        test();
    }
    return 0;
}

void test() {
    int termsNumber;
    cin >> termsNumber;

    int sumResult = 0;
    int nextNumber = 1;
    for (int i = 0; i < termsNumber; ++i) {
        sumResult += nextNumber;
        nextNumber *= -1;
    }
    cout << sumResult << endl;
}