#include <iostream>
using namespace std;

int main() {
	int a, b, c; //1, 3, 2
	cin >> a >> b >> c;
	if (a == b && b == c) {
		cout << 10000 + a * 1000;
	}
	else if (a == b || a == c || b == c) {
		if (a == b) {
			cout << 1000 + a * 100;
		}
		else if (b == c) {
			cout << 1000 + b * 100;
		}
		else {
			cout << 1000 + c * 100;

		}
	}
	else if (a != b && b != c && c != a) {
		int max;
		if (a > b ) {
			if (c > a) {
				max = c;
			}
			else {
				max = a;
			}

		}
		else {
			if (c > b) {
				max = c;
			}
			else {
				max = b;
			}
		}
		
		cout << max * 100;

	}

}