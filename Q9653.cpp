#include <iostream>
#include <string>
using namespace std;
int main() {
	string str1[5] = {
		"    8888888888  888    88888",
		"   88     88   88 88   88  88",
		"    8888  88  88   88  88888",
		"       88 88 888888888 88   88",
		"88888888  88 88     88 88    888888"
	},
		str2[5] = {
		"88  88  88   888    88888    888888",
		"88  88  88  88 88   88  88  88",
		"88 8888 88 88   88  88888    8888",
		" 888  888 888888888 88  88      88",
		"  88  88  88     88 88   88888888"
	};
	for (int i = 0; i < 5; i++) {
		cout << str1[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << str2[i] << endl;
	}

	return 0;
}