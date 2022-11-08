#include <iostream>

using namespace std;

unsigned long long D[1001] = { 0 };
unsigned int num[1001] = { 0 };

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}

	for (int i = 1; i <= N; i++) {
		D[i] = num[i];
		for (int j = 1; j < i; j++) {
			if (num[i] > num[j] && D[i] < (D[j] + num[i])) {
				D[i] = D[j] + num[i];
			}
		}
	}

	unsigned long long ans = D[1];
	for (int i = 2; i <= N; i++) {
		if (ans < D[i]) ans = D[i];
	}
	cout << ans;

	return 0;
}