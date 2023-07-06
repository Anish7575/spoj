#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	int n;
	cin >> n;
	vector<int> m(n), w(n);

	for (int i = 0; i < n; i++) cin >> m[i];
	for (int i = 0; i < n; i++) cin >> w[i];

	sort(m.begin(), m.end());
	sort(w.begin(), w.end());

	int res = 0;
	for (int i = 0; i < n; i++)
		res += (m[i]*w[i]);
	cout << res << "\n";
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
