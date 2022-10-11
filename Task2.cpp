#include <iostream>

int main() {

int n;
std::cin >> n;

for (int row=1, star=1, place=n-1; row<=n; ++row, star+=2, --place) {
	for (int i=1; i<=place; ++i) {
		std::cout << " ";
	}
	for (int i=1; i<=star; ++i){
		std::cout << "*";
	}
	for (int i=1; i<=place; ++place) {
		std::cout << " ";
	}
	std::cout << std::endl;
}

return 0;
}


