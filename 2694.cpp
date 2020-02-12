#include <iostream>
#include <vector>
using namespace std;

bool isNumber(const char c);
int Problem(string line);
vector<int> getNumberIndexes(string line);
vector<string> getNumberValues(string line, vector<int> number_indexes);

int main(int argc, char const *argv[])
{
    int exec_times;
    cin >> exec_times;
    for (int i = 0; i < exec_times; ++i) {
        string line;
        cin >> line;
        cout << Problem(line) << endl;
    }
    return 0;
}

int Problem(string line)
{
    vector<int> number_indexes = getNumberIndexes(line);
    vector<string> number_values = getNumberValues(line, number_indexes);
    vector<int> real_numbers;
    int sum = 0;
    for (auto number_value:number_values) {
        sum += stoi(number_value);
    }
    return sum;
}


bool isNumber(const char c)
{
    return ((int)c > 47 && (int)c < 58);
}

vector<int> getNumberIndexes(string line)
{
    vector<int> number_indexes;
    for (size_t i = 0; i < line.length(); ++i) {
        if (isNumber(line[i])) {
            number_indexes.push_back(i);
        }
    }
    return number_indexes;
}

vector<string> getNumberValues(string line, vector<int> indexes)
{
    vector<string> numbers_values;
    string number_str = "";
    for (size_t i = 0; i < indexes.size(); ++i) {
        number_str += line[indexes[i]];
        if ((i + 1) < indexes.size()) {
            if (indexes[i + 1] != indexes[i] + 1) {
                numbers_values.push_back(number_str);
                number_str = "";
            }
        }
        else {
            numbers_values.push_back(number_str);
        }
    }
    return numbers_values;
}
