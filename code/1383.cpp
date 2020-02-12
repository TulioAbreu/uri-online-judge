#include <iostream>
using namespace std;

int sudoku[9][9];

int validar(){
	int resultado = 0;
	int contador[9] = {0,0,0,0,0,0,0,0,0}, flag;
	for(int a=0; a<9; a++){
		for(int b=0; b<9; b++){
			if(sudoku[a][b] == 1){
				contador[0]++;
			}
			else if(sudoku[a][b] == 2){
				contador[1]++;
			}
			else if(sudoku[a][b] == 3){
				contador[2]++;
			}
			else if(sudoku[a][b] == 4){
				contador[3]++;
			}
			else if(sudoku[a][b] == 5){
				contador[4]++;
			}
			else if(sudoku[a][b] == 6){
				contador[5]++;
			}
			else if(sudoku[a][b] == 7){
				contador[6]++;
			}
			else if(sudoku[a][b] == 8){
				contador[7]++;
			}
			else{
				contador[8]++;
			}
		}
	}
	
	if(contador[0] == 9 && contador[1] == 9 && contador[2] == 9 && contador[3] == 9 && contador[4] == 9 && contador[5] == 9 && contador[6] == 9 && contador[7] == 9 && contador[8] == 9){
		for(int i = 0; i < 9; i++){
			contador[i] = 0;
		}
		resultado = 1;
		for(int b=0; b<9; b++){
			for(int a=0; a<9; a++){
				if(sudoku[a][b] == 1){
					contador[0]++;
				}
				else if(sudoku[a][b] == 2){
					contador[1]++;
				}
				else if(sudoku[a][b] == 3){
					contador[2]++;
				}
				else if(sudoku[a][b] == 4){
					contador[3]++;
				}
				else if(sudoku[a][b] == 5){
					contador[4]++;
				}
				else if(sudoku[a][b] == 6){
					contador[5]++;
				}
				else if(sudoku[a][b] == 7){
					contador[6]++;
				}
				else if(sudoku[a][b] == 8){
					contador[7]++;
				}
				else if(sudoku[a][b] == 9){
					contador[8]++;
				}
			}
			
			if(contador[0] == 1 && contador[1] == 1 && contador[2] == 1 && contador[3] == 1 && contador[4] == 1 && contador[5] == 1 && contador[6] == 1 && contador[7] == 1 && contador[8] == 1){
				for(int i = 0; i < 9; i++){
					contador[i] = 0;
					flag = 1;
				}
			}			
			else{
				resultado = 0;
				flag = 0;
				break;
			}
		}
		
		if(flag == 1){
			resultado = 1;
			for(int i = 0; i < 9; i++){
				contador[i] = 0;
			}
			int alfa = 0, beta = 0, oi = 1, tchau = 1;
			for(int c = 0; c < 9; c++){
				for(int a=0+alfa; a<3*oi; a++){
					for(int b=0+beta; b<3*tchau; b++){
						if(sudoku[a][b] == 1){
							contador[0]++;
						}
						
						else if(sudoku[a][b] == 2){
							contador[1]++;
						}
						
						else if(sudoku[a][b] == 3){
							contador[2]++;
						}
						
						else if(sudoku[a][b] == 4){
							contador[3]++;
						}
						
						else if(sudoku[a][b] == 5){
							contador[4]++;
						}
						
						else if(sudoku[a][b] == 6){
							contador[5]++;
						}
						
						else if(sudoku[a][b] == 7){
							contador[6]++;
						}
						
						else if(sudoku[a][b] == 8){
							contador[7]++;
						}
						
						else if(sudoku[a][b] == 9){
							contador[8]++;
						}
					}	
					if(contador[0] == 1 && contador[1] == 1 && contador[2] == 1 && contador[3] == 1 && contador[4] == 1 && contador[5] == 1 && contador[6] == 1 && contador[7] == 1 && contador[8] == 1){
						for(int i = 0; i < 9; i++){
							contador[i] = 0;
							flag = 1;
						}
					}			
					else{
						resultado = 0;
						flag = 0;
					}
				}
				if(c < 2){
					beta = beta + 3;
					tchau = tchau + 1;
				}
				if(c == 3){
					beta = 0;
					tchau = 1;
					alfa = 3;
					oi = 2;
				}
				if(c > 3 && c < 6){
					beta = beta + 3;
					tchau = tchau + 1;
				}
				if(c == 6){
					beta = 0;
					tchau = 1;
					alfa = 6;
					oi = 3;
				}
				if(c > 6){
					beta = beta + 3;
					tchau = tchau + 1;
				}
			}
			if(flag == 1){
				return 1;
			}	
			else{
				return 0;
			}
		}

		else	resultado = 0;
	}
	
	else resultado = 0;
	
	return resultado;
}

void inserir(){
	for(int a=0; a<9; a++){
		for(int b=0; b<9; b++){
			cin >> sudoku[a][b];
		}
	}
}

int main(){
	int n, resultado = 0;
	cin >> n;
	for(int a = 0; a < n; a++){
		resultado = 0;
		cout << "Instancia "<< a+1 << endl;
		inserir();
		resultado = validar();
		if (resultado == 0){
			cout << "NAO" << endl;
		}
		else{
			cout << "SIM" << endl;
		}
		
		if (a < n - 1) {
			cout << endl;
		}
	}
	cout << endl;
	
	
}