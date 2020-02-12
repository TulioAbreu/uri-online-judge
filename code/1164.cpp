#include <iostream>
using namespace std;

bool isDisivisbleBy(int number, int div) {
    if (div == 0) return false;
    
    return (number%div) == 0;    
}

bool isPerfectNumber(int number) {
    int sum = 0;
    for (int i = 1; i < number; ++i) {
        if (isDisivisbleBy(number, i)) {
            sum += i;
        }
    }
    return (sum==number);
}

void test() {
    int number;
    cin >> number;

    if (isPerfectNumber(number)) {
        cout << number << " eh perfeito" << endl;
    }
    else {
        cout << number << " nao eh perfeito" << endl;
    }
}

int main() {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; ++i) {
        test();
    }
    return 0;
}