#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	while (N--) {
		string pswd;
		cin >> pswd;
		if (pswd.length() >= 6 && pswd.length() <= 9) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}