#include <iostream>

using namespace std;

int main() {
	int m = 1, n = 1;
	while (1) {
		cin >> m >> n;
		if (m == 0 && n == 0) break;

		if (m > n) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}