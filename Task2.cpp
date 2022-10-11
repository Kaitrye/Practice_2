#include <iostream>

int main() {

int n;
std::cin >> n;

for (int i=1, j=1, z=n-1; i<=n; ++i, j+=2, z--) {
	for (int v=1; v<=z; ++v) {
		std::cout << " ";
	}
	for (int v=1; v<=j; ++v){
		std::cout << "*";
	}
	for (int v=1; v<=z; ++v) {
		std::cout << " ";
	}
	std::cout << std::endl;
}

return 0;
}


