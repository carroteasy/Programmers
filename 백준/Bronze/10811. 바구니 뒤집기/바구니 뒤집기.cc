#include <iostream>
using namespace std;

int main() {
	int n, m, a, b;
	int arr[100] = { 0 };
	
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		for (int j = 0; j <= (b - a) / 2; j++) {
			swap(arr[a + j], arr[b - j]);
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
	
}