#include <iostream>

using namespace std;

unsigned long D[91][2];

int main() {
	int N = 0;
	cin >> N;

	D[0][0] = 0;
	D[0][1] = 0;
	D[1][0] = 0;
	D[1][1] = 1;
	if (N == 0 || N == 1) {
		cout << (D[N][0] + D[N][1]) << endl;
		return 0;
	}

	for (int i = 2; i <= N; i++) {
		D[i][0] = D[i - 1][0] + D[i - 1][1];
		D[i][1] = D[i - 1][0];
	}
	cout << (D[N][0] + D[N][1]) << endl;

	return 0;
}