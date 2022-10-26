#include <iostream>

using namespace std;

unsigned long long d[100001][3] = { 0 };
unsigned long long arr[2][100001] = { 0 };

int Big(int a, int b, int c = 0) {
	int max = 0;
	if (a > max) max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;

		for (int i = 0; i < 2; i++) {
			for (int j = 1; j <= N; j++) {
				cin >> arr[i][j];
			}
		}
		d[0][0] = d[0][1] = d[0][2] = 0;

		for (int i = 1; i <= N; i++) {
			d[i][0] = Big(d[i - 1][0], d[i - 1][1], d[i - 1][2]);
			d[i][1] = Big(d[i - 1][0], d[i - 1][2]) + arr[0][i];
			d[i][2] = Big(d[i - 1][0], d[i - 1][1]) + arr[1][i];
		}

		cout << Big(d[N][0], d[N][1], d[N][2]) << endl;
	}

	return 0;
}