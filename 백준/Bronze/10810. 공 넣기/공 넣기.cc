#include <iostream>
using namespace std;

int main() {
	int arr[100] = { 0 };
	int n, m;
	cin >> n >> m;

	for (int x = 0; x < m; x++) {
		int i, j, k;
		cin >> i >> j >> k;
		for (int y = i; y <= j; y++) {
			arr[y] = k;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
}