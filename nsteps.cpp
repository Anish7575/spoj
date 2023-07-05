#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	int x, y;
	cin >> x >> y;
	if ((x == y) || (x - y == 2)) {
		if ((x&1))
			cout << x + y - 1 << "\n";
		else
			cout << x + y << "\n";
	} else
		cout << "No Number\n";
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
