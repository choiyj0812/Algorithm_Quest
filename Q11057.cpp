#include <iostream>

using namespace std;

unsigned long long d[1001][10] = { 0 };

int main() {
	int N;
	cin >> N;

	if (N == 1) {
		cout << 10;
		return 0;
	}
	for (int i = 0; i < 10; i++) {
		d[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++) {
				d[i][j] += d[i - 1][k];
				d[i][j] %= 10007;
			}
		}
	}

	unsigned long long sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += d[N][i];
		sum %= 10007;
	}
	cout << sum;

	return 0;
}