#include <iostream>

#define m 1000000000

using namespace std;

unsigned long long d[101][10];

int main() {
	int N;
	cin >> N;
	
	for (int i = 1; i < 10; i++) {
		d[1][i] = 1;
	}
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			d[i][j] = 0;
			if (j - 1 >= 0) {
				d[i][j] += d[i - 1][j - 1];
			}
			if (j + 1 <= 9) {
				d[i][j] += d[i - 1][j + 1];
			}
			d[i][j] %= m;
		}
	}

	unsigned long long sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += (d[N][i] % m);
	}
	cout << (sum % m) << endl;

	return 0;
}