#include <iostream>
using namespace std;

int main() {
	bool students[31];
	int first = 0, second = 0;
	for (int i = 0; i < 31; i++) students[i] = false;
	for (int i = 0; i < 28; i++) {
		int tmp;
		cin >> tmp;
		students[tmp] = true;
	}
	for (int i = 1; i <= 30; i++) {
		if (students[i] == false) {
			if (first == 0) first = i;
			else {
				second = i;
				break;
			}
		}
	}
	cout << first << endl << second;

	return 0;
}