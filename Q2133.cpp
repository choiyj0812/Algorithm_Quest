#include <iostream>

using namespace std;

unsigned int D[31] = { 0 };

int main() {
	int N;
	cin >> N;

	D[0] = 1;
	for (int i = 2; i <= N; i+=2) {
		D[i] = 3 * D[i - 2];
		for (int j = i - 4; j >= 0; j -= 2) {
			D[i] += D[j] * 2;
		}
	}

	cout << D[N] << endl;

	return 0;
}