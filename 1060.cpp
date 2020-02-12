#include <iostream>
#include <iomanip>
using namespace std;

bool Positivo(int n) 
{
     return n > 0;
}

void array_input(float arr[], int size) 
{
     for (int i = 0; i < size; ++i) {
          cin >> arr[i];
     }
}

int main()
{
     float numeros[6];
     array_input(numeros, 6);

     float sum = 0;
     int pos = 0;
     for (int i = 0; i < 6; ++i) {
          if (Positivo(numeros[i])) {
               pos ++;
               sum += numeros[i];
          }
     }
     
     cout << pos << " valores positivos" << endl;
     // cout << fixed << setprecision(1) <<  sum/pos << endl;

     return 0;
}