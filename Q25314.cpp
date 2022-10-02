#include <iostream>
#include <string>

using namespace std;

int main() {
	int byte;
	cin >> byte;
	for (int i = 0; i < (byte / 4); i++) {
		cout << "long ";
	}
	if (byte % 4 != 0) cout << "long ";
	cout << "int" << endl;

	return 0;
}