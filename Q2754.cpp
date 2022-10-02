#include <iostream>
#include <string>

using namespace std;

int main() {
	string score;
	cin >> score;
	if (score == "A+") cout << "4.3" << endl;
	else if (score == "A0") cout << "4.0" << endl;
	else if (score == "A-") cout << "3.7" << endl;

	else if (score == "B+") cout << "3.3" << endl;
	else if (score == "B0") cout << "3.0" << endl;
	else if (score == "B-") cout << "2.7" << endl;

	else if (score == "C+") cout << "2.3" << endl;
	else if (score == "C0") cout << "2.0" << endl;
	else if (score == "C-") cout << "1.7" << endl;

	else if (score == "D+") cout << "1.3" << endl;
	else if (score == "D0") cout << "1.0" << endl;
	else if (score == "D-") cout << "0.7" << endl;

	else if (score == "F") cout << "0.0" << endl;

	return 0;
}