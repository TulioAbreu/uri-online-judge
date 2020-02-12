#include <iostream>
#include <string>
using namespace std;

void Program(string input);
bool checkString(string input);

int main()
{
     string input;

     while (cin >> input)
          Program(input);

     return 0;
}

void Program(string input)
{
     bool correct = checkString(input);

     if (correct) cout << "correct" << endl;
     else cout << "incorrect" << endl;
}

bool checkString(string input) {
     int stack = 0;
     bool correct = true;
     for (size_t i = 0; i < input.length(); ++i) {
          if (input[i] == '(') {
               stack ++;
          } else if (input[i] == ')') {
               stack --;
          }

          if (stack < 0) {
               correct = false;
               break;
          }
     }

     if (stack != 0) {
          correct = false;
     }
     return correct;
}
