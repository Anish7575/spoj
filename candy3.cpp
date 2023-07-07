#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	long long n, x, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum = (sum%n + x%n)%n;
	}
	if (sum%n == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
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
