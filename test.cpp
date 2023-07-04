#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int x;
	while (true) {
		cin >> x;
		if (x == 42)
			break;
		cout << x << "\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	//cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
