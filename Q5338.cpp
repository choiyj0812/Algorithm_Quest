#include <iostream>
#include <string>
using namespace std;
int main() {
	string str[5] = {
		"       _.-;;-._",
		"'-..-'|   ||   |",
		"'-..-'|_.-;;-._|", 
		"'-..-'|   ||   |",
		"'-..-'|_.-''-._|"
	};
	for (int i = 0; i < 5; i++) cout << str[i] << endl;

	return 0;
}