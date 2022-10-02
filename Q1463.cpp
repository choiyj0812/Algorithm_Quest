#include <iostream>

using namespace std;

unsigned int d[10000001];

int main() {
	unsigned int n;
	cin >> n;

	if (n == 1) {
		cout << 0 << endl;
		return 0;
	}

	for (int i = 1; i < n; i++) {
		if (d[i + 1] == 0 || d[i + 1] > d[i]) d[i + 1] = d[i] + 1;
		if (d[i * 2] == 0 || d[i * 2] > d[i]) d[i * 2] = d[i] + 1;
		if (d[i * 3] == 0 || d[i * 3] > d[i]) d[i * 3] = d[i] + 1;
	}
	cout << d[n] << endl;
	return 0;
}