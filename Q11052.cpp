#include <iostream>

using namespace std;

int d[1001] = { 0 };
int P[1001] = { 0 };

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> P[i];
	}
	d[0] = 0;
	d[1] = P[1];

	if (N == 0 || N == 1) {
		cout << d[N];
		return 0;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			int num = P[j] + d[i - j];
			if (d[i] < num) d[i] = num;
		}
	}
	cout << d[N];
	return 0;
}