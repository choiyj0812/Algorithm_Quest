#include <iostream>
using namespace std;
int main() {
	int num = 0;
	for (int i = 0; i < 5; i++) {
		int tmp;
		cin >> tmp;

		num += tmp;
	}
	cout << num;

	return 0;
}