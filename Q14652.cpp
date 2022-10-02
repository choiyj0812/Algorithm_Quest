#include <iostream>
#include <string>

using namespace std;

int main() {
	int k, N, M;
	int n, m;
	cin >> N >> M >> k;
	n = k / M;
	m = k % M;
	cout << n << " " << m << endl;

	return 0;
}