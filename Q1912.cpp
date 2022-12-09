#include <iostream>

using namespace std;

long long D[100001];
long long num[100001] = { 0 };

long long max(long long a, long long b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}
	D[1] = num[1];
	
	for (int i = 2; i <= N; i++) {
		D[i] = max(D[i - 1] + num[i], num[i]);
	}

	long long ans = -1000;
	for (int i = 1; i <= N; i++) {
		ans = max(ans, D[i]);
	}
	cout << ans << endl;

	return 0;
}