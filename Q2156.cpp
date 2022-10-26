#include <iostream>

#define max(x,y) ((x>y) ? x : y)

using namespace std;

unsigned long long D[10001][3] = { 0 };
unsigned long long sake[10001] = { 0 };

int main(){
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> sake[i];
	}

	if (N == 1) {
		cout << sake[1] << endl;
		return 0;
	}
	D[1][0] = 0;
	D[1][1] = D[1][2] = sake[1];

	for (int i = 2; i <= N; i++) {
		D[i][0] = max(D[i - 1][0], max(D[i - 1][1], D[i - 1][2]));
		D[i][1] = D[i - 1][0] + sake[i];
		D[i][2] = D[i - 1][1] + sake[i];
	}

	cout << max(D[N][0], max(D[N][1], D[N][2])) << endl;

	return 0;
}