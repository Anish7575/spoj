#include <bits/stdc++.h>

using namespace std;

void preprocess();
string multiply(string, int);


vector<string> dp(101);

void preprocess() {
	dp[0] = "1";
	for (int i = 1; i < 101; i++) {
		dp[i] = multiply(dp[i - 1], i);
	}
}

string multiply(string mul, int x) {
	int carry = 0;
	string res = "";
	for (int i = mul.length() - 1; i >= 0; i--) {
		int p = (mul[i] - '0') * x + carry;
		res = to_string(p%10) + res;
		carry = p/10;
	}
	if (carry)
		res = to_string(carry) + res;
	return res;
}

void solve()
{
	int n;
	cin >> n;
	cout << dp[n] << "\n";
}

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
