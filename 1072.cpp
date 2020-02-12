#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isInInterval(int number);
vector<int>* startArray(int n);
vector<bool>* resultArray(vector<int>* array);

int main()
{
     int n;
     cin >> n;
     vector<int>* array = startArray(n);     
     vector<bool>* res_array = resultArray(array);

     int in = 0;
     int out = 0;

     for (size_t i = 0; i < res_array->size(); ++i) {
          if (res_array->at(i)) {
               in ++;
          } else {
               out ++;
          }
     }

     cout << in << " in" << endl;
     cout << out << " out" << endl;

     return 0;
}

bool isInInterval(int number)
{
     if (number >= 10 && number <= 20) {
          return true;
     } else {
          return false;
     }
}

vector<int>* startArray(int n)
{
     vector<int>* array = new vector<int>();

     for (int i = 0; i < n; ++i)
     {
          int num;
          cin >> num;

          array->push_back(num);
     }

     return array;
}

vector<bool>* resultArray(vector<int>* array)
{
     vector<bool>* result = new vector<bool>();

     for (auto number:*array) {
          result->push_back((isInInterval(number)? true:false));
     }

     return result;
}