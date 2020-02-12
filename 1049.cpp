#include <iostream>
#include <string>
using namespace std;

int main()
{
     string word[3];

     for (int i = 0; i < 3; ++i) {
          cin >> word[i];
     }

     string response;
     if (word[0] == "vertebrado") {
          if (word[1] == "ave") {
               if (word[2] == "carnivoro") {
                    response = "aguia";
               } else {
                    response = "pomba";
               }
          } else {
               if (word[2] == "onivoro") {
                    response = "homem";
               } else {
                    response = "vaca";
               }
          }
     } else {
          if (word[1] == "inseto") {
               if (word[2] == "hematofago") {
                    response = "pulga";
               } else {
                    response = "lagarta";
               }
          } else {
               if (word[2] == "hematofago") {
                    response = "sanguessuga";
               } else {
                    response = "minhoca";
               }
          }          
     }

     cout << response << endl;
     return 0;
}