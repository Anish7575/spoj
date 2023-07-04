#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int x) {
	if (x < 2)
		return false;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x%i == 0)
			return false;
	}
	return true;
}

void solve()
{
	int l, r;
	cin >> l >> r;
	for (int i = l; i <= r; i++) {
		if (checkPrime(i)) {
			cout << i << "\n";
		}
	}
	cout << "\n";
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
