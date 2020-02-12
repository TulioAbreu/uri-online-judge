#include <iostream>
using namespace std;

const string PLAYER_1 = "rajesh";
const string PLAYER_2 = "sheldon";

const string PEDRA = "pedra";
const string PAPEL = "papel";
const string TESOURA = "tesoura";
const string LAGARTO = "lagarto";
const string SPOCK = "spock";

string Problem(string e1, string e2);

int main(int argc, char const *argv[])
{
    int exec_times;
    cin >> exec_times;
    for (int i = 0; i < exec_times; ++i) {
        string e1, e2;
        cin >> e1 >> e2;
        Problem(e1, e2);
    }
    return 0;
}

string Problem(string e1, string e2)
{
    if (e1 == TESOURA && e2 == PAPEL) {
        cout << PLAYER_1 << endl;
    } else if (e1 == PAPEL && e2 == TESOURA) {
        cout << PLAYER_2 << endl;
    }
    else if (e1 == PAPEL && e2 == PEDRA) {
        cout << PLAYER_1 << endl;
    } else if (e1 == PEDRA && e2 == PAPEL) {
        cout << PLAYER_2 << endl;
    }
    else if (e1 == PEDRA && e2 == LAGARTO) {
        cout << PLAYER_1 << endl;
    } else if (e1 == LAGARTO && e2 == PEDRA) {
        cout << PLAYER_2 << endl;
    }
    else if (e1 == LAGARTO && e2 == SPOCK) {
        cout << PLAYER_1 << endl;
    } else if (e1 == SPOCK && e2 == LAGARTO) {
        cout << PLAYER_2 << endl;
    }
    else if (e1 == SPOCK && e2 == TESOURA) {
        cout << PLAYER_1 << endl;
    } else if (e1 == TESOURA && e2 == SPOCK) {
        cout << PLAYER_2 << endl;
    }
    else if (e1 == TESOURA && e2 == LAGARTO) {
        cout << PLAYER_1 << endl;
    } else if (e1 == LAGARTO && e2 == TESOURA) {
        cout << PLAYER_2 << endl;
    }
    else if (e1 == LAGARTO && e2 == PAPEL) {
        cout << PLAYER_1 << endl;
    } else if (e1 == PAPEL && e2 == LAGARTO) {
        cout << PLAYER_2 << endl;
    }
    else if (e1 == PAPEL && e2 == SPOCK) {
        cout << PLAYER_1 << endl;
    } else if (e2 == SPOCK && e1 == PAPEL) {
        cout << PLAYER_2 << endl;
    }
    else if (e1 == SPOCK && e2 == PEDRA) {
        cout << PLAYER_1 << endl;
    } else if (e1 == PEDRA && e2 == SPOCK) {
        cout << PLAYER_2 << endl;
    }
    else if (e1 == PEDRA && e2 == TESOURA) {
        cout << PLAYER_1 << endl;
    } else if (e1 == TESOURA && e2 == PEDRA) {
        cout << PLAYER_2 << endl;
    }
    else {
        cout << "empate" << endl;
    }
    return "";
}
