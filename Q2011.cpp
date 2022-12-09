//¹ÌÇØ°á
#include <iostream>
#include <cstring>
#define mod 1000000

using namespace std;

char WORD[5001];
unsigned long long D[5001] = { 0 };

int main() {
	cin >> (WORD + 1);
	unsigned int N = (int)strlen((WORD + 1));
	
	D[0] = 1;
	for (int i = 1; i <= N; i++) {
		int x = WORD[i] - '0';
		if (1 <= x && x <= 9) {
			D[i] += D[i - 1];
			D[i] %= mod;
		}

		if (WORD[i - 1] == '0' || i == 1) {
			continue;
		}

		x = (WORD[i - 1] - '0') * 10 + (WORD[i] - '0');
		if (10 <= x && x <= 26) {
			D[i] += D[i - 2];
			D[i] %= mod;
		}
	}

	cout << D[N] << endl;

	return 0;
}