#include <iostream>

using namespace std;

unsigned int A[2001];
unsigned int D[2001][2001];

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	int M;
	cin >> M;
	while (M--) {
		int S, E;
		cin >> S >> E;

		for (int i = 1; i <= N; i++) D[i][i] = true;
		for (int i = 1; i <= N - 1; i++) {
			if (A[i] == A[i + 1]) D[i][i + 1] = true;
		}
		for (int k = 3; k <= N; k++) {
			for (int i = 1; i <= N - k; i++) {
				int j = i + k - 1;
				if (A[i] == A[j] && D[i + 1][j - 1]) D[i][j] = true;
			}
		}
		cout << D[S][E] << endl;
	}

	return 0;
}