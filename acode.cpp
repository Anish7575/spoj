#include <bits/stdc++.h>

using namespace std;

void solve();
void preprocess();


void solve()
{
	string n;
	while (true) {
		cin >> n;
		if (n == "0")
			break;
		vector<int> dp(n.length(), 0);
		dp[0] = 1;
		for (int i = 1; i < n.length(); i++) {
			if (n[i] != '0')
				dp[i] += dp[i - 1];
			string tmp(1, n[i - 1]);
			tmp += n[i];
			int c = stoi(tmp);
			if (c >= 10 && c <= 26) {
				dp[i] += (i - 2 >= 0) ? dp[i - 2] : 1;
			}
		}
		cout << dp[n.length() - 1] << "\n";
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
