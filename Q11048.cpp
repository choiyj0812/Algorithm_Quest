#include <iostream>

using namespace std;

unsigned long long A[1001][1001];
unsigned long long D[1001][1001] = { 0 };

unsigned long long max(unsigned long long a, unsigned long long b, unsigned long long c) {
	unsigned int M = 0;
	if (a > M) M = a;
	if (b > M) M = b;
	if (c > M) M = c;
	return M;
}

int main() {
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> A[i][j];
		}
	}

	D[1][1] = A[1][1];
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			D[i][j] = max(D[i - 1][j], D[i][j - 1], D[i - 1][j - 1]) + A[i][j];
		}
	}

	cout << D[N][M] << endl;

	return 0;
}