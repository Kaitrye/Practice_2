#include <iostream>

int main() {

int n;
std::cin >> n;

for (int row=1, star=1, space=n-1; row<=n; ++row, star+=2, --space) {
	for (int i=1; i<=space; ++i) {
		std::cout << ' ';
	}
	for (int i=1; i<=star; ++i){
		std::cout << '*';
	}
	for (int i=1; i<=space; ++i) {
		std::cout << ' ';
	}
	std::cout << std::endl;
}

return 0;
}


