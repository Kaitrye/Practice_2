#include <iostream>

void Space(int n) {
	for (int v=1; v<=n; ++v) {
		std::cout << ' ';
	}
};

int main() {

int n;
std::cin >> n;

for (int i=1, j=1, z=n-1; i<=n; ++i, j+=2, --z) {
	for (int h=0; h<n; ++h){
		Space(z);
		for (int v=1; v<=j; ++v){
			std::cout << '*';
		}
		Space(z);
	}
	std::cout << std::endl;
}

for (int i=2, j=1+(n-2)*2, z=1; i<=n; ++i, j-=2, ++z) {
	for (int h=0; h<n; ++h) {
		Space(z);
		for (int v=1; v<=j; ++v) {
			std::cout << '*';
		}
		Space(z);
	}
	std::cout << std::endl;
}

return 0;
}


