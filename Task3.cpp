#include <iostream>

void Space(int n) {
	for (int i=1; i<=n; ++i) {
		std::cout << ' ';
	}
};

int main() {

int n;
std::cin >> n;

for (int row=1, star=1, space=n-1; row<=n; ++row, star+=2, --space) {
	Space(z);
	for (int i=1; i<=star; ++i){
		std::cout << '*';
	}
	Space(z);
	std::cout << std::endl;
}

for (int row=2, star=1+(n-2)*2, space=1; row<=n; ++row, star-=2, ++space) {
	Space(z);
	for (int i=1; i<=star; ++i) {
		std::cout << '*';
	}
	Space(z);
	std::cout << std::endl;
}
return 0;
}


