#include <iostream>
using namespace std;

int main() {
	int arr[9];
	
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	int max = arr[0];
	int x = 0;

	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			x = i;
		}
	}

	cout << max << '\n' << x+1;

}