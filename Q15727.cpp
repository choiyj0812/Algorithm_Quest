#include <iostream>
#include <string>

using namespace std;

int main() {
	int L, result = 0;
	cin >> L;

	result = (L / 5);
	if ((L % 5) != 0) result++;

	cout << result << endl;

	return 0;
}