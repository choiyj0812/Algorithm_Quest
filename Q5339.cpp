#include <iostream>
#include <string>
using namespace std;
int main() {
	string str[10] = {
		"     /~\\",
		"    ( oo|",
		"    _\\=/_",
		"   /  _  \\",
		"  //|/.\\|\\\\",
		" ||  \\ /  ||",
		"============",
		"|          |",
		"|          |",
		"|          |"
	};

	for (int i = 0; i < 10; i++) cout << str[i] << endl;
	return 0;
}