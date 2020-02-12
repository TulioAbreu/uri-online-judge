#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, N = -1, sum = 0;
    cin >> A;
    do {
        cin >> N;
    } while (N <= 0);
    for (int i = 0; i < N; ++i) {
        sum += A+i;
    }
    cout << sum << endl;
    return 0;
}
