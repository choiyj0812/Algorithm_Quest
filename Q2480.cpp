#include <iostream>

using namespace std;

int main() {
	int num[3] = { 0,0,0 };
	cin >> num[0] >> num[1] >> num[2];

	if (num[0] == num[1] && num[1] == num[2]) cout << (num[0] * 1000) + 10000 << endl;
	else if (num[0] == num[1]) cout << (num[0] * 100) + 1000 << endl;
	else if (num[0] == num[2]) cout << (num[0] * 100) + 1000 << endl;
	else if (num[1] == num[2]) cout << (num[1] * 100) + 1000 << endl;
	else {
		int big = 0;
		for (int i = 0; i < 3; i++) {
			if (num[i] > big) big = num[i];
		}
		cout << (big * 100) << endl;
	}

	return 0;
}