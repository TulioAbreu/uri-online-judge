#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int times;
    int total_distance = 0;
    cin >> times;
    for (int i = 0; i < times; ++i) {
        int time, speed;
        cin >> time >> speed;
        int distance = time*speed;
        total_distance += distance;
    }
    cout << total_distance << endl;
    return 0;
}
