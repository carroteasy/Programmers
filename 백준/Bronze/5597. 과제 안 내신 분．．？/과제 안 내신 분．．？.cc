#include <iostream>
using namespace std;

int main() {
	int n;
	int std[31] = { 0 };

	for (int i = 0; i < 28; i++) {
		cin >> n;
		std[n] = n;
	}

	for (int i = 1; i <= 30; i++) {
		if (std[i] == 0) {
			cout << i << '\n';
		}
	}
}