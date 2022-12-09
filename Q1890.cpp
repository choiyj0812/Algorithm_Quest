#include <iostream>

using namespace std;

uint64_t D[101][101] = { 0 };
unsigned int A[101][101];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> A[i][j];
		}
	}

	D[1][1] = 1;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (A[i][j] == 0) break;
			if (D[i][j] > 0) {
				unsigned int tmp = A[i][j];
				D[i + tmp][j] += D[i][j];
				D[i][j + tmp] += D[i][j];
			}
		}
	}

	cout << D[N][N] << endl;

	return 0;
}