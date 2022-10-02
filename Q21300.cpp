#include <iostream>
#include <string>

using namespace std;

int main() {
	int result = 0;
	for (int i = 0; i < 6; i++) {
		int tmp;
		cin >> tmp;
		result += (5 * tmp);
	}
	cout << result;

	return 0;
}