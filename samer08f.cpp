#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	int n;
	while (true) {
		cin >> n;
		if (n == 0)
			break;
		cout << (n*(n + 1)*(2*n + 1))/6 << "\n";
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
