#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long N, M;
	int maxi = 0;
	long long sum;
	vector<int> vec;
	int ans = 0;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		vec.push_back(a);
		if (a >= maxi) maxi = a;
	}

	int left = 0, right = maxi;

	while (left <= right) {
		int mid = (left + right) / 2;
		sum = 0;
		for (int j = 0; j < N; j++) {
			if (mid < vec[j]) sum += vec[j] - mid;
		}
		if (sum >= M) {
			if (ans < mid) ans = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << ans;

	return 0;
}