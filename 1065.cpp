#include <iostream>

using namespace std;

bool Par(int n) { return (n % 2) == 0; }

int main()
{
     int values[5];
     int sum = 0;
     for (int i = 0; i < 5; ++i) {
          cin >> values[i];
          if (Par(values[i])) sum ++;
     }
     cout << sum << " valores pares" << endl;

     return 0;
}