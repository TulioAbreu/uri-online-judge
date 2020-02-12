#include <iostream>
#include <iomanip>
using namespace std;

bool formaTriangulo(float a, float b, float c)
{
	bool triangulo = true;
	if ((a >= b + c) ||
		(b >= a + c) ||
		(c >= a + b)){
		triangulo = false;
	}
	return triangulo;
}

int main() 
{
	float a, b, c;
	cin >> a >> b >> c;
	
	if (formaTriangulo(a, b, c)) {
		cout << "Perimetro = " << fixed << setprecision(1) << a + b + c << endl;
	} else {
		cout << "Area = " << fixed << setprecision(1) << (a + b) * c/2 << endl;
	}
	
	return 0;
}