#include <iostream>

using namespace std;

int main() {
	unsigned int n;
	cin >> n;

	if (n == 1) {
		cout << 1 << endl;
		return 0;
	}

	unsigned int d[1001];
	d[0] = 1;
	d[1] = 1;
	for (int i = 2; i <= n; i++) {
		d[i] = (((d[i - 1] % 10007) + (d[i - 2] % 10007)) % 10007);
	}

	cout << d[n]<< endl;

	return 0;
}