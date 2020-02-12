#include <iostream>

using namespace std;

int hour_interval(int inicio, int fim);

int main()
{
     int inicio, fim;

     cin >> inicio >> fim;

     cout << "O JOGO DUROU " <<
          hour_interval(inicio, fim) 
          << " HORA(S)" << endl;

     return 0;
}

int hour_interval(int inicio, int fim)
{
     int hours = 0;

     while (inicio != fim) {
          hours ++;
          inicio ++;
          if (inicio == 24) inicio = 0;
     }

     if (hours == 0) hours = 24;
     
     return hours;
}