#include <iostream>

using namespace std;

void swap(int& x, int& y);
bool par(int num);

int main(int argc, char const *argv[])
{
     int X, Y;
     cin >> X >> Y;

     if (X > Y) {
          swap(X, Y);
     }

     int sum = 0;

     for (int i = X + 1; i < Y; ++i) {
          if (! par(i)) {
               sum += i;
          }
     }

     cout << sum << endl;
     return 0;
}

void swap(int& x, int& y)
{
     int a = x;
     x = y;
     y = a;
}

bool par(int num)
{
     return (num % 2) == 0;
}