#include <iostream>
#include <string>

using namespace std;

int main() {
	unsigned long long X;
	int N;
	unsigned long long sum = 0;

	cin >> X;
	cin >> N;
	for (int i = 0; i < N; i++) {
		unsigned long long a, b;
		cin >> a >> b;

		sum += (a * b);
	}

	if (sum == X) cout << "Yes";
	else cout << "No";

	return 0;
}