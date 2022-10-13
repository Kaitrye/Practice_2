#include <iostream>

bool Function(double x, double y) {

	double sup_f = x*x + y*y - 1;

	if (sup_f*sup_f*sup_f - x*x*y*y*y <= 0) return 1;
	return 0;
}

int main() {
	int const height = 21, width = 41;
	double diff_x = 3./(width-1), diff_y = 3./(height-1);

	for (double y = -1.5; y<=1.5; y+=diff_y){
		for (double x = -1.5; x<=1.5; x+=diff_x) {
			if (Function(x,y)) std::cout << '*';
			else std::cout << '.';	
		}
		std::cout << std::endl;
	}

	return 0;
} 
