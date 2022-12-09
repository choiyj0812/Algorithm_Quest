#include <iostream>
#include <cstring>

using namespace std;

char String[2502];
bool C[2501][2501];
int D[2501] = { 0 };

int main() {
	cin >> (String+1);
	int N = (int)strlen(String+1);

	for (int i = 1; i <= N; i++) C[i][i] = true;
	for (int i = 1; i <= N - 1; i++) {
		if (String[i] == String[i + 1]) C[i][i + 1] = true;
	}
	for (int k = 2; k < N; k++) {
		for (int i = 1; i <= N - k; i++) {
			int j = i + k;
			C[i][j] = (String[i] == String[j] && C[i + 1][j - 1]);
		}
	}
	D[0] = 0;
	for (int i = 1; i <= N; i++) {
		D[i] = -1;
		for (int j = 1; j <= i; j++) {
			if (C[j][i]) {
				if (D[i] == -1 || D[i] > D[j - 1] + 1) {
					D[i] = D[j - 1] + 1;
				}
			}
		}
	}

	cout << D[N] << endl;

	return 0;
}