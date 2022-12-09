#include <iostream>
#define mill 1000000000

using namespace std;

uint64_t D[201][201];

int main() {
	int N, K;
	cin >> N >> K;

	D[0][0] = 1;
	for (int i = 1; i <= K; i++) {
		for (int j = 0; j <= N; j++) {
			for (int L = 0; L <= j; L++) {
				D[i][j] += D[i - 1][j - L];
				D[i][j] %= mill;
			}
		}
	}

	cout << D[K][N] << endl;

	return 0;
}