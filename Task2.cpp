#include <iostream>

int main() {

int n;
std::cin >> n;

for (int row=1; row<=n; ++row) {
	for (int i=1; i<=n-row; ++i) {
		std::cout << ' ';
	}
	for (int i=1; i<=2*row-1; ++i){
		std::cout << '*';
	}
	std::cout << std::endl;
}

return 0;
}


