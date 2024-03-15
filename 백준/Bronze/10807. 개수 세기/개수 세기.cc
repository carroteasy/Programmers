#include <iostream>
using namespace std;

int main() {
	int arr[101];
	int n;
	int find;
	int temp=0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> find;

	for (int i = 0; i < n; i++) {
		if (arr[i] == find) {
			temp += 1;
		}
	}
	cout << temp;
}
