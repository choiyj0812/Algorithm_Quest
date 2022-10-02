#include <iostream>
using namespace std;
int main() {
	int num[100];
	int N, v;
	int count = 0;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> num[i];
	cin >> v;

	for (int i = 0; i < N; i++) {
		if (v == num[i]) count++;
	}
	cout << count << endl;

	return 0;
}