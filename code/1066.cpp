#include <iostream>

using namespace std;

bool Positivo(int n) {
     return n > 0;
}

bool Negativo(int n) {
     return n < 0;
}

bool Par(int n) {
     return (n % 2 == 0);
}

bool Impar(int n) {
     return ! Par(n);
}

int main()
{
     int pares, impares, positivos, negativos;
     pares = impares = positivos = negativos = 0;

     for (int i = 0; i < 5; ++i) {
          int num;
          cin >> num;

          if (Positivo(num)) positivos ++;
          if (Negativo(num)) negativos ++;
          if (Par(num)) pares ++;
          if (Impar(num)) impares ++;
     }

     cout << 
          pares << " valor(es) par(es)" << endl <<
          impares << " valor(es) impar(es)" << endl <<
          positivos << " valor(es) positivo(s)" << endl <<
          negativos << " valor(es) negativo(s)"
     << endl;

     return 0;
}