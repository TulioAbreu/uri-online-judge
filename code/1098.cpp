#include <iostream>
using namespace std;

int main() {
    for (float i = 0; i <= 2.1f; i+=0.2f) {
        int aux = 1;
        for (int j = 0; j < 3; ++j) {
            cout << "I=" << i << " J=" << aux+i << endl;
            aux++;
        }
    }
    return 0;
}