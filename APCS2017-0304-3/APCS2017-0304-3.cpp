#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0, -1, 0, 1};
const int dy[] = {-1, 0, 1, 0};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, dir;
	cin >> n >> dir;
	vector<vector<int>> grid(n, vector<int>(n));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> grid[i][j];
		}
	}
	int x = n / 2, y = n / 2;
	cout << grid[x][y];
	for(int l = 1; l < n; l++) {
		for(int r = 0; r < 2; r++) {
			for(int i = 0; i < l; i++) {
				x += dx[dir];
				y += dy[dir];
				cout << grid[x][y];
			}
			dir = (dir + 1) % 4;
		}
	}
	for(int l = 1; l < n; l++) {
		x += dx[dir];
		y += dy[dir];
		cout << grid[x][y];
	}
	cout << "\n";
	return 0;
}
