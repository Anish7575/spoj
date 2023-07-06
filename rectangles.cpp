#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	int n;
	cin >> n;
	int x = 1, res = 0;
	while (x*x <= n) {
		res += ((n - x*x)/x + 1);
		x++;
	}
	cout << res << "\n";
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
