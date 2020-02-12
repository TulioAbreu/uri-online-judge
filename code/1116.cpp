#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int exec_times;
    cin >> exec_times;
    for (int i = 0; i < exec_times; ++i) {
        float a, b;
        cin >> a >> b;
        if (b == 0) {
            cout << "divisao impossivel" << endl;
        }
        else {
            cout << fixed << setprecision(1);
            cout << a/b << endl;
        }
    }
    return 0;
}