#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int arr[101];

	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (int x = 0; x < m; x++) {
		int i, j;
		cin >> i >> j;
		swap(arr[i], arr[j]);
	}

	for (int i = 1; i < n+1; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}