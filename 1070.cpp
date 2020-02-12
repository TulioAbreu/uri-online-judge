#include <iostream>

using namespace std;

bool par (int n) { return (n % 2) == 0; }

int main(int argc, char const *argv[])
{
     int X;
     cin >> X;

     int counter = 0;
     while (counter < 6) {
          if (! par(X)) {
               cout << X << endl;
               counter ++;
          }
          X ++;
     } 

     return 0;
}
