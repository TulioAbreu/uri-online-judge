#include <iostream>
using namespace std;

bool par(int num) 
{
     return (num % 2 == 0);
}

int main()
{
     int n;
     cin >> n;

     for (int i = 1; i <= n; ++i) {
          if (! par(i))
               cout << i << endl;
     }

     return 0;     
}