#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int QT_PROVAS = 4;


int main(int argc, char const *argv[])
{
    float notas[QT_PROVAS];
    for (int i = 0; i < QT_PROVAS; ++i) {
        cin >> notas[i];
        notas[i] *= 10;
    }
    float media = (int)((notas[0]*20 + notas[1]*30 + notas[2]*40 + notas[3]*10)/100.0f);
    cout << "Media: " << fixed << setprecision(1) << media/10.0f << endl;
    if (media >= 70) {
        cout << "Aluno aprovado." << endl;
        return 0;
    }
    if (media < 50) {
        cout << "Aluno reprovado." << endl;
        return 0;
    }
    cout << "Aluno em exame." << endl;
    float nota_exame;
    cin >> nota_exame;
    cout << "Nota do exame: " << nota_exame << endl;
    nota_exame *= 10;
    nota_exame += 0.05;
    float nova_media = (media + nota_exame)/2.0f;
    if (nova_media >= 50) {
        cout << "Aluno aprovado." << endl;
    }
    else {
        cout << "Aluno reprovado." << endl;
    }
    if (nova_media > 100.0f) {
        nova_media = 100;
    }
    cout << "Media final: " << nova_media/10.0f << endl;
    return 0;
}
