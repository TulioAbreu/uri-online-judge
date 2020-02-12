#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

struct pontos{
	double x;
	double y;
}pt[2];

int main(){
	cin >> pt[0].x >> pt[0].y;
	cin >> pt[1].x >> pt[1].y;
	double distance;
	distance = sqrt( pow(pt[1].x - pt[0].x, 2) + pow (pt[1].y - pt[0].y, 2) );
	cout << fixed << setprecision(4) << distance << endl;
	return 0;
}