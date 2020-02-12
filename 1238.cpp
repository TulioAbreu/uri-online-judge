#include <iostream>
using namespace std;

string Problem(string word1, string word2);

int main(int argc, char const *argv[])
{
    int exec_times;
    cin >> exec_times;
    for (int i = 0; i < exec_times; ++i) {
        string word1, word2;
        cin >> word1 >> word2;
        cout << Problem(word1, word2) << endl;
    }
    return 0;
}

string Problem(string word1, string word2)
{
    string result_str = "";
    for (size_t i = 0; i < 50; ++i) {
        if (i < word1.length()) {
            result_str += word1[i];
        }
        if (i < word2.length()) {
            result_str += word2[i];
        }
    }
    return result_str;
}
