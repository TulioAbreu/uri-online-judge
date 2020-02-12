#include <iostream>
using namespace std;

void minutesToTime(int duracaoMinutos, int& hours, int& minutes);
int getMinutesBetween(int startHour, int startMinute, int finishHour, int finishMinute);

int main() {
	int startHour, startMinute, finishHour, finishMinute;
	cin >> startHour >> startMinute >> finishHour >> finishMinute;
	
	int duracaoMinutos = getMinutesBetween(startHour, startMinute, finishHour, finishMinute);

	int hours, minutes;
	minutesToTime(duracaoMinutos, hours, minutes);

	cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

	return 0;
}

void minutesToTime(int duracaoMinutos, int& hours, int& minutes) {
	minutes = duracaoMinutos % 60;
	hours = duracaoMinutos / 60;
}

bool differentDays(int startHour, int startMinute, int finishHour, int finishMinute) {
	if (finishHour < startHour) {
		return true;
	}
	else if (finishHour == startHour && finishMinute <= startMinute) {
		return true;
	}
	else {
		return false;
	}
}

int getMinutesBetween(int startHour, int startMinute, int finishHour, int finishMinute) {
	int totalMinutes = 0;

	if (differentDays(startHour, startMinute, finishHour, finishMinute)) {
		totalMinutes +=
			(24-startHour)*60 - startMinute +
			finishMinute + (finishHour)*60;
	}
	else {
		totalMinutes += finishMinute + (finishHour-startHour)*60 - startMinute;
	}

	return totalMinutes;
}
