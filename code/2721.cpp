#include <iostream>
using namespace std;

string renas[] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};

int sum(int arr[], int n);

int main() 
{
     int snowballs[9];
     for (int i = 0; i < 9; ++i) {
          cin >> snowballs[i];
     }
     
     int n_snowballs = sum(snowballs, 9);

     int i = 0;
     string vencedora = renas[i];
     while (n_snowballs > 1) {
          
          n_snowballs --;
          i ++;
          
          if (i >= 9) i = 0;
          vencedora = renas[i];
     }
     
     cout << vencedora << endl;

     return 0;
}

int sum(int arr[], int n)
{
     int s = 0;
     for (int i = 0; i < n; ++i) {
          s += arr[i];
     }
     return s;
}
