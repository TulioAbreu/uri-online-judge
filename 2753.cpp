#include <iostream>
using namespace std;

int main() {
    int vars[26];
    
    vars[0] = 97;
    for (int i = 1; i < 26; ++i) {
        vars[i] = vars[i-1]+1;
    }

    for (int i = 0; i < 26; ++i) {
        cout << vars[i] << " e " << (char)('a'+i) << endl;
    }

    return 0;
}