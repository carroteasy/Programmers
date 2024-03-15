#include <iostream>
using namespace std;

int main() {
	int arr[100001];
	int n;
	int x;
	cin >> n;
	cin >> x;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] < x) {
			cout << arr[i] << " ";
		}
	}
}