#include <bits/stdc++.h>

using namespace std;

long funcUtil(unordered_map<long, long>&, int n);
void solve();
void preprocess();

long funcUtil(unordered_map<long, long>& dp, long n) {
	if (n == 0)
		return 0;
	if (dp.find(n/2) == dp.end()) {
		dp[n/2] = funcUtil(dp, n/2);
	} 
	if (dp.find(n/3) == dp.end()) {
		dp[n/3] = funcUtil(dp, n/3); 
	}
	if (dp.find(n/4) == dp.end()) {
		dp[n/4] = funcUtil(dp, n/4);
	}
	dp[n] = max(n, dp[n/2] + dp[n/3] + dp[n/4]);
	return dp[n];
}

void solve()
{
	long n;
	unordered_map<long, long> dp;
	dp[0] = 0;
	while ((cin >> n)) {
		funcUtil(dp, n);
		cout << dp[n] << "\n";
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
