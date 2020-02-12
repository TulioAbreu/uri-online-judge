#include <iostream>
#include <string>
using namespace std;

int main() {
	while (true) {
		int original_width, original_height;
		cin >> original_width >> original_height;

		if (original_width == 0 && original_height == 0) {
			break;
		}
		else {			
			string drawing [original_height];
			for (int i = 0; i < original_height; ++i) {
				cin >> drawing[i];
			}
			
			int new_width, new_height;
			cin >> new_width >> new_height;
			
			int width_proportion =  new_width/original_width;
			int height_proportion = new_height/original_height;
			
			for (int i = 0; i < original_height; ++i) {
				for (int k = 0; k < width_proportion; ++k) {

					for (int j = 0; j < original_width; ++j) {
						for(int l = 0; l < height_proportion; ++l) {
							cout << drawing[i][j];
						}
					}
					cout << endl;
				}
			}
			
			cout << endl;
		}
	}	
	return 0;
}