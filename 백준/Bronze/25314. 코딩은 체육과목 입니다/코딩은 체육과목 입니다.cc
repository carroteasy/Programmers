#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = n / 4;

	for (int i = 0; i < a; i++) {
		cout << "long" << ' ';
	}
	cout << "int";
}