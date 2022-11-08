#include <iostream>

using namespace std;

int D[1001] = { 1 };
int num[1001] = { 0 };

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}

	for (int i = 1; i <= N; i++) {
		D[i] = 1;
		for (int j = 1; j < i; j++) {
			if (num[i] < num[j] && D[i] < (D[j] + 1)) {
				D[i] = D[j] + 1;
			}
		}
	}

	int answer = D[1];
	for (int i = 2; i <= N; i++) {
		if (answer < D[i]) answer = D[i];
	}
	cout << answer;

	return 0;
}