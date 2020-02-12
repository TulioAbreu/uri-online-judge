#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int TIPO, QUANTIDADE;
    float USADO, CACHORRO_QUENTE = 4.00, X_SALADA = 4.50, X_BACON = 5.00, TORRADA = 2.00, REFRI = 1.50, VALOR;
    cin >> TIPO >> QUANTIDADE;
    if ( TIPO == 1 )
        USADO = 4.00;
    else if ( TIPO == 2 )
        USADO = 4.5;
    else if ( TIPO == 3 )
        USADO = 5;
    else if ( TIPO == 4 )
        USADO = 2;
    else if ( TIPO == 5 )
        USADO = 1.5;
    VALOR = USADO * QUANTIDADE;
    cout << fixed << setprecision(2);
    cout << "Total: R$ "<<VALOR<<endl;
    return 0;
}