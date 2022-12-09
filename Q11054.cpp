#include <iostream>

using namespace std;

unsigned long long D1[1001];
unsigned long long D2[1001];
unsigned int num[1001];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}

	for (int i = 1; i <= N; i++) {
		D1[i] = 1;
		for (int j = 1; j < i; j++) {
			if (num[i] > num[j] && D1[i] < (D1[j] + 1)) {
				D1[i] = D1[j] + 1;
			}
		}
	}
	for (int i = N; i >= 1; i--) {
		D2[i] = 1;
		for (int j = N; j > i; j--) {
			if (num[i] > num[j] && D2[i] < (D2[j] + 1)) {
				D2[i] = D2[j] + 1;
			}
		}
	}

	unsigned long long ans = 0;
	for (int i = 1; i <= N; i++) {
		if (ans < D1[i] + D2[i] - 1) {
			ans = D1[i] + D2[i] - 1;
		}
	}
	cout << ans << endl;

	return 0;
}