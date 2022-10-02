#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	stack<int> s;
	int N;
	cin >> N;

	while (N--) {
		string command;
		cin >> command;
		if (command == "push") {
			int num;
			cin >> num;

			s.push(num);
		}
		else if (command == "pop") {
			if (s.empty() == true) cout << -1 << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (command == "size") {
			cout << s.size() << endl;
		}
		else if (command == "empty") {
			if (s.empty() == false) cout << 0 << endl;
			else cout << 1 << endl;
		}
		else if (command == "top") {
			if (s.empty() == true) cout << -1 << endl;
			else cout << s.top() << endl;
		}
	}

	return 0;
}