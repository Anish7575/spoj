#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();
bool checkVal(vector<int>&, int, int);


bool checkVal(vector<int>& pos, int m, int c) {
	int last = pos[0];
	c--;
	for (int i = 1; i < pos.size(); i++) {
		if (pos[i] - last >= m) {
			if (--c == 0)
				return true;
			last = pos[i];
		}
	}
	return false;
}

void solve()
{
	int n, c;
	cin >> n >> c;
	vector<int> pos(n, 0);
	for (int i = 0; i < n; i++) cin >> pos[i];

	sort(pos.begin(), pos.end());

	int l = 0, h = 1e9;

	while (l < h) {
		int m = l + (h - l + 1)/2;

		if (checkVal(pos, m, c)) {
			l = m;
		} else {
			h = m - 1;
		}
	}
	cout << l << "\n";
}

void preprocess(){}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	preprocess();

	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
