#include <iostream>
#include <string>

using namespace std;

int main() {
	int Money;
	cin >> Money;
	cout << Money - ((Money * 22) / 100) << " ";
	cout << Money - ((Money * 20 / 100) * 22 / 100);

	return 0;
}