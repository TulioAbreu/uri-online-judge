#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    bool runAgain = true;
    int alcool = 0, gasolina = 0, diesel = 0;
    do {
        int tipo_combustivel;

        cin >> tipo_combustivel;
        switch (tipo_combustivel) {
            case 1: {
                alcool ++;
            } break;
            case 2: {
                gasolina ++;
            } break;
            case 3: {
                diesel ++;
            } break;
            case 4: {
                runAgain = false;
            } break;
            default: {
                runAgain = true;
            } break;
        }
    } while (runAgain);
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}
