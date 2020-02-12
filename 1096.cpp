#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 9; i+=2) {
        int aux=7;
        for (int j = 0; j < 3; ++j) {
            cout << "I="<< i+1 << " J=" << aux<< endl;
            aux--;
        }
    }
    return 0;
}