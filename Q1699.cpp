#include <iostream>

using namespace std;

unsigned long long D[100001] = { 0 };

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		D[i] = i;
		for (int j = 1; j * j <= i; j++) {
			if (D[i] > (D[i - j * j] + 1)) {
				D[i] = D[i - j * j] + 1;
			}
		}
	}

	cout << D[N] << endl;

	return 0;
}