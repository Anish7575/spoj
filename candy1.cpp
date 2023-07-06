#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	int n;
	while (true) {
		cin >> n;
		if (n == -1) break;
		vector<int> c(n);
		for (int i = 0; i < n; i++) cin >> c[i];
		int sum = accumulate(c.begin(), c.end(), 0);
		if (sum%n != 0)
			cout << -1 << "\n";
		else {
			int avg = sum/n, res = 0;
			for (auto it: c) {
				res += max(0, avg - it);
			}
			cout << res << "\n";
		}

	}
}

void preprocess(){}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	preprocess();

	int t = 1;
	//cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
