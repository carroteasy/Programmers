#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	double score[1001];
	double max = 0;
	double sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (max < score[i]) {
			max = score[i];
		}
	}


	for (int i = 0; i < n; i++) {
		score[i] = score[i] / max * 100;
	}

	for (int i = 0; i < n; i++) {
		sum += score[i];
	}

	cout << sum / n;
}