#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


float delta (float a, float b, float c)
{
     return b*b - 4 * a * c;
}

int main(int argc, char* argv[])
{
     double a, b, c;
     cin >> a >> b >> c;
     double deltaValue = delta(a, b, c);

     if (deltaValue < 0 || a == 0)
          cout << "Impossivel calcular" << endl;
     else {
          double x1 = (-b + sqrt(deltaValue))/(2*a);
          double x2 = (-b - sqrt(deltaValue))/(2*a);

          cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
          cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
     }


     return 0;
}