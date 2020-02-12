#include <iostream>
using namespace std;

int fibonacci(int num, int& calls) {
    calls ++;
    if (num == 0) return 0;
    if (num == 1) return 1;
    return fibonacci(num  - 1, calls) + fibonacci(num - 2, calls);
}

int main(int argc, char const *argv[])
{
    int exec_num;
    cin >> exec_num;
    for (int i = 0; i < exec_num; ++i) {
        int fib_num, calls = -1;
        cin >> fib_num;
        int result = fibonacci(fib_num, calls);
        cout << "fib(" << fib_num << ") = " << calls << " calls = " << result << endl;
    }
    return 0;
}
