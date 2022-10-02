#include <iostream>
#include <string>

using namespace std;

int main() {
	string str[] = {
		"         ,r'\"7",
		"r`-_   ,'  ,/",
		" \\. \". L_r'",
		"   `~\\/",
		"      |",
		"      |"
	};

	for (int i = 0; i < 6; i++) {
		cout << str[i] << endl;
	}

	return 0;
}