#include <iostream>
using namespace std;

int main() {
    int lower_aux = 7;
    for (int i = 0; i < 9; i+=2) {
        int aux=lower_aux;
        for (int j = 0; j < 3; ++j) {
            cout << "I="<< i+1 << " J=" << aux<< endl;
            aux--;
        }
        lower_aux += 2;
    }
    return 0;
}