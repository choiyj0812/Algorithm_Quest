#include <iostream>
#include <string>

using namespace std;

typedef struct {
	string str;
	int age;
	int weight;
} Data;

int main() {
	while (1) {
		Data human = {"", 0, 0};
		cin >> human.str >> human.age >> human.weight;

		if (human.str == "#" && human.age == 0 && human.weight == 0) break;

		if (human.age > 17 || human.weight >= 80)
			cout << human.str << " " << "Senior" << endl;
		else
			cout << human.str << " " << "Junior" << endl;
	}

	return 0;
}