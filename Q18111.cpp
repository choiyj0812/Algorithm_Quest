#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> V;

int main() {
	int N, M, B;
	cin >> N >> M >> B;
	int m_height;
	unsigned int m_time = 0xffffffff;

	for (int i = 0; i < N; i++) {
		vector<int> tmp;
		for (int j = 0; j < M; j++) {
			int temp;
			cin >> temp;
			tmp.push_back(temp);
		}
		V.push_back(tmp);
	}

	for (int w_height = 0; w_height <= 256; w_height++) {
		int build = 0, remove = 0;
		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++) {
				int height = V[i][j] - w_height;
				if (height > 0) remove += height;
				else if (height < 0) build -= height;
			}
		}

		if (remove + B >= build) {
			int time = remove * 2 + build;
			if (m_time >= time) {
				m_time = time;
				m_height = w_height;
			}
		}
	}
	cout << m_time << " " << m_height << endl;

	return 0;
}