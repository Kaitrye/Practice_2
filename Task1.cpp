#include <iostream>

int main() {

int n;
std::cin >> n;

for (int row=0; row<n; ++row) {
	for (int star=0; star<=row; ++star) {
		std::cout << "*";
	}
std::cout << std::endl;
}

return 0;
}
