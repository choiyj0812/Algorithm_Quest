#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int N;
		unsigned long long D[101];
		cin >> N;

		D[0] = 0;
		D[1] = D[2] = 1;
		for (int i = 3; i <= N; i++) {
			D[i] = D[i - 2] + D[i - 3];
		}

		cout << D[N] << endl;
	}

	return 0;
}