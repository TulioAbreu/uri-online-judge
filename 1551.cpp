#include <iostream>
#include <string>
using namespace std;

enum TipoFrase {
	FRASE_COMPLETA = 0,
	FRASE_QUASE_COMPLETA,
	FRASE_MAL_ELABORADA
};

const int QT_LETRAS_ALFABETO = 26;

void start_zero(int values[], int size) {
	for (int i = 0; i < size; ++i) {
		values[i] = 0;
	}
}

TipoFrase checar_frase(string frase) {
	int letras [QT_LETRAS_ALFABETO];
	start_zero(letras, QT_LETRAS_ALFABETO);
	
	for (size_t i = 0; i < frase.size(); ++i) {
		if (frase[i] != ' ' && frase[i] != ',') {
			letras[frase[i]-'a']++;
		}
	}

	int qt_letras_usadas = 0;
	for (int i = 0; i < QT_LETRAS_ALFABETO; ++i) {
		if (letras[i] > 0) {
			qt_letras_usadas++;
		}
	}
	
	if (qt_letras_usadas == QT_LETRAS_ALFABETO) {
		return FRASE_COMPLETA;
	}
	else if (qt_letras_usadas >= QT_LETRAS_ALFABETO/2) {
		return FRASE_QUASE_COMPLETA;
	}
	else {
		return FRASE_MAL_ELABORADA;
	}
}
	

int main() {
	int num_testes;
	cin >> num_testes;
	
	for (int i = 0; i < num_testes; ++i) {
		string input_str;
		
		cin.ignore();
		getline(cin, input_str);
		
		switch(checar_frase(input_str)) {
		case FRASE_COMPLETA: {
			cout << "frase completa" << endl;
		} break;
		case FRASE_MAL_ELABORADA: {
			cout << "frase mal elaborada" << endl;
		} break;
		case FRASE_QUASE_COMPLETA: {
			cout << "frase quase completa" << endl;
		} break;
		}
	}	
	return 0;
}