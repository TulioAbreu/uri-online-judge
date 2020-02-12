#include <iostream>
#include <vector> 
using namespace std; 

typedef struct Pessoa Pessoa;
struct Pessoa {
     int number;
     bool vivo;
};

void Problem(int caso);
vector<Pessoa>* InitPessoas(int num_pessoas);
Pessoa InitPessoa(int num);
void PrintPessoas(vector<Pessoa>* pessoas);
int Pulo(vector<Pessoa>* pessoas, unsigned int nowPos, int tam_pulo);
void KillPessoa(vector<Pessoa>* pessoas, int pos);
int QtVivos(vector<Pessoa>* pessoas);

int main ()
{
     size_t NC;
     cin >> NC;
     for (size_t i = 0; i < NC; ++i)
          Problem(i + 1);
     return 0;
}

void Problem(int caso)
{
     size_t qt_pessoas, tam_pulo;
     cin >> qt_pessoas >> tam_pulo;

     vector<Pessoa>* pessoas = InitPessoas(qt_pessoas);
     // PrintPessoas(pessoas);

     int nowPos = -1;
     while (QtVivos(pessoas) > 1) {
          nowPos = Pulo(pessoas, nowPos, tam_pulo);
          // cout << "NowPos = " << nowPos << endl;
          KillPessoa(pessoas, nowPos);
          // PrintPessoas(pessoas);
     }

     cout << "Case " << caso << ": ";
     for(auto pessoa:*pessoas) {
          if (pessoa.vivo) {
               cout << pessoa.number;
          }
     }
     cout << endl;

}

Pessoa InitPessoa(int num)
{
     Pessoa pessoa;
     pessoa.number = num;
     pessoa.vivo = true;
     return pessoa;
}

vector<Pessoa>* InitPessoas(int num_pessoas) {
     vector<Pessoa>* pessoas = new vector<Pessoa>();
     for (int i = 1; i <= num_pessoas; ++i) {
          pessoas->push_back(InitPessoa(i));
     }
     return pessoas;
}

void PrintPessoas(vector<Pessoa>* pessoas)
{
     for (auto pessoa:*pessoas) {
          if (pessoa.vivo) {
               if (pessoa.number < 10) {
                    cout << 0 <<  pessoa.number << " ";
               } else {
                    cout <<  pessoa.number << " ";
               }
          }
     }   
     cout << endl;
}

int Pulo(vector<Pessoa>* pessoas, unsigned int nowPos, int tam_pulo)
{
     int pulos = 0;

     while (pulos < tam_pulo) {
          nowPos++;

          if (nowPos >= pessoas->size()) {
               nowPos = 0;
          }

          if (pessoas->at(nowPos).vivo) {
               pulos ++;
          }
     }

     return nowPos;
}

void KillPessoa(vector<Pessoa>* pessoas, int pos)
{
     pessoas->at(pos).vivo = false;
}

int QtVivos(vector<Pessoa>* pessoas)
{
     int qtVivos = 0;

     for (auto pessoa:*pessoas) {
          if (pessoa.vivo)
               qtVivos++;
     }

     return qtVivos;
}
