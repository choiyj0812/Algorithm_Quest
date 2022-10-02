#include <iostream>

using namespace std;

int zero[41] = { 1,0, };
int one[41] = { 0,1, };

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        for (int i = 2; i <= N; i++) {
            zero[i] = zero[i - 1] + zero[i - 2];
            one[i] = one[i - 1] + one[i - 2];
        }

        cout << zero[N] << " " << one[N] << endl;
    }

	return 0;
}