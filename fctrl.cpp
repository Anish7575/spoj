#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;

	int t = 5, res = 0;

	while (t <= n) {
		res += (n/t);
		t *= 5;
	}
	cout << res << "\n";
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
