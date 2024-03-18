#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, temp1, temp2;
	cin >> a >> b;

	for (int i = 2; i>=0; i--) {
		temp1 += a[i];
	}

	for (int i = 2; i >= 0; i--) {
		temp2 += b[i];
	}
	
	cout << max(temp1, temp2);
}