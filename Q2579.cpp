#include <iostream>

using namespace std;

unsigned int D[301][3] = { {0,0,0} };
unsigned int num[301] = { 0 };

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}

	D[1][1] = num[1];
	for (int i = 2; i <= N; i++) {
		D[i][1] = max(D[i - 2][1], D[i - 2][2]) + num[i];
		D[i][2] = D[i - 1][1] + num[i];
	}

	cout << max(D[N][1], D[N][2]) << endl;

	return 0;
}