#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     float salary;
     cin >> salary;
     
     float percent;
     if (salary > 0 && salary <= 400) {
          percent = 15;
     } else if (salary <= 800) {
          percent = 12;
     } else if (salary <= 1200) {
          percent = 10;
     } else if (salary <= 2000) {
          percent = 7;
     } else  {
          percent = 4;
     }

     percent = percent/100;

     float increase = salary * percent;

     cout << fixed << setprecision(2) <<
          "Novo salario: " << salary + increase << endl <<
          fixed << setprecision(2) <<
          "Reajuste ganho: " << increase << endl <<
          fixed << setprecision(0) << 
          "Em percentual: " << percent * 100 << " %" << endl;

     return 0;
}