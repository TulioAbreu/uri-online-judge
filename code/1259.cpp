#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Program();
bool eh_par(int num);

int main()
{
     Program();

     return 0;
}

void Program()
{
     int list_size;
     cin >> list_size;

     vector<int> pares;
     vector<int> impares;

     for (int i = 0; i < list_size; ++i) {
          int num;
          cin >> num;

          if (eh_par(num)) {
               pares.push_back(num);
          } else {
               impares.push_back(num);
          }
     }

     sort(pares.begin(), pares.end());
     sort(impares.begin(), impares.end());
     reverse(impares.begin(), impares.end());

     for (auto num:pares) {
          cout << num << endl;
     }

     for (auto num:impares) {
          cout << num << endl;
     }
}

bool eh_par(int num)
{
     return (num % 2) == 0;
}